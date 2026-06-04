#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GETMONSTERLISTBYWAVE_OFFSET UNITYSDK_OFFSET(0xBBB73A0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0xBBB78D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_CAMPCONFIG_OFFSET UNITYSDK_OFFSET(0xBBB7900)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_HIGHESTTIERMONSTER_OFFSET UNITYSDK_OFFSET(0xBBB78F0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_MONSTERLISTDICT_OFFSET UNITYSDK_OFFSET(0xBBB7940)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_MONSTERLIST_OFFSET UNITYSDK_OFFSET(0xBBB7430)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0xBBB7920)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_SET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0xBBB78E0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_SET_CAMPCONFIG_OFFSET UNITYSDK_OFFSET(0xBBB7910)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_SET_MONSTERLISTDICT_OFFSET UNITYSDK_OFFSET(0xBBB7950)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_SET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0xBBB7930)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB57D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA__GETGRIDFIGHTMONSTERWAVEDATA_OFFSET UNITYSDK_OFFSET(0xBBB7440)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA__GETHIGHESTTIERMONSTER_OFFSET UNITYSDK_OFFSET(0xBBB75D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___GETGRIDFIGHTMONSTERWAVEDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0xBBB7960)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___GETGRIDFIGHTMONSTERWAVEDATA_B__1_1_OFFSET UNITYSDK_OFFSET(0xBBB79B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterStageData_TypeDefinitionIndex = 60836;

	class GridFightMonsterStageData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightMonsterCampConfig* _CampConfig_k__BackingField; // 0x10
		::RPG::Client::GridFightMonsterData* _BossData_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>* _MonsterListDict_k__BackingField; // 0x20
		::System::Int32 _WaveCount_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* GetMonsterListByWave(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GETMONSTERLISTBYWAVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>* _GetGridFightMonsterWaveData()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA__GETGRIDFIGHTMONSTERWAVEDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterData* _GetHighestTierMonster()
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA__GETHIGHESTTIERMONSTER_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterData* get_BossData()
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_BOSSDATA_OFFSET))(this);
		}

		::System::Void set_BossData(::RPG::Client::GridFightMonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_SET_BOSSDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterData* get_HighestTierMonster()
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_HIGHESTTIERMONSTER_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterCampConfig* get_CampConfig()
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_CAMPCONFIG_OFFSET))(this);
		}

		::System::Void set_CampConfig(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_SET_CAMPCONFIG_OFFSET))(this, a1);
		}

		::System::Int32 get_WaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_WAVECOUNT_OFFSET))(this);
		}

		::System::Void set_WaveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_SET_WAVECOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>* get_MonsterList()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_MONSTERLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>* get_MonsterListDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_GET_MONSTERLISTDICT_OFFSET))(this);
		}

		::System::Void set_MonsterListDict(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA_SET_MONSTERLISTDICT_OFFSET))(this, a1);
		}

		::System::Boolean __GetGridFightMonsterWaveData_b__1_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___GETGRIDFIGHTMONSTERWAVEDATA_B__1_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* __GetGridFightMonsterWaveData_b__1_1(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___GETGRIDFIGHTMONSTERWAVEDATA_B__1_1_OFFSET))(this, a1);
		}
	};
}
