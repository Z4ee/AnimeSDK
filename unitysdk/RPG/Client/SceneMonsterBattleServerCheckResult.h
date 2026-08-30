#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_7;
class Class_1_08B5ACC5F83BB932;
class Class_1_22B8FDC4E33ACC56;
class Class_1_3F916053B9BB8D97;
class Class_1_60D44DC008A2AE94;
class Class_1_61216D16FF425F39;
class Class_1_7AB88D713F5121B3_45;
class Class_1_7AB88D713F5121B3_46;
class Class_1_7AB88D713F5121B3_47;
class Class_1_9D50B47B40CEFD84;
class Class_1_B66FD2332404CEBB;
class Class_1_CC0B29182510F813;
class Class_1_E14A0A1A8B1F847C_1;
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }

#define RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xE05A440)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneMonsterBattleServerCheckResult_TypeDefinitionIndex = 60273;

	class SceneMonsterBattleServerCheckResult : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_7AB88D713F5121B3_45*>* battleTargetList; // 0x10
		::Il2CppArray<::Class_1_7AB88D713F5121B3_47*>* battleRaidTargetList; // 0x18
		::Class_1_CC0B29182510F813* battleFateRinData; // 0x20
		::Class_1_E14A0A1A8B1F847C_1* AetherDivideBattleInfo; // 0x28
		::Class_1_22B8FDC4E33ACC56* battleGridFightData; // 0x30
		::Class_1_B66FD2332404CEBB* battleEvolveBuildData; // 0x38
		::Il2CppArray<::Class_1_7AB88D713F5121B3_45*>* battleScoreList; // 0x40
		::Il2CppArray<::Class_1_7AB88D713F5121B3_46*>* battleRogueGoalList; // 0x48
		::Class_1_08B5ACC5F83BB932* battleSwordTrainingData; // 0x50
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* bufflist; // 0x58
		::Il2CppArray<::Class_1_3F916053B9BB8D97*>* monsterWaves; // 0x60
		::Il2CppArray<::Class_1_60D44DC008A2AE94*>* monsterRewardList; // 0x68
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* avatarlist; // 0x70
		::Class_1_9D50B47B40CEFD84* battleFateData; // 0x78
		::Il2CppArray<::Class_1_07A210D994F284D8_7*>* battleAchievementList; // 0x80
		::Class_1_61216D16FF425F39* BattleInfo; // 0x88
		::RPG::GameCore::BattleRogueData* battleRogueData; // 0x90
		::System::UInt32 battleID; // 0x98
		::System::UInt32 seed; // 0x9C
		::System::UInt32 worldLevel; // 0xA0
		::System::UInt32 monsterMaxWaveOverride; // 0xA4
		::RPG::GameCore::RogueMode battleRogueMode; // 0xA8
		::System::UInt32 battleActionEventId; // 0xAC
		::System::Boolean encryptResult; // 0xB0
		::System::UInt32 retcode; // 0xB4
		::System::UInt32 roundsLimit; // 0xB8
		::System::UInt32 stageID; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEMONSTERBATTLESERVERCHECKRESULT__CTOR_OFFSET))(this);
		}
	};
}
