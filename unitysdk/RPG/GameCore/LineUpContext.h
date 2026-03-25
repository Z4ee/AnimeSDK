#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_4;
class Class_1_07CAE938A083FFA0;
class Class_1_08B5ACC5F83BB932;
class Class_1_2B2C39A45CFC5540;
class Class_1_7AB88D713F5121B3_34;
class Class_1_7AB88D713F5121B3_35;
class Class_1_7AB88D713F5121B3_36;
class Class_1_82B09E39D0F93215;
class Class_1_8330F797C50754E5;
class Class_1_B66FD2332404CEBB;
class Class_1_C864C19113E2EEBC;
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class StageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LINEUPCONTEXT_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xA99B990)
#define RPG_GAMECORE_LINEUPCONTEXT_GETBATTLEACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0xA99B1D0)
#define RPG_GAMECORE_LINEUPCONTEXT_GETBATTLERAIDTARGETDATA_OFFSET UNITYSDK_OFFSET(0xA99B3F0)
#define RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVELIST_OFFSET UNITYSDK_OFFSET(0xA99B060)
#define RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVESTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xA99B0A0)
#define RPG_GAMECORE_LINEUPCONTEXT_GETROGUEGOALDATA_OFFSET UNITYSDK_OFFSET(0xA99B660)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_MAXWAVEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA99C890)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEBINDINGMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xA99C820)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGECONFIG_OFFSET UNITYSDK_OFFSET(0xA99C460)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA99C1F0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0xA99C440)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_TREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xA99C8A0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA99C1D0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0xA99C830)
#define RPG_GAMECORE_LINEUPCONTEXT_HASMAZEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA99C780)
#define RPG_GAMECORE_LINEUPCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0xA99AF30)
#define RPG_GAMECORE_LINEUPCONTEXT_SETWAVESBYOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA99B8B0)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA99B000)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0xA99C450)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA99C1E0)
#define RPG_GAMECORE_LINEUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA99C190)
#define RPG_GAMECORE_LINEUPCONTEXT__ONSTAGEIDCHANGED_OFFSET UNITYSDK_OFFSET(0xA99C200)
#define RPG_GAMECORE_LINEUPCONTEXT__SETUPSTAGEBINDINGMAZEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xA99C4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpContext_TypeDefinitionIndex = 45129;

	class LineUpContext : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_C864C19113E2EEBC*>* AvatarExtraAbilityList; // 0x10
		::Il2CppArray<::Class_1_7AB88D713F5121B3_34*>* BattleTargetList; // 0x18
		::Il2CppArray<::Class_1_7AB88D713F5121B3_35*>* BattleRougeGoalList; // 0x20
		::Class_1_82B09E39D0F93215* BattleGridFightData; // 0x28
		::System::Collections::Generic::List_1<::Class_1_2B2C39A45CFC5540*>* _MonsterWaves; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GeneratedBindingBuffList; // 0x38
		::Il2CppArray<::Class_1_07A210D994F284D8_4*>* BattleAchievementList; // 0x40
		::Il2CppArray<::System::String*>* AdditionBattleLoseConditions; // 0x48
		::Class_1_8330F797C50754E5* BattleFateData; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_35*>* _BattleChallengeScoreDataMap; // 0x58
		::Class_1_08B5ACC5F83BB932* BattleSwordTrainingData; // 0x60
		::RPG::GameCore::BattleRogueData* BattleRogueData; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_07A210D994F284D8_4*>* _BattleAchievementDataMap; // 0x70
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* MazeBuffDataList; // 0x78
		::Il2CppArray<::Class_1_07CAE938A083FFA0*>* MonsterRewardList; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_36*>* _BattleRaidTargetDataMap; // 0x88
		::Il2CppArray<::Class_1_7AB88D713F5121B3_36*>* BattleRaidTargetList; // 0x90
		::Class_1_B66FD2332404CEBB* BattleEvolveBuildData; // 0x98
		::Il2CppArray<::System::String*>* AdditionBattleWinConditions; // 0xA0
		::Il2CppArray<::Class_1_7AB88D713F5121B3_34*>* BattleScoreList; // 0xA8
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* _StageBindingMazeBuffDataList; // 0xB0
		::RPG::GameCore::StageType _StageType_k__BackingField; // 0xB8
		::System::UInt32 _MaxWaveOverride; // 0xBC
		::RPG::GameCore::RogueMode BattleRogueMode; // 0xC0
		::Enum_3_71AA90D596A09AC8_1 _Type_k__BackingField; // 0xC4
		::System::UInt32 BattleActionEventId; // 0xC8
		::System::UInt32 _StageID; // 0xCC
		::System::Boolean _GetOverrideWaveFlag; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_RESET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_2B2C39A45CFC5540*>* GetMonsterWaveList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2B2C39A45CFC5540*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVELIST_OFFSET))(this);
		}

		::System::Int32 GetMonsterWaveStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVESTAGECOUNT_OFFSET))(this);
		}

		::Class_1_07A210D994F284D8_4* GetBattleAchievementData(::System::UInt32 achievementId)
		{
			return ((::Class_1_07A210D994F284D8_4*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETBATTLEACHIEVEMENTDATA_OFFSET))(this, achievementId);
		}

		::Class_1_7AB88D713F5121B3_36* GetBattleRaidTargetData(::System::UInt32 raidTargetId)
		{
			return ((::Class_1_7AB88D713F5121B3_36*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETBATTLERAIDTARGETDATA_OFFSET))(this, raidTargetId);
		}

		::Class_1_7AB88D713F5121B3_35* GetRogueGoalData(::System::UInt32 rogueGoalId)
		{
			return ((::Class_1_7AB88D713F5121B3_35*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETROGUEGOALDATA_OFFSET))(this, rogueGoalId);
		}

		::System::Void SetWavesByOverride(::Il2CppArray<::Class_1_2B2C39A45CFC5540*>* overrides, ::System::UInt32 maxWaveOverride)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_2B2C39A45CFC5540*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SETWAVESBYOVERRIDE_OFFSET))(this, overrides, maxWaveOverride);
		}

		::RPG::GameCore::LineUpContext* DeepClone()
		{
			return ((::RPG::GameCore::LineUpContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_DEEPCLONE_OFFSET))(this);
		}

		::Enum_3_71AA90D596A09AC8_1 get_Type()
		{
			return ((::Enum_3_71AA90D596A09AC8_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_71AA90D596A09AC8_1 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_1))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_STAGEID_OFFSET))(this, value);
		}

		::RPG::GameCore::StageType get_StageType()
		{
			return ((::RPG::GameCore::StageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGETYPE_OFFSET))(this);
		}

		::System::Void set_StageType(::RPG::GameCore::StageType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_STAGETYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::StageRow* get_StageConfig()
		{
			return ((::RPG::GameCore::StageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGECONFIG_OFFSET))(this);
		}

		::System::Void _OnStageIDChanged(::System::UInt32 stageId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT__ONSTAGEIDCHANGED_OFFSET))(this, stageId);
		}

		::System::Void _SetupStageBindingMazeBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT__SETUPSTAGEBINDINGMAZEBUFFDATA_OFFSET))(this);
		}

		::System::Boolean HasMazeBuffData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_HASMAZEBUFFDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* get_StageBindingMazeBuffDataList()
		{
			return ((::Il2CppArray<::RPG::GameCore::MazeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEBINDINGMAZEBUFFDATALIST_OFFSET))(this);
		}

		::System::Int32 get_WaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_WAVECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxWaveOverride()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_MAXWAVEOVERRIDE_OFFSET))(this);
		}

		::System::Boolean get_TreatWavesAsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_TREATWAVESASINFINITE_OFFSET))(this);
		}
	};
}
