#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_14.h"
#include "unitysdk/System/Object.h"

class Class_1_061071E286A00D5D;
class Class_1_120319518E6F6581_3;
class Class_1_120319518E6F6581_7;
class Class_1_1D0B4E25DB90BF59;
class Class_1_32044B0173B87B04;
class Class_1_35B19D34B208E77E;
class Class_1_48AADA497C3F117F;
class Class_1_48AADA497C3F117F_2;
class Class_1_5EB756264B1E13D9;
class Class_1_6303FAC302C29AF3_1;
class Class_1_732AF221927F3BE0;
class Class_1_752172F3794CD86F;
class Class_1_99BD961747420BEB_1;
class Class_1_AC225A1BAAB9FACC;
class Class_1_B66FD2332404CEBB;
class Class_1_BF43A923389D144C;
class Class_1_CEB0D1FB248C9C52;
class Class_1_E14A0A1A8B1F847C;
class Class_1_EBB10EC01CCC4716_7;
class Class_1_FA4F4A67B1C04320_34;
namespace RPG::GameCore { class PVECharacterStt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PVEGAMESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FEC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVEGameStatistics_TypeDefinitionIndex = 46442;

	class PVEGameStatistics : public ::System::Object
	{
	public:
		::Class_1_061071E286A00D5D* ActivityStt; // 0x10
		::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_3*>* battleAchievementList; // 0x18
		::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_3*>* battleTargetList; // 0x20
		::Class_1_CEB0D1FB248C9C52* FateStt; // 0x28
		::Class_1_732AF221927F3BE0* GridFightStt; // 0x30
		::System::Collections::Generic::List_1<::Class_1_AC225A1BAAB9FACC*>* AetherDivideSpiritPropertyInfos; // 0x38
		::System::Collections::Generic::List_1<::Class_1_35B19D34B208E77E*>* statisticEvents; // 0x40
		::System::Collections::Generic::List_1<::Class_1_6303FAC302C29AF3_1*>* monsterPhaseChangeInfos; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* customValues; // 0x50
		::Class_1_32044B0173B87B04* ElationStt; // 0x58
		::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_34*>* ActionBarEventInfos; // 0x60
		::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_3*>* battleScoringList; // 0x68
		::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_3*>* battleChallengeScoreList; // 0x70
		::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_3*>* battleRaidTargetList; // 0x78
		::Class_1_99BD961747420BEB_1* ChallengeFeverTimeStat; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* reportCustomValues; // 0x88
		::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_3*>* battleClientAchievementList; // 0x90
		::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>* monsterBattleInfoList; // 0x98
		::System::Collections::Generic::List_1<::System::Int32>* avatarBPChain; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_EBB10EC01CCC4716_7*>* waveStt; // 0xA8
		::System::Collections::Generic::List_1<::Class_1_120319518E6F6581_7*>* avatarGlobalBuffInfoList; // 0xB0
		::Class_1_48AADA497C3F117F* FeverTimeStat; // 0xB8
		::Il2CppArray<::System::UInt32>* totalSkillUseTimes; // 0xC0
		::Il2CppArray<::RPG::GameCore::PVECharacterStt*>* lightTeamStt; // 0xC8
		::Class_1_5EB756264B1E13D9* RogueStt; // 0xD0
		::System::Collections::Generic::List_1<::System::UInt32>* lightTeam; // 0xD8
		::Il2CppArray<::System::UInt32>* totalInsertAbilityTimes; // 0xE0
		::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>* lightTeamBattleInfoList; // 0xE8
		::System::Collections::Generic::List_1<::Class_1_752172F3794CD86F*>* battleEventBattleInfoList; // 0xF0
		::System::Collections::Generic::List_1<::Class_1_E14A0A1A8B1F847C*>* avatarDeathInfos; // 0xF8
		::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>* servantBattleInfoList; // 0x100
		::Class_1_B66FD2332404CEBB* EvolveBuild; // 0x108
		::System::Double totalDelayCumulate; // 0x110
		::System::Double bossHpPercent; // 0x118
		::System::UInt32 totalBattleTurns; // 0x120
		::System::UInt32 CleanWave; // 0x124
		::System::UInt32 maxLightTeamComboTurn; // 0x128
		::System::UInt32 challengeTurnLeft; // 0x12C
		::System::UInt32 totalServantAutoTurns; // 0x130
		::System::UInt32 challengeTurnCount; // 0x134
		::System::UInt32 totalAutoTurns; // 0x138
		::System::UInt32 totalScore; // 0x13C
		::System::UInt32 skillUltraCount; // 0x140
		::System::UInt32 totalBattleRounds; // 0x144
		::System::UInt32 totalAvatarTurns; // 0x148
		::System::Boolean isAsWin; // 0x14C
		::Enum_3_0A3761FE34514D6C_14 battleEndReason; // 0x150
		::System::UInt32 totalServantTurns; // 0x154
		::System::UInt32 totalSkillPerformTime; // 0x158
		::System::UInt32 totalMonsterTurns; // 0x15C
		::System::Double costTime; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVEGAMESTATISTICS__CTOR_OFFSET))(this);
		}
	};
}
