#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_39;
class Class_1_EB4EA813E55E9D5A;
class Class_4_E8F4610EF0D87EE0;
namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYNTFSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0xC8FFA90)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYSNAPSHOTDATA_OFFSET UNITYSDK_OFFSET(0xC8FFB70)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GETBATTLEITEMS_OFFSET UNITYSDK_OFFSET(0xC8FFC20)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_BATTLEITEMIDS_OFFSET UNITYSDK_OFFSET(0xC900230)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_CDENDTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xC900210)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_ISCDREMAINING_OFFSET UNITYSDK_OFFSET(0xC9001F0)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_BATTLEITEMIDS_OFFSET UNITYSDK_OFFSET(0xC900240)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_CDENDTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xC900220)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_ISCDREMAINING_OFFSET UNITYSDK_OFFSET(0xC900200)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8FFB40)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemSyncData_TypeDefinitionIndex = 63001;

	class CakeRaceBattleItemSyncData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BattleItemIDs_k__BackingField; // 0x10
		::System::UInt64 _CdEndTimeStampMs_k__BackingField; // 0x18
		::System::Boolean _IsCdRemaining_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt64 a1, ::Class_1_45BB92167AED63A0_39* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Class_1_45BB92167AED63A0_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::CakeRaceBattleItemSyncData* CreateByNtfSyncMessage(::Class_4_E8F4610EF0D87EE0* a1)
		{
			return ((::RPG::Client::CakeRaceBattleItemSyncData*(*)(::Class_4_E8F4610EF0D87EE0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYNTFSYNCMESSAGE_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceBattleItemSyncData* CreateBySnapShotData(::System::UInt64 a1, ::Class_1_EB4EA813E55E9D5A* a2)
		{
			return ((::RPG::Client::CakeRaceBattleItemSyncData*(*)(::System::UInt64, ::Class_1_EB4EA813E55E9D5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYSNAPSHOTDATA_OFFSET))(a1, a2);
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
