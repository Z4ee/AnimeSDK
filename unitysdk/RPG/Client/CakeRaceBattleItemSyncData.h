#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_28;
class Class_1_BB4B99DE4C2501EC_5;
class Class_4_E8F4610EF0D87EE0;
namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYNTFSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x922E490)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYSNAPSHOTDATA_OFFSET UNITYSDK_OFFSET(0x922E570)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GETBATTLEITEMS_OFFSET UNITYSDK_OFFSET(0x922E620)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_BATTLEITEMIDS_OFFSET UNITYSDK_OFFSET(0x922EA20)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_CDENDTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x922EA00)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_ISCDREMAINING_OFFSET UNITYSDK_OFFSET(0x922E9E0)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_BATTLEITEMIDS_OFFSET UNITYSDK_OFFSET(0x922EA30)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_CDENDTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x922EA10)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_ISCDREMAINING_OFFSET UNITYSDK_OFFSET(0x922E9F0)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x922E540)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemSyncData_TypeDefinitionIndex = 51113;

	class CakeRaceBattleItemSyncData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BattleItemIDs_k__BackingField; // 0x10
		::System::UInt64 _CdEndTimeStampMs_k__BackingField; // 0x18
		::System::Boolean _IsCdRemaining_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt64 beginTimeStamp, ::Class_1_735612C94F558EAE_28* battleItemData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Class_1_735612C94F558EAE_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA__CTOR_OFFSET))(this, beginTimeStamp, battleItemData);
		}

		static ::RPG::Client::CakeRaceBattleItemSyncData* CreateByNtfSyncMessage(::Class_4_E8F4610EF0D87EE0* skillItemMessage)
		{
			return ((::RPG::Client::CakeRaceBattleItemSyncData*(*)(::Class_4_E8F4610EF0D87EE0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYNTFSYNCMESSAGE_OFFSET))(skillItemMessage);
		}

		static ::RPG::Client::CakeRaceBattleItemSyncData* CreateBySnapShotData(::System::UInt64 beginTimeStamp, ::Class_1_BB4B99DE4C2501EC_5* snapShotData)
		{
			return ((::RPG::Client::CakeRaceBattleItemSyncData*(*)(::System::UInt64, ::Class_1_BB4B99DE4C2501EC_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYSNAPSHOTDATA_OFFSET))(beginTimeStamp, snapShotData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>* GetBattleItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GETBATTLEITEMS_OFFSET))(this);
		}

		::System::Boolean get_IsCdRemaining()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_ISCDREMAINING_OFFSET))(this);
		}

		::System::Void set_IsCdRemaining(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_ISCDREMAINING_OFFSET))(this, value);
		}

		::System::UInt64 get_CdEndTimeStampMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_CDENDTIMESTAMPMS_OFFSET))(this);
		}

		::System::Void set_CdEndTimeStampMs(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_CDENDTIMESTAMPMS_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleItemIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_BATTLEITEMIDS_OFFSET))(this);
		}

		::System::Void set_BattleItemIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_BATTLEITEMIDS_OFFSET))(this, value);
		}
	};
}
