#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_METHOD_3_CC31604B3114D401_OFFSET UNITYSDK_OFFSET(0x19AA48E0)
#define RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_METHOD_3_DDD8B67C8961A878_OFFSET UNITYSDK_OFFSET(0x19AA4960)
#define RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA4930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestProgressChangeListener_TypeDefinitionIndex = 20043;

	class QuestProgressChangeListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* QuestID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC31604B3114D401(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QuestProgressChangeListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestProgressChangeListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_METHOD_3_CC31604B3114D401_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDD8B67C8961A878(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QuestProgressChangeListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QuestProgressChangeListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTPROGRESSCHANGELISTENER_METHOD_3_DDD8B67C8961A878_OFFSET))(a1, a2);
		}
	};
}
