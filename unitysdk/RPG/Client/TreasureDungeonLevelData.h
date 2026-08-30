#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_20;
namespace RPG::Client { class TreasureDungeonGroupData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class TreasureDungeonConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_DATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1B2C4B10)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B2CBA20)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_CURFLOOR_OFFSET UNITYSDK_OFFSET(0x1B2CB8F0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1B2C17D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_HIGHESTFLOORRECORD_OFFSET UNITYSDK_OFFSET(0x1B2CB8D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B2C1820)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x1B2C4CD0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B2CB430)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B2CB3A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISLOCKFINISHED_OFFSET UNITYSDK_OFFSET(0x1B2CB820)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x1B2C1730)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISPREDUNGEONFINISHED_OFFSET UNITYSDK_OFFSET(0x1B2CB6B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_MAXFLOOR_OFFSET UNITYSDK_OFFSET(0x1B2CB910)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_PREDUNGEONNAME_OFFSET UNITYSDK_OFFSET(0x1B2CB5E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1B2CBAB0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_SHOWFLOOR_OFFSET UNITYSDK_OFFSET(0x1B2CB9C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_SET_CURFLOOR_OFFSET UNITYSDK_OFFSET(0x1B2CB900)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_SET_HIGHESTFLOORRECORD_OFFSET UNITYSDK_OFFSET(0x1B2CB8E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1B2CBAC0)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1B2C4970)
#define RPG_CLIENT_TREASUREDUNGEONLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C47C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonLevelData_TypeDefinitionIndex = 68184;

	class TreasureDungeonLevelData : public ::System::Object
	{
	public:
		::RPG::Client::TreasureDungeonGroupData* _OwnerGroupData; // 0x10
		::RPG::GameCore::TreasureDungeonConfigRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _HighestFloorRecord_k__BackingField; // 0x20
		::System::UInt32 _CurFloor_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TreasureDungeonGroupData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TreasureDungeonGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* DataPrepared()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_DATAPREPARED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::String* get_PreDungeonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_PREDUNGEONNAME_OFFSET))(this);
		}

		::System::Boolean get_IsPreDungeonFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISPREDUNGEONFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsLockFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISLOCKFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISOPENED_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ISDOING_OFFSET))(this);
		}

		::System::UInt32 get_HighestFloorRecord()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_HIGHESTFLOORRECORD_OFFSET))(this);
		}

		::System::Void set_HighestFloorRecord(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_SET_HIGHESTFLOORRECORD_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurFloor()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_CURFLOOR_OFFSET))(this);
		}

		::System::Void set_CurFloor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_SET_CURFLOOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxFloor()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_MAXFLOOR_OFFSET))(this);
		}

		::System::UInt32 get_ShowFloor()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_SHOWFLOOR_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TreasureDungeonConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::TreasureDungeonConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeonConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVELDATA_SET_ROW_OFFSET))(this, a1);
		}
	};
}
