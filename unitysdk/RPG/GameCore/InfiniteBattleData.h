#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_3F916053B9BB8D97;
class Class_1_50F170487A4F96EF;
namespace RPG::GameCore { class InfinitePerWaveData; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_INFINITEBATTLEDATA_ADDCUSTOMWAVE_OFFSET UNITYSDK_OFFSET(0xE67CA90)
#define RPG_GAMECORE_INFINITEBATTLEDATA_FINDNEXTPERWAVEDATA_OFFSET UNITYSDK_OFFSET(0xE67D010)
#define RPG_GAMECORE_INFINITEBATTLEDATA_GETINFINITEPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0xE67C760)
#define RPG_GAMECORE_INFINITEBATTLEDATA_GETTOTALMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xE67BFA0)
#define RPG_GAMECORE_INFINITEBATTLEDATA_GETTOTALSUMMONCOUNT_OFFSET UNITYSDK_OFFSET(0xE67C0B0)
#define RPG_GAMECORE_INFINITEBATTLEDATA_GETUNIQUEMONSTERIDSBYWAVEINDEX_OFFSET UNITYSDK_OFFSET(0xE67D550)
#define RPG_GAMECORE_INFINITEBATTLEDATA_GET_CURRENTPERWAVEDATA_OFFSET UNITYSDK_OFFSET(0xE67D8C0)
#define RPG_GAMECORE_INFINITEBATTLEDATA_GET_CURRENTWAVEFINISHED_OFFSET UNITYSDK_OFFSET(0xE67D7B0)
#define RPG_GAMECORE_INFINITEBATTLEDATA_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0xE67D6C0)
#define RPG_GAMECORE_INFINITEBATTLEDATA_GET_ISLASTWAVE_OFFSET UNITYSDK_OFFSET(0xE67D750)
#define RPG_GAMECORE_INFINITEBATTLEDATA_INITPREDICTEDMONSTERSMAXHP_OFFSET UNITYSDK_OFFSET(0xE67C170)
#define RPG_GAMECORE_INFINITEBATTLEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xE67B790)
#define RPG_GAMECORE_INFINITEBATTLEDATA_MOVETONEXTWAVE_OFFSET UNITYSDK_OFFSET(0xE67CD30)
#define RPG_GAMECORE_INFINITEBATTLEDATA_NEXTMONSTERRANKSCORE_OFFSET UNITYSDK_OFFSET(0xE67D0D0)
#define RPG_GAMECORE_INFINITEBATTLEDATA_NOTIFYINFINITEINFOCHANGED_OFFSET UNITYSDK_OFFSET(0xE67BE50)
#define RPG_GAMECORE_INFINITEBATTLEDATA_ONBEGINWAVEMONSTER_OFFSET UNITYSDK_OFFSET(0xE67D3B0)
#define RPG_GAMECORE_INFINITEBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE67B750)
#define RPG_GAMECORE_INFINITEBATTLEDATA__FETCHWAVELISTASINFINITE_OFFSET UNITYSDK_OFFSET(0xE67BB10)
#define RPG_GAMECORE_INFINITEBATTLEDATA__PARSESTAGEINFINITEGROUPID_OFFSET UNITYSDK_OFFSET(0xE67B8D0)
#define RPG_GAMECORE_INFINITEBATTLEDATA__SETUPFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xE67B980)
#define RPG_GAMECORE_INFINITEBATTLEDATA__SETUPFROMWAVELIST_OFFSET UNITYSDK_OFFSET(0xE67BB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteBattleData_TypeDefinitionIndex = 57742;

	class InfiniteBattleData : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelDataComponent* _levelData; // 0x10
		::RPG::GameCore::InfinitePerWaveData* _lastPerWaveData; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::InfinitePerWaveData*>* PerWaveDataList; // 0x20
		::RPG::GameCore::InfinitePerWaveData* _currentPerWaveData; // 0x28
		::System::Boolean ReuseCurWave; // 0x30
		::System::Int32 CurWaveDeltaMaxMonsterCount; // 0x34

		::System::Void _ctor(::RPG::GameCore::LevelDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 _ParseStageInfiniteGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA__PARSESTAGEINFINITEGROUPID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>* _FetchWaveListAsInfinite()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA__FETCHWAVELISTASINFINITE_OFFSET))(this);
		}

		::System::Void _SetupFromWaveList(::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3F916053B9BB8D97*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA__SETUPFROMWAVELIST_OFFSET))(this, a1);
		}

		::System::Void _SetupFromConfig(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA__SETUPFROMCONFIG_OFFSET))(this, a1);
		}

		::System::Void NotifyInfiniteInfoChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_NOTIFYINFINITEINFOCHANGED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint InitPredictedMonstersMaxHp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_INITPREDICTEDMONSTERSMAXHP_OFFSET))(this);
		}

		::Class_1_50F170487A4F96EF* GetInfinitePreviewInfo()
		{
			return ((::Class_1_50F170487A4F96EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_GETINFINITEPREVIEWINFO_OFFSET))(this);
		}

		::System::Int32 GetTotalMonsterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_GETTOTALMONSTERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTotalSummonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_GETTOTALSUMMONCOUNT_OFFSET))(this);
		}

		::System::Void AddCustomWave(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_ADDCUSTOMWAVE_OFFSET))(this, a1, a2);
		}

		::System::Void MoveToNextWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_MOVETONEXTWAVE_OFFSET))(this);
		}

		::RPG::GameCore::InfinitePerWaveData* FindNextPerWaveData()
		{
			return ((::RPG::GameCore::InfinitePerWaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_FINDNEXTPERWAVEDATA_OFFSET))(this);
		}

		::System::Int32 NextMonsterRankScore(::RPG::GameCore::TeamFormationComponent* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_NEXTMONSTERRANKSCORE_OFFSET))(this, a1);
		}

		::System::Void OnBeginWaveMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_ONBEGINWAVEMONSTER_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetUniqueMonsterIdsByWaveIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_GETUNIQUEMONSTERIDSBYWAVEINDEX_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_Finished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_GET_FINISHED_OFFSET))(this);
		}

		::System::Boolean get_CurrentWaveFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_GET_CURRENTWAVEFINISHED_OFFSET))(this);
		}

		::RPG::GameCore::InfinitePerWaveData* get_CurrentPerWaveData()
		{
			return ((::RPG::GameCore::InfinitePerWaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_GET_CURRENTPERWAVEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsLastWave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEBATTLEDATA_GET_ISLASTWAVE_OFFSET))(this);
		}
	};
}
