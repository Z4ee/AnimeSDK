#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMCONFIG_METHOD_2_7FE98F44E2D350E1_OFFSET UNITYSDK_OFFSET(0x1A3F4D30)
#define RPG_GAMECORE_BATTLEPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F4E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformConfig_TypeDefinitionIndex = 17414;

	class BattlePerformConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		// static const ::System::String* BATTLE_PERFORM_CONFIG_PATH; // 0x0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartTaskList; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEndTaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7FE98F44E2D350E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMCONFIG_METHOD_2_7FE98F44E2D350E1_OFFSET))(a1, a2);
		}
	};
}
