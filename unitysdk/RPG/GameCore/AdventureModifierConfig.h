#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/MazeBuffType.h"
#include "unitysdk/RPG/GameCore/ModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVENTUREMODIFIERCONFIG_CONTAINSBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0x1CBBAD70)
#define RPG_GAMECORE_ADVENTUREMODIFIERCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1CBB9DD0)
#define RPG_GAMECORE_ADVENTUREMODIFIERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CBB9D30)
#define RPG_GAMECORE_ADVENTUREMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB9D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierConfig_TypeDefinitionIndex = 17306;

	class AdventureModifierConfig : public ::RPG::GameCore::ModifierConfig
	{
	public:
		::System::Single LifeTime; // 0x38
		::System::Int32 Level; // 0x3C
		::System::Int32 LevelMax; // 0x40
		::System::Boolean IsCountDownAfterBattle; // 0x44
		::System::Boolean ApplyBehaviorFlagBindEffects; // 0x45
		::Il2CppArray<::RPG::GameCore::AdventureModifierBehaviorFlag>* BehaviorFlagList; // 0x48
		::System::Int32 HolyShieldPriority; // 0x50
		::System::Single TickInterval; // 0x54
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInterval; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAdd; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestroy; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStack; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAttack; // 0x80
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeBattle; // 0x88
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterBattle; // 0x90
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStage; // 0x98
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnstage; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnForeGround; // 0xA8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBackGround; // 0xB0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStageByStory; // 0xB8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNpcMonsterCreate; // 0xC0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeamLeaderChange; // 0xC8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeAttack; // 0xD0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeAttack; // 0xD8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnModifierAdd; // 0xE0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnModifierRemove; // 0xE8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOwnerBeKilled; // 0xF0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterLocalPlayerUseSkill; // 0xF8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ModifierTaskList; // 0x100
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCounterAttack; // 0x108
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitHolyShield; // 0x110
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMPChange; // 0x118
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSkillReset; // 0x120
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTransferToFakeAvatar; // 0x128
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTransferFromFakeAvatar; // 0x130
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterBuffFullUpdate; // 0x138
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAcceptMoney; // 0x140
		::RPG::GameCore::MazeBuffType MazeBuffType; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

		::System::Boolean ContainsBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERCONFIG_CONTAINSBEHAVIORFLAG_OFFSET))(this, a1);
		}
	};
}
