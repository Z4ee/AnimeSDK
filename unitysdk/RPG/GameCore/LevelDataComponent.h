#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarGlobalBuffData.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleTargetDetailData.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/LevelDataComponent_BattleScoringData.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

class Class_0_16E4307DCC419505_401;
class Class_1_3F916053B9BB8D97;
class Class_1_B523573B0FEEC688;
class Class_2_1DB6C02CA182EEBA;
class Class_2_7AC6AB23E79B2263;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace RPG::GameCore { class LevelDataComponent_MonsterSequence; }
namespace RPG::GameCore { class LineUpContext; }
namespace RPG::GameCore { class StageParamEntry; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELDATACOMPONENT_ADDSTAGEABILITY_OFFSET UNITYSDK_OFFSET(0xCE26F70)
#define RPG_GAMECORE_LEVELDATACOMPONENT_APPLYDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xCE2FAD0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_CREATEBATTLETARGET_OFFSET UNITYSDK_OFFSET(0xCE404B0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_CREATEGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xCE3F400)
#define RPG_GAMECORE_LEVELDATACOMPONENT_DISABLEBATTLETARGET_OFFSET UNITYSDK_OFFSET(0xCE40980)
#define RPG_GAMECORE_LEVELDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE41640)
#define RPG_GAMECORE_LEVELDATACOMPONENT_EVALUATESTAGEMAZEBUFFDESCPARAM_OFFSET UNITYSDK_OFFSET(0xCE40E40)
#define RPG_GAMECORE_LEVELDATACOMPONENT_FORCETREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xCE2E100)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETAVATARGLOBALBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xCE41560)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETBATTLETARGETINFO_OFFSET UNITYSDK_OFFSET(0xCE408D0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETCURRENTSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0xCE2E140)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETPROTECTINGGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xCE3F5A0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALGLOBALSHIELDAMT_OFFSET UNITYSDK_OFFSET(0xCE3FDE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCOREBYDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xCE40C50)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCORE_OFFSET UNITYSDK_OFFSET(0xCE40B20)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GETWAVELISTFORINFINITEBATTLE_OFFSET UNITYSDK_OFFSET(0xCE2E670)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_BATTLESCORINGTOTAL_OFFSET UNITYSDK_OFFSET(0xCE427A0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_ISINFINITEWAVE_OFFSET UNITYSDK_OFFSET(0xCE3DEE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_MONSTERSEQ_OFFSET UNITYSDK_OFFSET(0xCE3DFA0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_GET_STAGEABILITYLIST_OFFSET UNITYSDK_OFFSET(0xCE42780)
#define RPG_GAMECORE_LEVELDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCE3E4C0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_INITEVENTS_OFFSET UNITYSDK_OFFSET(0xCE3F090)
#define RPG_GAMECORE_LEVELDATACOMPONENT_NEEDDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xCE41200)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REGISTERDELAYEXECUTEONNEXTWAVE_OFFSET UNITYSDK_OFFSET(0xCE412B0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEDEPLETEDSHIELDS_OFFSET UNITYSDK_OFFSET(0xCE3F880)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEGLOBALSHIELD_OFFSET UNITYSDK_OFFSET(0xCE3F720)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_1_OFFSET UNITYSDK_OFFSET(0xCE3F370)
#define RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_OFFSET UNITYSDK_OFFSET(0xCE26EE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SETAVATARGLOBALBUFFSTATE_OFFSET UNITYSDK_OFFSET(0xCE413D0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SETBATTLETARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0xCE406D0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_SET_STAGEABILITYLIST_OFFSET UNITYSDK_OFFSET(0xCE42790)
#define RPG_GAMECORE_LEVELDATACOMPONENT_STATISTICBATTLETARGETLIST_OFFSET UNITYSDK_OFFSET(0xCE3FEE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_TREATWAVESASINFINITE_OFFSET UNITYSDK_OFFSET(0xCE2E5A0)
#define RPG_GAMECORE_LEVELDATACOMPONENT_UNINITEVENTS_OFFSET UNITYSDK_OFFSET(0xCE417C0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3DFB0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__INITMONSTERSEQUENCE_OFFSET UNITYSDK_OFFSET(0xCE3D9E0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0xCE421A0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERDIEORESCAPE_OFFSET UNITYSDK_OFFSET(0xCE41CE0)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERHPCHANGED_OFFSET UNITYSDK_OFFSET(0xCE42670)
#define RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELWAVEMONSTERBEGINEVENT_OFFSET UNITYSDK_OFFSET(0xCE41AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_TypeDefinitionIndex = 53803;

	class LevelDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BattleTargetList_FinishOnEnterBattle; // 0x18
		::RPG::GameCore::LevelDataComponent_MonsterSequence* _MonsterSeq; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _StageAbilityList_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleConditionList; // 0x30
		::System::Collections::Generic::List_1<::Class_1_B523573B0FEEC688*>* _DelayExeQueue; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleClientAchievementList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* DisabledBattleTargetList; // 0x48
		::System::Collections::Generic::List_1<::Class_2_7AC6AB23E79B2263*>* _GlobalShieldList; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleRaidTargetList; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarGlobalBuffData>* AvatarGlobalBuffList; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleRougeGoalList; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BattleTargetDetailData>* BattleTargetList; // 0x70
		::RPG::GameCore::InfiniteBattleData* InfiniteBattleData; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelDataComponent_BattleScoringData>* BattleScoringList; // 0x80
		::RPG::GameCore::TurnBasedAbilityComponent* _TBAbility; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BattleAchievementList; // 0x90
		::System::Int32 _GlobalShieldIDIncr; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _InitMonsterSequence(::RPG::GameCore::LineUpContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LineUpContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__INITMONSTERSEQUENCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelDataComponent_MonsterSequence* get_MonsterSeq()
		{
			return ((::RPG::GameCore::LevelDataComponent_MonsterSequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_MONSTERSEQ_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::Class_2_1DB6C02CA182EEBA* AddStageAbility(::System::String* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::StageParamEntry*>* a2)
		{
			return ((::Class_2_1DB6C02CA182EEBA*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::RPG::GameCore::StageParamEntry*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_ADDSTAGEABILITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveStageAbility(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_OFFSET))(this, a1);
		}

		::System::Boolean RemoveStageAbility_1(::Class_2_1DB6C02CA182EEBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVESTAGEABILITY_1_OFFSET))(this, a1);
		}

		::System::Int32 CreateGlobalShield(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::FixPoint a2, ::Class_3_07C3C4D2990C49EE* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::FixPoint, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_CREATEGLOBALSHIELD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* GetProtectingGlobalShield(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETPROTECTINGGLOBALSHIELD_OFFSET))(this, a1);
		}

		::System::Void RemoveGlobalShield(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEGLOBALSHIELD_OFFSET))(this, a1);
		}

		::System::Void RemoveDepletedShields()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REMOVEDEPLETEDSHIELDS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetTotalGlobalShieldAmt()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALGLOBALSHIELDAMT_OFFSET))(this);
		}

		::System::Boolean ForceTreatWavesAsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_FORCETREATWAVESASINFINITE_OFFSET))(this);
		}

		::System::Boolean TreatWavesAsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_TREATWAVESASINFINITE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>* GetWaveListForInfiniteBattle()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETWAVELISTFORINFINITEBATTLE_OFFSET))(this);
		}

		::RPG::GameCore::StageRow* GetCurrentStageConfig()
		{
			return ((::RPG::GameCore::StageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETCURRENTSTAGECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* StatisticBattleTargetList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_STATISTICBATTLETARGETLIST_OFFSET))(this);
		}

		::System::Void CreateBattleTarget(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_CREATEBATTLETARGET_OFFSET))(this, a1, a2);
		}

		::System::Void SetBattleTargetProgress(::System::UInt32 a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SETBATTLETARGETPROGRESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetBattleTargetInfo(::System::UInt32 a1, ::RPG::GameCore::BattleTargetDetailData& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::BattleTargetDetailData&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETBATTLETARGETINFO_OFFSET))(this, a1, a2);
		}

		::System::Void DisableBattleTarget(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_DISABLEBATTLETARGET_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetTotalScore()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCORE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetTotalScoreByDisplayType(::RPG::GameCore::BattleScoringDisplayType a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::BattleScoringDisplayType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETTOTALSCOREBYDISPLAYTYPE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* EvaluateStageMazeBuffDescParam(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_EVALUATESTAGEMAZEBUFFDESCPARAM_OFFSET))(this, a1, a2);
		}

		::System::Boolean NeedDelayExecuteOnNextWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_NEEDDELAYEXECUTEONNEXTWAVE_OFFSET))(this);
		}

		::System::Void RegisterDelayExecuteOnNextWave(::Class_1_B523573B0FEEC688* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B523573B0FEEC688*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_REGISTERDELAYEXECUTEONNEXTWAVE_OFFSET))(this, a1);
		}

		::System::Void ApplyDelayExecuteOnNextWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_APPLYDELAYEXECUTEONNEXTWAVE_OFFSET))(this);
		}

		::System::Void SetAvatarGlobalBuffState(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SETAVATARGLOBALBUFFSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetAvatarGlobalBuffState(::System::UInt32 a1, ::RPG::GameCore::AvatarGlobalBuffData& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AvatarGlobalBuffData&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GETAVATARGLOBALBUFFSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnLevelWaveMonsterBeginEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELWAVEMONSTERBEGINEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterDieOrEscape(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERDIEORESCAPE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterCreate(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterHPChanged(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT__ONLEVELCHARACTERHPCHANGED_OFFSET))(this, a1);
		}

		::System::Void InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_INITEVENTS_OFFSET))(this);
		}

		::System::Void UninitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_UNINITEVENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StageAbilityList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_STAGEABILITYLIST_OFFSET))(this);
		}

		::System::Void set_StageAbilityList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_SET_STAGEABILITYLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BattleScoringTotal()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_BATTLESCORINGTOTAL_OFFSET))(this);
		}

		::System::Boolean get_IsInfiniteWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT_GET_ISINFINITEWAVE_OFFSET))(this);
		}
	};
}
