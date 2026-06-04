#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_1D0B4E25DB90BF59;
class Class_1_21DCD4640D389503_10;
class Class_1_23C1B7E6B450FFB8;
class Class_1_2C4471BA5FE34A73;
class Class_1_3C6018135E54E36D;
class Class_1_5DFA0229DED90FE5;
class Class_1_668FE281FA72D3E8;
class Class_1_82F5C77DD4957B13;
class Class_1_83178EB088CAD885;
class Class_1_85B61EA0E6D9987F;
class Class_1_923C1AF2DBD806BC_2;
class Class_1_BF43A923389D144C;
class Class_1_D17272E82AE804C2_37;
class Class_1_D1E0AD3915BCCF29_7;
class Class_1_EBB10EC01CCC4716_1;
class Class_2_AB410D28C98F5E0E;
class Class_2_AC65A8C362F818F7;
class Class_3_86E0535F5988D909;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CharacterSkillCustomStatisticConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PVECharacterStt; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_STATISTICSCOMPONENT_ADDCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xCEF23D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_BUILDPVESTATISTICS_OFFSET UNITYSDK_OFFSET(0xCEEB3F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEEA930)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARGLOBALBUFFSTT_OFFSET UNITYSDK_OFFSET(0xCEF3CF0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARSTTBYAVATARID_OFFSET UNITYSDK_OFFSET(0xCEF08D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETBATTLEEVENTSTT_OFFSET UNITYSDK_OFFSET(0xCEF3540)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETCHARACTERSTT_OFFSET UNITYSDK_OFFSET(0xCEF3B20)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCEF20A0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERWAVEINDEXLISTBYWAVE_OFFSET UNITYSDK_OFFSET(0xCEF1E30)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERPHASESTT_OFFSET UNITYSDK_OFFSET(0xCEF3040)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTTFULL_OFFSET UNITYSDK_OFFSET(0xCEF29D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTT_OFFSET UNITYSDK_OFFSET(0xCEF2FE0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETSERVANTSTT_OFFSET UNITYSDK_OFFSET(0xCEF3850)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETSKILLUSEPROPERTYBYABILITYNAME_OFFSET UNITYSDK_OFFSET(0xCEF3E60)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GETTURNTAKENDAMAGE_OFFSET UNITYSDK_OFFSET(0xCEF2220)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GET_BATTLEEVENTSTT_OFFSET UNITYSDK_OFFSET(0xCEFABF0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_GET_FEVERTIME_OFFSET UNITYSDK_OFFSET(0xCEFABD0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_HASTRIGGEREDCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xCEF3430)
#define RPG_GAMECORE_STATISTICSCOMPONENT_INITPVESTATISTICS_OFFSET UNITYSDK_OFFSET(0xCEEA2D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_RECORDAVATARINITIALPROPERTY_OFFSET UNITYSDK_OFFSET(0xCEF22D0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_SETREPORTCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xCEF2550)
#define RPG_GAMECORE_STATISTICSCOMPONENT_SET_FEVERTIME_OFFSET UNITYSDK_OFFSET(0xCEFABE0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRIGGERSTATISTICEVENT_OFFSET UNITYSDK_OFFSET(0xCEF27C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYCONFIGID_OFFSET UNITYSDK_OFFSET(0xCEF31A0)
#define RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYTEMPLATEID_OFFSET UNITYSDK_OFFSET(0xCEF32F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ADDSKILLPERFORMTIME_OFFSET UNITYSDK_OFFSET(0xCEF8AB0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__BUILDACTIVITYSUBMODESTT_OFFSET UNITYSDK_OFFSET(0xCEF1A50)
#define RPG_GAMECORE_STATISTICSCOMPONENT__CREATELIGHTTEAMPROPERTYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCEF4620)
#define RPG_GAMECORE_STATISTICSCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCEFAC00)
#define RPG_GAMECORE_STATISTICSCOMPONENT__FILLATTACKANDDAMAGEINFO_OFFSET UNITYSDK_OFFSET(0xCEF06B0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__FILLCHARACTERSKILLEQUIPANDRELIC_OFFSET UNITYSDK_OFFSET(0xCEF10F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__GETAVATARPROPERTY_OFFSET UNITYSDK_OFFSET(0xCEF0EF0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INCREMENTCOUNTBYENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xCEF6050)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INITBYSTAGE_OFFSET UNITYSDK_OFFSET(0xCEEA540)
#define RPG_GAMECORE_STATISTICSCOMPONENT__INITEVENTS_OFFSET UNITYSDK_OFFSET(0xCEE98A0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONBATTLEEVENTDIE_OFFSET UNITYSDK_OFFSET(0xCEF4F60)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0xCEF4AF0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERDIE_OFFSET UNITYSDK_OFFSET(0xCEF4B90)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERLIMBO_OFFSET UNITYSDK_OFFSET(0xCEF4FF0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERREVIVE_OFFSET UNITYSDK_OFFSET(0xCEF5940)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYDIE_OFFSET UNITYSDK_OFFSET(0xCEF4C20)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYESCAPE_OFFSET UNITYSDK_OFFSET(0xCEF5730)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCEE9800)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONCOUNTACTIVE_OFFSET UNITYSDK_OFFSET(0xCEF6370)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONDELAYCHANGED_OFFSET UNITYSDK_OFFSET(0xCEF95F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBEFOREADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xCEF67B0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBREAKSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xCEF64F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERENDATTACK_OFFSET UNITYSDK_OFFSET(0xCEFA890)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTBPCHANGE_OFFSET UNITYSDK_OFFSET(0xCEF9500)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTSPCHANGE_OFFSET UNITYSDK_OFFSET(0xCEF90F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCUSTOMSTRINGEVENT_OFFSET UNITYSDK_OFFSET(0xCEF6B60)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITYPHASE1_OFFSET UNITYSDK_OFFSET(0xCEF7C40)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITY_OFFSET UNITYSDK_OFFSET(0xCEF6F90)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDISPELMODIFIER_OFFSET UNITYSDK_OFFSET(0xCEF6120)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENDUSESKILL_OFFSET UNITYSDK_OFFSET(0xCEF8C40)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYINITSHIELD_OFFSET UNITYSDK_OFFSET(0xCEF9880)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYSHIELDCHANGE_OFFSET UNITYSDK_OFFSET(0xCEF9B90)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELHEALENTITY_OFFSET UNITYSDK_OFFSET(0xCEF7E70)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELINSERTABILITY_OFFSET UNITYSDK_OFFSET(0xCEF5F70)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELMONSTERPHASECHANGE_OFFSET UNITYSDK_OFFSET(0xCEF9E80)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNBEGIN_OFFSET UNITYSDK_OFFSET(0xCEF41C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNEND_OFFSET UNITYSDK_OFFSET(0xCEF49F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNSTATEBEFORECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xCEF6CD0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNULTRASKILLEXECUTINGBEGIN_OFFSET UNITYSDK_OFFSET(0xCEF9D70)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSEABILITY_OFFSET UNITYSDK_OFFSET(0xCEF5A70)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSESKILL_OFFSET UNITYSDK_OFFSET(0xCEF82F0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELWAVEMONSTERFINISH_OFFSET UNITYSDK_OFFSET(0xCEF68E0)
#define RPG_GAMECORE_STATISTICSCOMPONENT__UNINITEVENTS_OFFSET UNITYSDK_OFFSET(0xCEEA9C0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xCEFB1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatisticsComponent_TypeDefinitionIndex = 53842;

	class StatisticsComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::Il2CppArray<::System::UInt32>* _totalSkillUseTimes; // 0x18
		::System::Collections::Generic::List_1<::Class_1_668FE281FA72D3E8*>* _StatisticEvents; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AB410D28C98F5E0E*>* _BattleEventStt; // 0x28
		::System::Collections::Generic::List_1<::Class_1_5DFA0229DED90FE5*>* _CharacterDeathStt; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _CustomValues; // 0x38
		::System::Collections::Generic::List_1<::Class_1_85B61EA0E6D9987F*>* _TurnSttList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AC65A8C362F818F7*>* _MonsterStt; // 0x48
		::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC_2*>* _WaveStt; // 0x50
		::Il2CppArray<::System::UInt32>* _totalInsertAbilityTimes; // 0x58
		::RPG::GameCore::PVEGameStatistics* _StatisticSnapShot; // 0x60
		::System::Collections::Generic::HashSet_1<::System::Int32>* _CustomStringHashSet; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_3<::Class_1_EBB10EC01CCC4716_1*, ::System::UInt32, ::System::UInt32>>* _LastTurnAvatarPropertySnapshot; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D1E0AD3915BCCF29_7*>* _AvatarGlobalBuffStt; // 0x78
		::Class_1_2C4471BA5FE34A73* _FeverTime_k__BackingField; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* _ReportCustomValues; // 0x88
		::RPG::GameCore::CharacterSkillCustomStatisticConfig* _SkillStatisticConfig; // 0x90
		::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_37*>* _actionBarEvents; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EBB10EC01CCC4716_1*>* _AvatarInitialProperty; // 0xA0
		::System::Collections::Generic::List_1<::System::Int32>* _AvatarTurnBPChain; // 0xA8
		::System::Collections::Generic::List_1<::Class_1_83178EB088CAD885*>* _monsterPhaseChangeInfos; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_86E0535F5988D909*>* _ServantStt; // 0xB8
		::Il2CppArray<::RPG::GameCore::PVECharacterStt*>* _LightTeamStt; // 0xC0
		::System::Single _totalSkillPerformTime; // 0xC8
		::System::Int32 _CharacterDeathSttPendingInex; // 0xCC
		::System::UInt32 _currentLightTeamComboTurnCount; // 0xD0
		::System::Boolean _lastIsLightTeamAction; // 0xD4
		::System::UInt32 _totalAvatarTurns; // 0xD8
		::System::UInt32 _totalBattleRounds; // 0xDC
		::System::Single _lastSimulateTime; // 0xE0
		::System::UInt32 _totalServantTurns; // 0xE4
		::System::UInt32 _totalMonsterTurns; // 0xE8
		::System::Single _turnSkillPerformTime; // 0xEC
		::System::UInt32 _lastSkillConfigID; // 0xF0
		::System::Single _lastPerformTime; // 0xF4
		::System::UInt32 _totalAutoTurns; // 0xF8
		::System::UInt32 _totalServantAutoTurns; // 0xFC
		::System::UInt32 _maxLightTeamComboTurnCount; // 0x100
		::System::UInt32 _totalBattleTurns; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::PVEGameStatistics* BuildPVEStatistics()
		{
			return ((::RPG::GameCore::PVEGameStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_BUILDPVESTATISTICS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetKilledMonsterWaveIndexListByWave(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERWAVEINDEXLISTBYWAVE_OFFSET))(this, a1);
		}

		::System::Int32 GetKilledMonsterCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETKILLEDMONSTERCOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetTurnTakenDamage(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETTURNTAKENDAMAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RecordAvatarInitialProperty(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_RECORDAVATARINITIALPROPERTY_OFFSET))(this, a1);
		}

		::System::Void AddCustomValue(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_ADDCUSTOMVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetReportCustomValue(::System::String* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_SETREPORTCUSTOMVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerStatisticEvent(::Enum_3_F80BFD5B986D5503_2 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRIGGERSTATISTICEVENT_OFFSET))(this, a1, a2);
		}

		::Class_2_AC65A8C362F818F7* GetMonsterSttFull(::System::UInt32 a1)
		{
			return ((::Class_2_AC65A8C362F818F7*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTTFULL_OFFSET))(this, a1);
		}

		::Class_1_1D0B4E25DB90BF59* GetMonsterStt(::System::UInt32 a1)
		{
			return ((::Class_1_1D0B4E25DB90BF59*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERSTT_OFFSET))(this, a1);
		}

		::Class_1_23C1B7E6B450FFB8* GetMonsterPhaseStt(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_23C1B7E6B450FFB8*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETMONSTERPHASESTT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMonsterSttByConfigID(::System::UInt32 a1, ::Class_2_AC65A8C362F818F7*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_AC65A8C362F818F7*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYCONFIGID_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMonsterSttByTemplateID(::System::UInt32 a1, ::Class_2_AC65A8C362F818F7*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_AC65A8C362F818F7*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_TRYGETMONSTERSTTBYTEMPLATEID_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasTriggeredCustomString(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_HASTRIGGEREDCUSTOMSTRING_OFFSET))(this, a1);
		}

		::Class_2_AB410D28C98F5E0E* GetBattleEventStt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Class_2_AB410D28C98F5E0E*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETBATTLEEVENTSTT_OFFSET))(this, a1);
		}

		::Class_3_86E0535F5988D909* GetServantStt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Class_3_86E0535F5988D909*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETSERVANTSTT_OFFSET))(this, a1);
		}

		::RPG::GameCore::PVECharacterStt* GetAvatarSttByAvatarId(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PVECharacterStt*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARSTTBYAVATARID_OFFSET))(this, a1);
		}

		::Class_1_82F5C77DD4957B13* GetCharacterStt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Class_1_82F5C77DD4957B13*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETCHARACTERSTT_OFFSET))(this, a1);
		}

		::Class_1_D1E0AD3915BCCF29_7* GetAvatarGlobalBuffStt(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::Class_1_D1E0AD3915BCCF29_7*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETAVATARGLOBALBUFFSTT_OFFSET))(this, a1, a2);
		}

		::Class_1_21DCD4640D389503_10* GetSkillUsePropertyByAbilityName(::Class_1_82F5C77DD4957B13* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::Class_1_21DCD4640D389503_10*(*)(::PVOID, ::Class_1_82F5C77DD4957B13*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GETSKILLUSEPROPERTYBYABILITYNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitByStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INITBYSTAGE_OFFSET))(this);
		}

		::System::Void InitPVEStatistics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_INITPVESTATISTICS_OFFSET))(this);
		}

		::System::Void _InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INITEVENTS_OFFSET))(this);
		}

		::System::Void _UninitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__UNINITEVENTS_OFFSET))(this);
		}

		::System::Void _OnLevelTurnBegin(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnLevelTurnEnd(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNEND_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterCreate(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterDie(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERDIE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleEventDie(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONBATTLEEVENTDIE_OFFSET))(this, a1);
		}

		::System::Void _OnEntityDie(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYDIE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterLimbo(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERLIMBO_OFFSET))(this, a1);
		}

		::System::Void _OnEntityEscape(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONENTITYESCAPE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterRevive(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONCHARACTERREVIVE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelUseAbility(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSEABILITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelInsertAbility(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELINSERTABILITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelDispelModifier(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDISPELMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _OnLevelActionCountActive(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONCOUNTACTIVE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterBreakStateChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBREAKSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterBeforeAddModifier(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERBEFOREADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _OnLevelWaveMonsterFinish(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELWAVEMONSTERFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCustomStringEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCUSTOMSTRINGEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnLevelTurnStateBeforeChangeEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNSTATEBEFORECHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnLevelDamageEntity(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelDamageEntityPhase1(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELDAMAGEENTITYPHASE1_OFFSET))(this, a1);
		}

		::System::Void _OnLevelHealEntity(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELHEALENTITY_OFFSET))(this, a1);
		}

		::System::Void _OnLevelUseSkill(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELUSESKILL_OFFSET))(this, a1);
		}

		::System::Void _IncrementCountByEntityType(::Il2CppArray<::System::UInt32>* a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__INCREMENTCOUNTBYENTITYTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _AddSkillPerformTime(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ADDSKILLPERFORMTIME_OFFSET))(this, a1, a2);
		}

		::System::Void _OnLevelEndUseSkill(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENDUSESKILL_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCurrentSPChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTSPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCurrentBPChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCURRENTBPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelActionDelayChanged(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELACTIONDELAYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnLevelEntityInitShield(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYINITSHIELD_OFFSET))(this, a1);
		}

		::System::Void _OnLevelEntityShieldChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELENTITYSHIELDCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelTurnUltraSkillExecutingBegin(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELTURNULTRASKILLEXECUTINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void _OnLevelMonsterPhaseChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELMONSTERPHASECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLevelCharacterEndAttack(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__ONLEVELCHARACTERENDATTACK_OFFSET))(this, a1);
		}

		::System::Void _CreateLightTeamPropertySnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__CREATELIGHTTEAMPROPERTYSNAPSHOT_OFFSET))(this);
		}

		::System::Void _FillCharacterSkillEquipAndRelic(::Class_1_BF43A923389D144C* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF43A923389D144C*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__FILLCHARACTERSKILLEQUIPANDRELIC_OFFSET))(this, a1, a2);
		}

		::System::Void _FillAttackAndDamageInfo(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C6018135E54E36D*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__FILLATTACKANDDAMAGEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildActivitySubModeStt(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__BUILDACTIVITYSUBMODESTT_OFFSET))(this, a1);
		}

		::Class_1_EBB10EC01CCC4716_1* _GetAvatarProperty(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::Class_1_EBB10EC01CCC4716_1*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT__GETAVATARPROPERTY_OFFSET))(this, a1);
		}

		::Class_1_2C4471BA5FE34A73* get_FeverTime()
		{
			return ((::Class_1_2C4471BA5FE34A73*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GET_FEVERTIME_OFFSET))(this);
		}

		::System::Void set_FeverTime(::Class_1_2C4471BA5FE34A73* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C4471BA5FE34A73*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_SET_FEVERTIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AB410D28C98F5E0E*>* get_BattleEventStt()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_AB410D28C98F5E0E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT_GET_BATTLEEVENTSTT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}
	};
}
