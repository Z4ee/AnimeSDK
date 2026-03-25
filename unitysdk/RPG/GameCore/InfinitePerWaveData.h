#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/InfiniteWavePosition.h"
#include "unitysdk/RPG/GameCore/InfiniteWaveState.h"
#include "unitysdk/System/Object.h"

class Class_1_2B2C39A45CFC5540;
class Class_1_923C1AF2DBD806BC;
class Class_1_BB505CFCA176BF03;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace RPG::GameCore { class MonsterDataComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_INFINITEPERWAVEDATA_GETINSERTINDEX_OFFSET UNITYSDK_OFFSET(0xA975F00)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ABILITYPARAMS_OFFSET UNITYSDK_OFFSET(0xA976250)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ABILITY_OFFSET UNITYSDK_OFFSET(0xA976230)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_BASEMAXMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA976120)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_CLEARPREVIOUSABILITY_OFFSET UNITYSDK_OFFSET(0xA976210)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0xA976490)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADORESCAPEPROGRESS_OFFSET UNITYSDK_OFFSET(0xA976350)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADPROGRESS_OFFSET UNITYSDK_OFFSET(0xA976290)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ESCAPECOUNT_OFFSET UNITYSDK_OFFSET(0xA9764B0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ISSUMMONFINISHED_OFFSET UNITYSDK_OFFSET(0xA974870)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_MAXMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA9735D0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_MAXTEAMMATECOUNT_OFFSET UNITYSDK_OFFSET(0xA976270)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_NEXTMONSTER_OFFSET UNITYSDK_OFFSET(0xA974340)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_SUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA976480)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_SUMMONEDMONSTERENTITYIDLIST_OFFSET UNITYSDK_OFFSET(0xA976460)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_WAVEMONSTERPOOLLINEUP_OFFSET UNITYSDK_OFFSET(0xA976440)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_WAVEMONSTERPOOL_OFFSET UNITYSDK_OFFSET(0xA976420)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_INSERTMONSTERBYID_OFFSET UNITYSDK_OFFSET(0xA975CE0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ISMONSTEROFWAVE_OFFSET UNITYSDK_OFFSET(0xA975720)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_NEXTMONSTERLINEUP_OFFSET UNITYSDK_OFFSET(0xA9761A0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0xA975BF0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERDIEORESCAPE_OFFSET UNITYSDK_OFFSET(0xA975840)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERHPRATIOCHANGED_OFFSET UNITYSDK_OFFSET(0xA975AC0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_REUSE_OFFSET UNITYSDK_OFFSET(0xA973EA0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ABILITYPARAMS_OFFSET UNITYSDK_OFFSET(0xA976260)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ABILITY_OFFSET UNITYSDK_OFFSET(0xA976240)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_CLEARPREVIOUSABILITY_OFFSET UNITYSDK_OFFSET(0xA976220)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0xA9764A0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ESCAPECOUNT_OFFSET UNITYSDK_OFFSET(0xA9764C0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_MAXTEAMMATECOUNT_OFFSET UNITYSDK_OFFSET(0xA976280)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_SUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA975560)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_SUMMONEDMONSTERENTITYIDLIST_OFFSET UNITYSDK_OFFSET(0xA976470)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_WAVEMONSTERPOOLLINEUP_OFFSET UNITYSDK_OFFSET(0xA976450)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_WAVEMONSTERPOOL_OFFSET UNITYSDK_OFFSET(0xA976430)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SKIPANDMARKUSED_OFFSET UNITYSDK_OFFSET(0xA9755C0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SLOTMONSTER_OFFSET UNITYSDK_OFFSET(0xA976130)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_USEEND_OFFSET UNITYSDK_OFFSET(0xA973E10)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA973C10)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA972D40)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA972E10)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__INSERTMONSTERPOOL_OFFSET UNITYSDK_OFFSET(0xA976050)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBASIC_OFFSET UNITYSDK_OFFSET(0xA9748F0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYCONFIG_OFFSET UNITYSDK_OFFSET(0xA974A00)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYMONSTERLIST_OFFSET UNITYSDK_OFFSET(0xA975230)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYMONSTERWAVE_OFFSET UNITYSDK_OFFSET(0xA975350)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPFINDINGMAP_OFFSET UNITYSDK_OFFSET(0xA974D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfinitePerWaveData_TypeDefinitionIndex = 46405;

	class InfinitePerWaveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>* _WaveMonsterPoolLineup_k__BackingField; // 0x10
		::RPG::GameCore::InfiniteBattleData* _infiniteBattleDataRef; // 0x18
		::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC*>* _WaveMonsterPool_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _SummonedMonsterEntityIdList_k__BackingField; // 0x28
		::System::String* _Ability_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::InfiniteWavePosition, ::System::Int32>* _IndexFindingMap; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* _AbilityParams_k__BackingField; // 0x40
		::System::Int32 _MaxTeammateCount_k__BackingField; // 0x48
		::System::Boolean _ClearPreviousAbility_k__BackingField; // 0x4C
		::System::Int32 _EscapeCount_k__BackingField; // 0x50
		::System::Int32 _BaseMaxMonsterCount; // 0x54
		::System::Int32 _MaxMonsterCountCacheAfterUse; // 0x58
		::System::UInt32 WaveId; // 0x5C
		::System::Int32 Index; // 0x60
		::System::Int32 _SummonCount; // 0x64
		::System::Int32 _DeadCount_k__BackingField; // 0x68
		::RPG::GameCore::InfiniteWaveState WaveState; // 0x6C

		::System::Void _ctor(::System::UInt32 waveId, ::System::Int32 index, ::RPG::GameCore::InfiniteBattleData* infiniteBattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_OFFSET))(this, waveId, index, infiniteBattle);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::UInt32>* monsterIdList, ::System::UInt32 eliteGroup, ::System::Int32 index, ::RPG::GameCore::InfiniteBattleData* infiniteBattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::Int32, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_1_OFFSET))(this, monsterIdList, eliteGroup, index, infiniteBattle);
		}

		::System::Void _ctor_2(::Class_1_2B2C39A45CFC5540* monsterWaveInfo, ::System::Int32 index, ::RPG::GameCore::InfiniteBattleData* infiniteBattle)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2B2C39A45CFC5540*, ::System::Int32, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_2_OFFSET))(this, monsterWaveInfo, index, infiniteBattle);
		}

		::System::Void Reuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_REUSE_OFFSET))(this);
		}

		::System::Void SkipAndMarkUsed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SKIPANDMARKUSED_OFFSET))(this);
		}

		::System::Void UseEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_USEEND_OFFSET))(this);
		}

		::System::Boolean IsMonsterOfWave(::RPG::GameCore::MonsterDataComponent* pMonster)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ISMONSTEROFWAVE_OFFSET))(this, pMonster);
		}

		::System::Void OnMonsterDieOrEscape(::RPG::GameCore::GameEntity* pDeadTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERDIEORESCAPE_OFFSET))(this, pDeadTarget);
		}

		::System::Void OnMonsterHPRatioChanged(::RPG::GameCore::GameEntity* pTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERHPRATIOCHANGED_OFFSET))(this, pTarget);
		}

		::System::Void OnMonsterCreate(::RPG::GameCore::GameEntity* pCreatedMonster)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERCREATE_OFFSET))(this, pCreatedMonster);
		}

		::System::Void InsertMonsterByID(::System::UInt32 monsterId, ::System::UInt32 eliteGroup, ::RPG::GameCore::InfiniteWavePosition ePosType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::InfiniteWavePosition))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_INSERTMONSTERBYID_OFFSET))(this, monsterId, eliteGroup, ePosType);
		}

		::System::Int32 GetInsertIndex(::RPG::GameCore::InfiniteWavePosition ePosType)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::InfiniteWavePosition))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GETINSERTINDEX_OFFSET))(this, ePosType);
		}

		::System::Void _SetupByConfig(::System::UInt32 waveId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYCONFIG_OFFSET))(this, waveId);
		}

		::System::Void _SetupByMonsterList(::System::Collections::Generic::List_1<::System::UInt32>* monsterIdList, ::System::UInt32 eliteGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYMONSTERLIST_OFFSET))(this, monsterIdList, eliteGroup);
		}

		::System::Void _SetupByMonsterWave(::Class_1_2B2C39A45CFC5540* monsterWaveInfo, ::System::UInt32 formationWaveId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2B2C39A45CFC5540*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYMONSTERWAVE_OFFSET))(this, monsterWaveInfo, formationWaveId);
		}

		::System::Void _InsertMonsterPool(::System::Int32 insertIndex, ::Class_1_923C1AF2DBD806BC* pNewInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_923C1AF2DBD806BC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__INSERTMONSTERPOOL_OFFSET))(this, insertIndex, pNewInfo);
		}

		::System::Void _SetupBasic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBASIC_OFFSET))(this);
		}

		::System::Void _SetupFindingMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPFINDINGMAP_OFFSET))(this);
		}

		::System::Int32 get_MaxMonsterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_MAXMONSTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_BaseMaxMonsterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_BASEMAXMONSTERCOUNT_OFFSET))(this);
		}

		::Class_1_923C1AF2DBD806BC* get_NextMonster()
		{
			return ((::Class_1_923C1AF2DBD806BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_NEXTMONSTER_OFFSET))(this);
		}

		::Class_1_923C1AF2DBD806BC* SlotMonster(::System::Int32 summonIndex)
		{
			return ((::Class_1_923C1AF2DBD806BC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SLOTMONSTER_OFFSET))(this, summonIndex);
		}

		::Class_1_BB505CFCA176BF03* NextMonsterLineup(::System::Int32 summonIndex)
		{
			return ((::Class_1_BB505CFCA176BF03*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_NEXTMONSTERLINEUP_OFFSET))(this, summonIndex);
		}

		::System::Boolean get_IsSummonFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ISSUMMONFINISHED_OFFSET))(this);
		}

		::System::Boolean get_ClearPreviousAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_CLEARPREVIOUSABILITY_OFFSET))(this);
		}

		::System::Void set_ClearPreviousAbility(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_CLEARPREVIOUSABILITY_OFFSET))(this, value);
		}

		::System::String* get_Ability()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ABILITY_OFFSET))(this);
		}

		::System::Void set_Ability(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ABILITY_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_AbilityParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ABILITYPARAMS_OFFSET))(this);
		}

		::System::Void set_AbilityParams(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ABILITYPARAMS_OFFSET))(this, value);
		}

		::System::Int32 get_MaxTeammateCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_MAXTEAMMATECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxTeammateCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_MAXTEAMMATECOUNT_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_DeadProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DeadOrEscapeProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADORESCAPEPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC*>* get_WaveMonsterPool()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_WAVEMONSTERPOOL_OFFSET))(this);
		}

		::System::Void set_WaveMonsterPool(::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_WAVEMONSTERPOOL_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>* get_WaveMonsterPoolLineup()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_WAVEMONSTERPOOLLINEUP_OFFSET))(this);
		}

		::System::Void set_WaveMonsterPoolLineup(::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_WAVEMONSTERPOOLLINEUP_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SummonedMonsterEntityIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_SUMMONEDMONSTERENTITYIDLIST_OFFSET))(this);
		}

		::System::Void set_SummonedMonsterEntityIdList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_SUMMONEDMONSTERENTITYIDLIST_OFFSET))(this, value);
		}

		::System::Int32 get_SummonedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_SUMMONEDCOUNT_OFFSET))(this);
		}

		::System::Void set_SummonedCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_SUMMONEDCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_DeadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADCOUNT_OFFSET))(this);
		}

		::System::Void set_DeadCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_DEADCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_EscapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ESCAPECOUNT_OFFSET))(this);
		}

		::System::Void set_EscapeCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ESCAPECOUNT_OFFSET))(this, value);
		}
	};
}
