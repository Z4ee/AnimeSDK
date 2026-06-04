#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/InfiniteWavePosition.h"
#include "unitysdk/RPG/GameCore/InfiniteWaveState.h"
#include "unitysdk/System/Object.h"

class Class_1_3F916053B9BB8D97;
class Class_1_923C1AF2DBD806BC;
class Class_1_BB505CFCA176BF03;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace RPG::GameCore { class LevelInfiniteMonsterHPChanged; }
namespace RPG::GameCore { class MonsterDataComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_INFINITEPERWAVEDATA_GETINSERTINDEX_OFFSET UNITYSDK_OFFSET(0xCE31950)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ABILITYPARAMS_OFFSET UNITYSDK_OFFSET(0xCE31CD0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ABILITY_OFFSET UNITYSDK_OFFSET(0xCE31CB0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_BASEMAXMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCE31B60)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_CLEARPREVIOUSABILITY_OFFSET UNITYSDK_OFFSET(0xCE31C90)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0xCE31F70)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADORESCAPEPROGRESS_OFFSET UNITYSDK_OFFSET(0xCE31E00)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADPROGRESS_OFFSET UNITYSDK_OFFSET(0xCE31D10)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ESCAPECOUNT_OFFSET UNITYSDK_OFFSET(0xCE31F90)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ISSUMMONFINISHED_OFFSET UNITYSDK_OFFSET(0xCE30390)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_MAXMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCE2F0F0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_MAXTEAMMATECOUNT_OFFSET UNITYSDK_OFFSET(0xCE31CF0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_NEXTMONSTER_OFFSET UNITYSDK_OFFSET(0xCE2FE20)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_SUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0xCE31F60)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_SUMMONEDMONSTERENTITYIDLIST_OFFSET UNITYSDK_OFFSET(0xCE31F40)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_WAVEMONSTERPOOLLINEUP_OFFSET UNITYSDK_OFFSET(0xCE31F20)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_GET_WAVEMONSTERPOOL_OFFSET UNITYSDK_OFFSET(0xCE31F00)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_INSERTMONSTERBYID_OFFSET UNITYSDK_OFFSET(0xCE31710)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ISMONSTERIDOFWAVE_OFFSET UNITYSDK_OFFSET(0xCE31210)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ISMONSTEROFWAVE_OFFSET UNITYSDK_OFFSET(0xCE2DA30)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_NEXTMONSTERLINEUP_OFFSET UNITYSDK_OFFSET(0xCE31C00)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0xCE315E0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERDIEORESCAPE_OFFSET UNITYSDK_OFFSET(0xCE312B0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERHPRATIOCHANGED_OFFSET UNITYSDK_OFFSET(0xCE31520)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_REUSE_OFFSET UNITYSDK_OFFSET(0xCE2F970)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ABILITYPARAMS_OFFSET UNITYSDK_OFFSET(0xCE31CE0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ABILITY_OFFSET UNITYSDK_OFFSET(0xCE31CC0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_CLEARPREVIOUSABILITY_OFFSET UNITYSDK_OFFSET(0xCE31CA0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0xCE31F80)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ESCAPECOUNT_OFFSET UNITYSDK_OFFSET(0xCE31FA0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_MAXTEAMMATECOUNT_OFFSET UNITYSDK_OFFSET(0xCE31D00)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_SUMMONEDCOUNT_OFFSET UNITYSDK_OFFSET(0xCE31050)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_SUMMONEDMONSTERENTITYIDLIST_OFFSET UNITYSDK_OFFSET(0xCE31F50)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_WAVEMONSTERPOOLLINEUP_OFFSET UNITYSDK_OFFSET(0xCE31F30)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SET_WAVEMONSTERPOOL_OFFSET UNITYSDK_OFFSET(0xCE31F10)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SKIPANDMARKUSED_OFFSET UNITYSDK_OFFSET(0xCE310B0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_SLOTMONSTER_OFFSET UNITYSDK_OFFSET(0xCE31B70)
#define RPG_GAMECORE_INFINITEPERWAVEDATA_USEEND_OFFSET UNITYSDK_OFFSET(0xCE2F8E0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCE2F6C0)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xCE2E720)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE2E800)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__INSERTMONSTERPOOL_OFFSET UNITYSDK_OFFSET(0xCE31A90)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBASIC_OFFSET UNITYSDK_OFFSET(0xCE30410)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYCONFIG_OFFSET UNITYSDK_OFFSET(0xCE30520)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYMONSTERLIST_OFFSET UNITYSDK_OFFSET(0xCE30B70)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYMONSTERWAVE_OFFSET UNITYSDK_OFFSET(0xCE30D40)
#define RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPFINDINGMAP_OFFSET UNITYSDK_OFFSET(0xCE307B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfinitePerWaveData_TypeDefinitionIndex = 53801;

	class InfinitePerWaveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SummonedMonsterEntityIdList_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _AbilityParams_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::InfiniteWavePosition, ::System::Int32>* _IndexFindingMap; // 0x20
		::RPG::GameCore::InfiniteBattleData* _infiniteBattleDataRef; // 0x28
		::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>* _WaveMonsterPoolLineup_k__BackingField; // 0x30
		::RPG::GameCore::LevelInfiniteMonsterHPChanged* _hpChangedEventCache; // 0x38
		::System::String* _Ability_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC*>* _WaveMonsterPool_k__BackingField; // 0x48
		::System::Boolean _ClearPreviousAbility_k__BackingField; // 0x50
		::System::UInt32 WaveId; // 0x54
		::System::Int32 _SummonCount; // 0x58
		::System::Int32 _MaxTeammateCount_k__BackingField; // 0x5C
		::System::Int32 _BaseMaxMonsterCount; // 0x60
		::System::Int32 _MaxMonsterCountCacheAfterUse; // 0x64
		::System::Int32 _EscapeCount_k__BackingField; // 0x68
		::RPG::GameCore::InfiniteWaveState WaveState; // 0x6C
		::System::Int32 _DeadCount_k__BackingField; // 0x70
		::System::Int32 Index; // 0x74

		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::InfiniteBattleData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::GameCore::InfiniteBattleData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::Int32, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::Class_1_3F916053B9BB8D97* a1, ::System::Int32 a2, ::RPG::GameCore::InfiniteBattleData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3F916053B9BB8D97*, ::System::Int32, ::RPG::GameCore::InfiniteBattleData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__CTOR_2_OFFSET))(this, a1, a2, a3);
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

		::System::Boolean IsMonsterOfWave(::RPG::GameCore::MonsterDataComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ISMONSTEROFWAVE_OFFSET))(this, a1);
		}

		::System::Boolean IsMonsterIdOfWave(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ISMONSTERIDOFWAVE_OFFSET))(this, a1);
		}

		::System::Void OnMonsterDieOrEscape(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERDIEORESCAPE_OFFSET))(this, a1);
		}

		::System::Void OnMonsterHPRatioChanged(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERHPRATIOCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnMonsterCreate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_ONMONSTERCREATE_OFFSET))(this, a1);
		}

		::System::Void InsertMonsterByID(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::InfiniteWavePosition a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::InfiniteWavePosition))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_INSERTMONSTERBYID_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetInsertIndex(::RPG::GameCore::InfiniteWavePosition a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::InfiniteWavePosition))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GETINSERTINDEX_OFFSET))(this, a1);
		}

		::System::Void _SetupByConfig(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYCONFIG_OFFSET))(this, a1);
		}

		::System::Void _SetupByMonsterList(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYMONSTERLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupByMonsterWave(::Class_1_3F916053B9BB8D97* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3F916053B9BB8D97*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__SETUPBYMONSTERWAVE_OFFSET))(this, a1, a2);
		}

		::System::Void _InsertMonsterPool(::System::Int32 a1, ::Class_1_923C1AF2DBD806BC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_923C1AF2DBD806BC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA__INSERTMONSTERPOOL_OFFSET))(this, a1, a2);
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

		::Class_1_923C1AF2DBD806BC* SlotMonster(::System::Int32 a1)
		{
			return ((::Class_1_923C1AF2DBD806BC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SLOTMONSTER_OFFSET))(this, a1);
		}

		::Class_1_BB505CFCA176BF03* NextMonsterLineup(::System::Int32 a1)
		{
			return ((::Class_1_BB505CFCA176BF03*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_NEXTMONSTERLINEUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSummonFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ISSUMMONFINISHED_OFFSET))(this);
		}

		::System::Boolean get_ClearPreviousAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_CLEARPREVIOUSABILITY_OFFSET))(this);
		}

		::System::Void set_ClearPreviousAbility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_CLEARPREVIOUSABILITY_OFFSET))(this, a1);
		}

		::System::String* get_Ability()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ABILITY_OFFSET))(this);
		}

		::System::Void set_Ability(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ABILITY_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_AbilityParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ABILITYPARAMS_OFFSET))(this);
		}

		::System::Void set_AbilityParams(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ABILITYPARAMS_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxTeammateCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_MAXTEAMMATECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxTeammateCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_MAXTEAMMATECOUNT_OFFSET))(this, a1);
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

		::System::Void set_WaveMonsterPool(::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_923C1AF2DBD806BC*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_WAVEMONSTERPOOL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>* get_WaveMonsterPoolLineup()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_WAVEMONSTERPOOLLINEUP_OFFSET))(this);
		}

		::System::Void set_WaveMonsterPoolLineup(::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_WAVEMONSTERPOOLLINEUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SummonedMonsterEntityIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_SUMMONEDMONSTERENTITYIDLIST_OFFSET))(this);
		}

		::System::Void set_SummonedMonsterEntityIdList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_SUMMONEDMONSTERENTITYIDLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_SummonedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_SUMMONEDCOUNT_OFFSET))(this);
		}

		::System::Void set_SummonedCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_SUMMONEDCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_DeadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_DEADCOUNT_OFFSET))(this);
		}

		::System::Void set_DeadCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_DEADCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_EscapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_GET_ESCAPECOUNT_OFFSET))(this);
		}

		::System::Void set_EscapeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEPERWAVEDATA_SET_ESCAPECOUNT_OFFSET))(this, a1);
		}
	};
}
