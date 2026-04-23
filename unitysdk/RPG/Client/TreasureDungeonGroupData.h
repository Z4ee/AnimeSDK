#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_31;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class TreasureDungeonLevelData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class TreasureDungeonGroupConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_DATAPREPARED_OFFSET UNITYSDK_OFFSET(0xB386880)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_BASEATTACKADD_OFFSET UNITYSDK_OFFSET(0xB386F60)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_BASEATTACKEX_OFFSET UNITYSDK_OFFSET(0xB386FA0)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_BASEDEFENCEADD_OFFSET UNITYSDK_OFFSET(0xB386F80)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_HARDLEVELDATA_OFFSET UNITYSDK_OFFSET(0xB386A70)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0xB386D60)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB387000)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0xB386A90)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB386C90)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0xB386CF0)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_PROGRESSDESC_OFFSET UNITYSDK_OFFSET(0xB386DD0)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xB386BB0)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_SIMPLELEVELDATA_OFFSET UNITYSDK_OFFSET(0xB386A50)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_BASEATTACKADD_OFFSET UNITYSDK_OFFSET(0xB386F70)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_BASEDEFENCEADD_OFFSET UNITYSDK_OFFSET(0xB386F90)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_HARDLEVELDATA_OFFSET UNITYSDK_OFFSET(0xB386A80)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB387010)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_SIMPLELEVELDATA_OFFSET UNITYSDK_OFFSET(0xB386A60)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB386660)
#define RPG_CLIENT_TREASUREDUNGEONGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB386510)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonGroupData_TypeDefinitionIndex = 62872;

	class TreasureDungeonGroupData : public ::System::Object
	{
	public:
		::RPG::Client::TreasureDungeonLevelData* _HardLevelData_k__BackingField; // 0x10
		::RPG::Client::TreasureDungeonLevelData* _SimpleLevelData_k__BackingField; // 0x18
		::RPG::GameCore::TreasureDungeonGroupConfigRow* Row; // 0x20
		::System::UInt32 _Index_k__BackingField; // 0x28
		::System::UInt32 _BaseAttackAdd_k__BackingField; // 0x2C
		::System::UInt32 _BaseDefenceAdd_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::TreasureDungeonGroupConfigRow* config, ::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeonGroupConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA__CTOR_OFFSET))(this, config, index);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_31* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SYNC_OFFSET))(this, serverData);
		}

		::RPG::Client::Promises::IPromise* DataPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_DATAPREPARED_OFFSET))(this);
		}

		::RPG::Client::TreasureDungeonLevelData* get_SimpleLevelData()
		{
			return ((::RPG::Client::TreasureDungeonLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_SIMPLELEVELDATA_OFFSET))(this);
		}

		::System::Void set_SimpleLevelData(::RPG::Client::TreasureDungeonLevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_SIMPLELEVELDATA_OFFSET))(this, value);
		}

		::RPG::Client::TreasureDungeonLevelData* get_HardLevelData()
		{
			return ((::RPG::Client::TreasureDungeonLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_HARDLEVELDATA_OFFSET))(this);
		}

		::System::Void set_HardLevelData(::RPG::Client::TreasureDungeonLevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_HARDLEVELDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_ISDOING_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_SCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_ISOPENED_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::String* get_ProgressDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_PROGRESSDESC_OFFSET))(this);
		}

		::System::UInt32 get_BaseAttackAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_BASEATTACKADD_OFFSET))(this);
		}

		::System::Void set_BaseAttackAdd(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_BASEATTACKADD_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseDefenceAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_BASEDEFENCEADD_OFFSET))(this);
		}

		::System::Void set_BaseDefenceAdd(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_BASEDEFENCEADD_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseAttackEx()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_BASEATTACKEX_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONGROUPDATA_SET_INDEX_OFFSET))(this, value);
		}
	};
}
