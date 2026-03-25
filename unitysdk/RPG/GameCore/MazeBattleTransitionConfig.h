#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PostureTypeTasksConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MAZEBATTLETRANSITIONCONFIG_METHOD_2_2F8978C439E5E7AF_OFFSET UNITYSDK_OFFSET(0x173BAEA0)
#define RPG_GAMECORE_MAZEBATTLETRANSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173BB510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBattleTransitionConfig_TypeDefinitionIndex = 16207;

	class MazeBattleTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PostureTypeTasksConfig*>* OnBeforeTriggerBattle; // 0x10
		::Il2CppArray<::RPG::GameCore::PostureTypeTasksConfig*>* OnLoopFadeOutBeforeBattle; // 0x18
		::Il2CppArray<::RPG::GameCore::PostureTypeTasksConfig*>* OnAfterTriggerBattle; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeActivityTriggerBattle; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeActivityTriggerBattleFadeOut; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterActivityTriggerBattle; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeCocoonBattle; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterCocoonTriggerBattle; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeStoryTriggerBattle; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterStoryTriggerBattle; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBattleFinish; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeEnterRogueMap; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterEnterRogueMap; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeExitRogueMap; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterExitRogueMap; // 0x80
		::Il2CppArray<::RPG::GameCore::PostureTypeTasksConfig*>* OnBeforeTriggerBattleForAD; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBATTLETRANSITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2F8978C439E5E7AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeBattleTransitionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeBattleTransitionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBATTLETRANSITIONCONFIG_METHOD_2_2F8978C439E5E7AF_OFFSET))(a1, a2);
		}
	};
}
