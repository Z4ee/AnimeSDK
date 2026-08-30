#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_14.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1_3;
class Class_1_1CBA230307F9C289_4;
class Class_1_48AADA497C3F117F_1;
class Class_1_48AADA497C3F117F_2;
class Class_1_4A6B75BDEE43FCCD;
class Class_1_62A9AC17CCDCD69B;
class Class_1_68168894A9D2D702;
class Class_1_83178EB088CAD885;
class Class_1_A2F67B5601D04DC5;
class Class_1_A6B0B39A319DDDE2_1;
class Class_1_B66FD2332404CEBB;
class Class_1_BB3E6AE176160DE3;
class Class_1_C9DFE5EE7107C629_2;
class Class_1_C9DFE5EE7107C629_3;
class Class_1_D17272E82AE804C2_19;
class Class_1_D17272E82AE804C2_39;
class Class_1_D17272E82AE804C2_44;
class Class_1_DF73177B28FD4629;
class Class_1_E14A0A1A8B1F847C;
class Class_1_EA5A5E4D07C4CF2B_3;
class Class_1_EB813CC1D00A138D;
class Class_1_F3CA30716D4FAF92_1;
namespace RPG::GameCore { class PVECharacterStt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PVEGAMESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x190033F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVEGameStatistics_TypeDefinitionIndex = 57785;

	class PVEGameStatistics : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_68168894A9D2D702*>* AetherDivideSpiritPropertyInfos; // 0x10
		::Class_1_10F56A639581CEB1_3* ChallengeFeverTimeStat; // 0x18
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_39*>* avatarGlobalBuffInfoList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* reportCustomValues; // 0x28
		::Class_1_B66FD2332404CEBB* EvolveBuild; // 0x30
		::Il2CppArray<::System::UInt32>* totalSkillUseTimes; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* lightTeam; // 0x40
		::Il2CppArray<::RPG::GameCore::PVECharacterStt*>* lightTeamStt; // 0x48
		::Class_1_BB3E6AE176160DE3* RogueStt; // 0x50
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_19*>* battleRaidTargetList; // 0x58
		::System::Collections::Generic::List_1<::Class_1_C9DFE5EE7107C629_2*>* lightTeamBattleInfoList; // 0x60
		::Class_1_4A6B75BDEE43FCCD* ExpeditionStt; // 0x68
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_44*>* ActionBarEventInfos; // 0x70
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_19*>* battleScoringList; // 0x78
		::Class_1_DF73177B28FD4629* ActivityStt; // 0x80
		::System::Collections::Generic::List_1<::Class_1_62A9AC17CCDCD69B*>* waveStt; // 0x88
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_19*>* battleTargetList; // 0x90
		::Class_1_EA5A5E4D07C4CF2B_3* ElationStt; // 0x98
		::System::Collections::Generic::List_1<::Class_1_83178EB088CAD885*>* monsterPhaseChangeInfos; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_A2F67B5601D04DC5*>* battleEventBattleInfoList; // 0xA8
		::Class_1_A6B0B39A319DDDE2_1* GridFightStt; // 0xB0
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_19*>* battleAchievementList; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* customValues; // 0xC0
		::Class_1_48AADA497C3F117F_1* FeverTimeStat; // 0xC8
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_4*>* statisticEvents; // 0xD0
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_19*>* battleChallengeScoreList; // 0xD8
		::Class_1_F3CA30716D4FAF92_1* FateRinStt; // 0xE0
		::Class_1_EB813CC1D00A138D* FateStt; // 0xE8
		::System::Collections::Generic::List_1<::System::UInt32>* InvasionMonsterList; // 0xF0
		::System::Collections::Generic::List_1<::Class_1_E14A0A1A8B1F847C*>* avatarDeathInfos; // 0xF8
		::System::Collections::Generic::List_1<::Class_1_48AADA497C3F117F_2*>* servantBattleInfoList; // 0x100
		::System::Collections::Generic::List_1<::System::Int32>* avatarBPChain; // 0x108
		::System::Collections::Generic::List_1<::Class_1_C9DFE5EE7107C629_3*>* monsterBattleInfoList; // 0x110
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_19*>* battleClientAchievementList; // 0x118
		::Il2CppArray<::System::UInt32>* totalInsertAbilityTimes; // 0x120
		::System::UInt32 totalAutoTurns; // 0x128
		::System::UInt32 totalServantAutoTurns; // 0x12C
		::System::UInt32 challengeTurnCount; // 0x130
		::System::UInt32 maxLightTeamComboTurn; // 0x134
		::System::UInt32 totalAvatarTurns; // 0x138
		::System::Boolean isAsWin; // 0x13C
		::System::UInt32 totalMonsterTurns; // 0x140
		::System::UInt32 totalSkillPerformTime; // 0x144
		::System::Double bossHpPercent; // 0x148
		::System::Double totalDelayCumulate; // 0x150
		::System::UInt32 CleanWave; // 0x158
		::System::Double costTime; // 0x160
		::System::UInt32 InvasionLevel; // 0x168
		::System::UInt32 totalBattleRounds; // 0x16C
		::System::UInt32 totalScore; // 0x170
		::Enum_3_0A3761FE34514D6C_14 battleEndReason; // 0x174
		::System::UInt32 totalServantTurns; // 0x178
		::System::UInt32 totalBattleTurns; // 0x17C
		::System::UInt32 challengeTurnLeft; // 0x180
		::System::UInt32 skillUltraCount; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVEGAMESTATISTICS__CTOR_OFFSET))(this);
		}
	};
}
