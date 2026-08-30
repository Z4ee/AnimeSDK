#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_1CB8CBC69B962B41;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_CLIENT_GAMECORECAMERADATA_GETENEMYTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0x193A6750)
#define RPG_CLIENT_GAMECORECAMERADATA_GETFRIENDTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0x193A66F0)
#define RPG_CLIENT_GAMECORECAMERADATA_GET_NATIVETIMESCALE_OFFSET UNITYSDK_OFFSET(0x193A66D0)
#define RPG_CLIENT_GAMECORECAMERADATA_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x193A63F0)
#define RPG_CLIENT_GAMECORECAMERADATA_SET_NATIVETIMESCALE_OFFSET UNITYSDK_OFFSET(0x193A66E0)
#define RPG_CLIENT_GAMECORECAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193A67B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GameCoreCameraData_TypeDefinitionIndex = 69525;

	class GameCoreCameraData : public ::System::Object
	{
	public:
		::RPG::GameCore::TeamFormationComponent* LightTeamFormationRef; // 0x10
		::RPG::GameCore::SkillData* ActiveSkillDataRef; // 0x18
		::RPG::GameCore::CharacterDataComponent* TargetEntityCharacterDataRef; // 0x20
		::RPG::GameCore::GameEntity* DarkTeamEntityRef; // 0x28
		::RPG::GameCore::GameEntity* TargetEntityRef; // 0x30
		::RPG::GameCore::TurnBasedAbilityComponent* TargetEntityTurnBasedAbilityRef; // 0x38
		::RPG::GameCore::TeamFormationComponent* DarkTeamFormationRef; // 0x40
		::RPG::GameCore::GameEntity* LocalPlayerRef; // 0x48
		::RPG::GameCore::GameWorld* GameWorldRef; // 0x50
		::RPG::GameCore::GameEntity* ActiveEntityRef; // 0x58
		::RPG::GameCore::SkillConfig* ActiveSkillConfigRef; // 0x60
		::RPG::GameCore::AdventureCharacterController* LocalPlayerCharacterControllerRef; // 0x68
		::RPG::GameCore::CharacterDataComponent* ActiveEntityCharacterDataRef; // 0x70
		::RPG::GameCore::TeamDataComponent* DarkTeamDataComponentRef; // 0x78
		::RPG::GameCore::BattleInstance* BattleInstanceRef; // 0x80
		::Class_1_1CB8CBC69B962B41* CurrentActiveInsertAbilityRef; // 0x88
		::RPG::GameCore::TeamDataComponent* LightTeamDataComponentRef; // 0x90
		::RPG::GameCore::SkillCharacterComponent* ActiveEntitySkillCharacterRef; // 0x98
		::RPG::GameCore::TurnBasedAbilityComponent* ActiveEntityTurnBasedAbilityRef; // 0xA0
		::RPG::GameCore::GameEntity* LightTeamEntityRef; // 0xA8
		::System::Single _NativeTimeScale_k__BackingField; // 0xB0
		::System::Boolean CameraFollowActiveEntityTimeScale; // 0xB4
		::System::Boolean ActiveEntitySkipActionFlag; // 0xB5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMECORECAMERADATA__CTOR_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMECORECAMERADATA_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Single get_NativeTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMECORECAMERADATA_GET_NATIVETIMESCALE_OFFSET))(this);
		}

		::System::Void set_NativeTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMECORECAMERADATA_SET_NATIVETIMESCALE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamFormationComponent* GetFriendTeamFormation(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::TeamFormationComponent*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMECORECAMERADATA_GETFRIENDTEAMFORMATION_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamFormationComponent* GetEnemyTeamFormation(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::TeamFormationComponent*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMECORECAMERADATA_GETENEMYTEAMFORMATION_OFFSET))(this, a1);
		}
	};
}
