#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimGroupEventEntry; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ANIMGROUPEVENTCONFIG_METHOD_2_7139AE676B73FDDB_OFFSET UNITYSDK_OFFSET(0x1C56B260)
#define RPG_GAMECORE_ANIMGROUPEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56B460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimGroupEventConfig_TypeDefinitionIndex = 16121;

	class AnimGroupEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>* States; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x20
		::System::Boolean ForceCheckEnteredWhenTriggerExit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMGROUPEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7139AE676B73FDDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimGroupEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimGroupEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMGROUPEVENTCONFIG_METHOD_2_7139AE676B73FDDB_OFFSET))(a1, a2);
		}
	};
}
