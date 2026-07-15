#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CUSTOMMAZEBATTLETRANSITIONCONFIG_METHOD_2_06CB8C865081C8DC_OFFSET UNITYSDK_OFFSET(0x1BC3F5E0)
#define RPG_GAMECORE_CUSTOMMAZEBATTLETRANSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3F830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomMazeBattleTransitionConfig_TypeDefinitionIndex = 16899;

	class CustomMazeBattleTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeTriggerBattle; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoopFadeOutBeforeBattle; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterBattleLoad; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterTriggerBattle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMAZEBATTLETRANSITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_06CB8C865081C8DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomMazeBattleTransitionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomMazeBattleTransitionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMAZEBATTLETRANSITIONCONFIG_METHOD_2_06CB8C865081C8DC_OFFSET))(a1, a2);
		}
	};
}
