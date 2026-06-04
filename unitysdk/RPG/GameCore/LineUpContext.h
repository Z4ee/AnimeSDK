#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_2.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_4;
class Class_1_08B5ACC5F83BB932;
class Class_1_3F916053B9BB8D97;
class Class_1_5F0CB4974A75F258;
class Class_1_60D44DC008A2AE94;
class Class_1_7AB88D713F5121B3_43;
class Class_1_7AB88D713F5121B3_44;
class Class_1_7AB88D713F5121B3_45;
class Class_1_82B09E39D0F93215;
class Class_1_B66FD2332404CEBB;
class Class_1_E5506B2509E2F0C8;
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class StageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LINEUPCONTEXT_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xCE588A0)
#define RPG_GAMECORE_LINEUPCONTEXT_GETBATTLEACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0xCE581E0)
#define RPG_GAMECORE_LINEUPCONTEXT_GETBATTLERAIDTARGETDATA_OFFSET UNITYSDK_OFFSET(0xCE583C0)
#define RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVELIST_OFFSET UNITYSDK_OFFSET(0xCE58050)
#define RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVESTAGECOUNT_OFFSET UNITYSDK_OFFSET(0xCE58090)
#define RPG_GAMECORE_LINEUPCONTEXT_GETROGUEGOALDATA_OFFSET UNITYSDK_OFFSET(0xCE585C0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_MAXWAVEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xCE598B0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEBINDINGMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xCE59840)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGECONFIG_OFFSET UNITYSDK_OFFSET(0xCE594A0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xCE591D0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0xCE59480)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_TREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xCE598C0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCE591B0)
#define RPG_GAMECORE_LINEUPCONTEXT_GET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0xCE59850)
#define RPG_GAMECORE_LINEUPCONTEXT_HASMAZEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xCE597B0)
#define RPG_GAMECORE_LINEUPCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0xCE57F20)
#define RPG_GAMECORE_LINEUPCONTEXT_SETWAVESBYOVERRIDE_OFFSET UNITYSDK_OFFSET(0xCE587C0)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xCE57FF0)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0xCE59490)
#define RPG_GAMECORE_LINEUPCONTEXT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xCE591C0)
#define RPG_GAMECORE_LINEUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE59170)
#define RPG_GAMECORE_LINEUPCONTEXT__ONSTAGEIDCHANGED_OFFSET UNITYSDK_OFFSET(0xCE591E0)
#define RPG_GAMECORE_LINEUPCONTEXT__SETUPSTAGEBINDINGMAZEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xCE59500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpContext_TypeDefinitionIndex = 52560;

	class LineUpContext : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* MazeBuffDataList; // 0x10
		::Il2CppArray<::System::String*>* AdditionBattleLoseConditions; // 0x18
		::Il2CppArray<::Class_1_7AB88D713F5121B3_44*>* BattleRougeGoalList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_45*>* _BattleRaidTargetDataMap; // 0x28
		::Il2CppArray<::Class_1_07A210D994F284D8_4*>* BattleAchievementList; // 0x30
		::Il2CppArray<::RPG::GameCore::MazeBuffData*>* _StageBindingMazeBuffDataList; // 0x38
		::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>* _MonsterWaves; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_07A210D994F284D8_4*>* _BattleAchievementDataMap; // 0x48
		::RPG::GameCore::BattleRogueData* BattleRogueData; // 0x50
		::Il2CppArray<::Class_1_7AB88D713F5121B3_45*>* BattleRaidTargetList; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3_44*>* _BattleChallengeScoreDataMap; // 0x60
		::Il2CppArray<::System::String*>* AdditionBattleWinConditions; // 0x68
		::Il2CppArray<::Class_1_60D44DC008A2AE94*>* MonsterRewardList; // 0x70
		::Il2CppArray<::Class_1_5F0CB4974A75F258*>* AvatarExtraAbilityList; // 0x78
		::Class_1_B66FD2332404CEBB* BattleEvolveBuildData; // 0x80
		::Il2CppArray<::Class_1_7AB88D713F5121B3_43*>* BattleTargetList; // 0x88
		::Class_1_82B09E39D0F93215* BattleGridFightData; // 0x90
		::Class_1_08B5ACC5F83BB932* BattleSwordTrainingData; // 0x98
		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GeneratedBindingBuffList; // 0xA0
		::Il2CppArray<::Class_1_7AB88D713F5121B3_43*>* BattleScoreList; // 0xA8
		::Class_1_E5506B2509E2F0C8* BattleFateData; // 0xB0
		::System::UInt32 _StageID; // 0xB8
		::Enum_3_71AA90D596A09AC8_2 _Type_k__BackingField; // 0xBC
		::RPG::GameCore::StageType _StageType_k__BackingField; // 0xC0
		::System::Boolean _GetOverrideWaveFlag; // 0xC4
		::RPG::GameCore::RogueMode BattleRogueMode; // 0xC8
		::System::UInt32 BattleActionEventId; // 0xCC
		::System::UInt32 _MaxWaveOverride; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_RESET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>* GetMonsterWaveList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVELIST_OFFSET))(this);
		}

		::System::Int32 GetMonsterWaveStageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETMONSTERWAVESTAGECOUNT_OFFSET))(this);
		}

		::Class_1_07A210D994F284D8_4* GetBattleAchievementData(::System::UInt32 a1)
		{
			return ((::Class_1_07A210D994F284D8_4*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETBATTLEACHIEVEMENTDATA_OFFSET))(this, a1);
		}

		::Class_1_7AB88D713F5121B3_45* GetBattleRaidTargetData(::System::UInt32 a1)
		{
			return ((::Class_1_7AB88D713F5121B3_45*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETBATTLERAIDTARGETDATA_OFFSET))(this, a1);
		}

		::Class_1_7AB88D713F5121B3_44* GetRogueGoalData(::System::UInt32 a1)
		{
			return ((::Class_1_7AB88D713F5121B3_44*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GETROGUEGOALDATA_OFFSET))(this, a1);
		}

		::System::Void SetWavesByOverride(::Il2CppArray<::Class_1_3F916053B9BB8D97*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_3F916053B9BB8D97*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SETWAVESBYOVERRIDE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LineUpContext* DeepClone()
		{
			return ((::RPG::GameCore::LineUpContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_DEEPCLONE_OFFSET))(this);
		}

		::Enum_3_71AA90D596A09AC8_2 get_Type()
		{
			return ((::Enum_3_71AA90D596A09AC8_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_71AA90D596A09AC8_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_STAGEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageType get_StageType()
		{
			return ((::RPG::GameCore::StageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGETYPE_OFFSET))(this);
		}

		::System::Void set_StageType(::RPG::GameCore::StageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_SET_STAGETYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageRow* get_StageConfig()
		{
			return ((::RPG::GameCore::StageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT_GET_STAGECONFIG_OFFSET))(this);
		}

		::System::Void _OnStageIDChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT__ONSTAGEIDCHANGED_OFFSET))(this, a1);
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
