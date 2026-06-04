#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_33;
class Class_1_FBCD4FF549575A07_1;
class Class_4_E8F4610EF0D87EE0;
namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYNTFSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0xB48F070)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYSNAPSHOTDATA_OFFSET UNITYSDK_OFFSET(0xB48F150)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GETBATTLEITEMS_OFFSET UNITYSDK_OFFSET(0xB48F200)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_BATTLEITEMIDS_OFFSET UNITYSDK_OFFSET(0xB48F670)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_CDENDTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xB48F650)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_ISCDREMAINING_OFFSET UNITYSDK_OFFSET(0xB48F630)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_BATTLEITEMIDS_OFFSET UNITYSDK_OFFSET(0xB48F680)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_CDENDTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xB48F660)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_ISCDREMAINING_OFFSET UNITYSDK_OFFSET(0xB48F640)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB48F120)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemSyncData_TypeDefinitionIndex = 58949;

	class CakeRaceBattleItemSyncData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BattleItemIDs_k__BackingField; // 0x10
		::System::Boolean _IsCdRemaining_k__BackingField; // 0x18
		::System::UInt64 _CdEndTimeStampMs_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt64 a1, ::Class_1_45BB92167AED63A0_33* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Class_1_45BB92167AED63A0_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::CakeRaceBattleItemSyncData* CreateByNtfSyncMessage(::Class_4_E8F4610EF0D87EE0* a1)
		{
			return ((::RPG::Client::CakeRaceBattleItemSyncData*(*)(::Class_4_E8F4610EF0D87EE0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYNTFSYNCMESSAGE_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceBattleItemSyncData* CreateBySnapShotData(::System::UInt64 a1, ::Class_1_FBCD4FF549575A07_1* a2)
		{
			return ((::RPG::Client::CakeRaceBattleItemSyncData*(*)(::System::UInt64, ::Class_1_FBCD4FF549575A07_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYSNAPSHOTDATA_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>* GetBattleItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GETBATTLEITEMS_OFFSET))(this);
		}

		::System::Boolean get_IsCdRemaining()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_ISCDREMAINING_OFFSET))(this);
		}

		::System::Void set_IsCdRemaining(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_ISCDREMAINING_OFFSET))(this, a1);
		}

		::System::UInt64 get_CdEndTimeStampMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_CDENDTIMESTAMPMS_OFFSET))(this);
		}

		::System::Void set_CdEndTimeStampMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_CDENDTIMESTAMPMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleItemIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_BATTLEITEMIDS_OFFSET))(this);
		}

		::System::Void set_BattleItemIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_BATTLEITEMIDS_OFFSET))(this, a1);
		}
	};
}
