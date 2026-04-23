#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_14.h"
#include "unitysdk/System/Object.h"

class Class_1_1D0B4E25DB90BF59;
class Class_1_48AADA497C3F117F;
class Class_1_48AADA497C3F117F_2;
class Class_1_4BC858D7C27E10ED_2;
class Class_1_5516F5B2865E1357;
class Class_1_668FE281FA72D3E8;
class Class_1_68168894A9D2D702;
class Class_1_732AF221927F3BE0;
class Class_1_752A428518BC8100;
class Class_1_76FC7D9EAE4C806C_1;
class Class_1_83178EB088CAD885;
class Class_1_89465A2C54A2C603;
class Class_1_B10FFA91399295A9;
class Class_1_B66FD2332404CEBB;
class Class_1_BF43A923389D144C;
class Class_1_D17272E82AE804C2_36;
class Class_1_D1E0AD3915BCCF29_3;
class Class_1_D1E0AD3915BCCF29_7;
class Class_1_E14A0A1A8B1F847C;
class Class_1_EBB10EC01CCC4716_10;
namespace RPG::GameCore { class PVECharacterStt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PVEGAMESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0xB6FE920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVEGameStatistics_TypeDefinitionIndex = 53130;

	class PVEGameStatistics : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_668FE281FA72D3E8*>* statisticEvents; // 0x10
		::Class_1_732AF221927F3BE0* GridFightStt; // 0x18
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_36*>* ActionBarEventInfos; // 0x20
		::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_3*>* battleClientAchievementList; // 0x28
		::Class_1_5516F5B2865E1357* RogueStt; // 0x30
		::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_3*>* battleScoringList; // 0x38
		::Il2CppArray<::RPG::GameCore::PVECharacterStt*>* lightTeamStt; // 0x40
		::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>* servantBattleInfoList; // 0x48
		::System::Collections::Generic::List_1<::Class_1_E14A0A1A8B1F847C*>* avatarDeathInfos; // 0x50
		::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_3*>* battleTargetList; // 0x58
		::Class_1_4BC858D7C27E10ED_2* ChallengeFeverTimeStat; // 0x60
		::Class_1_752A428518BC8100* FateStt; // 0x68
		::System::Collections::Generic::List_1<::Class_1_B10FFA91399295A9*>* battleEventBattleInfoList; // 0x70
		::System::Collections::Generic::List_1<::Class_1_BF43A923389D144C*>* lightTeamBattleInfoList; // 0x78
		::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_3*>* battleChallengeScoreList; // 0x80
		::Class_1_89465A2C54A2C603* ActivityStt; // 0x88
		::Class_1_48AADA497C3F117F* FeverTimeStat; // 0x90
		::Il2CppArray<::System::UInt32>* totalInsertAbilityTimes; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* customValues; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* lightTeam; // 0xA8
		::System::Collections::Generic::List_1<::Class_1_EBB10EC01CCC4716_10*>* waveStt; // 0xB0
		::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_3*>* battleRaidTargetList; // 0xB8
		::System::Collections::Generic::List_1<::Class_1_83178EB088CAD885*>* monsterPhaseChangeInfos; // 0xC0
		::System::Collections::Generic::List_1<::Class_1_68168894A9D2D702*>* AetherDivideSpiritPropertyInfos; // 0xC8
		::Class_1_76FC7D9EAE4C806C_1* ElationStt; // 0xD0
		::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_3*>* battleAchievementList; // 0xD8
		::System::Collections::Generic::List_1<::System::Int32>* avatarBPChain; // 0xE0
		::Il2CppArray<::System::UInt32>* totalSkillUseTimes; // 0xE8
		::System::Collections::Generic::List_1<::Class_1_D1E0AD3915BCCF29_7*>* avatarGlobalBuffInfoList; // 0xF0
		::System::Collections::Generic::List_1<::Class_1_1D0B4E25DB90BF59*>* monsterBattleInfoList; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* reportCustomValues; // 0x100
		::Class_1_B66FD2332404CEBB* EvolveBuild; // 0x108
		::System::UInt32 totalScore; // 0x110
		::System::UInt32 totalSkillPerformTime; // 0x114
		::System::UInt32 totalAutoTurns; // 0x118
		::System::UInt32 challengeTurnCount; // 0x11C
		::System::UInt32 skillUltraCount; // 0x120
		::Enum_3_0A3761FE34514D6C_14 battleEndReason; // 0x124
		::System::UInt32 totalServantAutoTurns; // 0x128
		::System::UInt32 totalBattleRounds; // 0x12C
		::System::UInt32 totalAvatarTurns; // 0x130
		::System::Boolean isAsWin; // 0x134
		::System::UInt32 totalBattleTurns; // 0x138
		::System::UInt32 totalServantTurns; // 0x13C
		::System::Double costTime; // 0x140
		::System::Double bossHpPercent; // 0x148
		::System::Double totalDelayCumulate; // 0x150
		::System::UInt32 maxLightTeamComboTurn; // 0x158
		::System::UInt32 totalMonsterTurns; // 0x15C
		::System::UInt32 CleanWave; // 0x160
		::System::UInt32 challengeTurnLeft; // 0x164

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVEGAMESTATISTICS__CTOR_OFFSET))(this);
		}
	};
}
