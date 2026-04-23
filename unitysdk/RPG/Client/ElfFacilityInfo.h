#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_250;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfFacilityDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFACILITYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA225970)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLNEWUNLOCKFACILITYDATA_OFFSET UNITYSDK_OFFSET(0xA2263D0)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDDEVICESDATA_OFFSET UNITYSDK_OFFSET(0xA226BF0)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDFACILITYDATA_OFFSET UNITYSDK_OFFSET(0xA226210)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDTABLECOUNT_OFFSET UNITYSDK_OFFSET(0xA2265A0)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDTABLEDATA_OFFSET UNITYSDK_OFFSET(0xA2267B0)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLUNPURCHASEDDEVICESDATA_OFFSET UNITYSDK_OFFSET(0xA227080)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLUNPURCHASEDTABLEDATA_OFFSET UNITYSDK_OFFSET(0xA2269D0)
#define RPG_CLIENT_ELFFACILITYINFO_GETDRINKMACHINEDATA_OFFSET UNITYSDK_OFFSET(0xA226EA0)
#define RPG_CLIENT_ELFFACILITYINFO_GETFACILITY_OFFSET UNITYSDK_OFFSET(0xA225E60)
#define RPG_CLIENT_ELFFACILITYINFO_GETPLATFORMDATA_OFFSET UNITYSDK_OFFSET(0xA226030)
#define RPG_CLIENT_ELFFACILITYINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA225750)
#define RPG_CLIENT_ELFFACILITYINFO_ISFACILITYPURCHASED_OFFSET UNITYSDK_OFFSET(0xA225F40)
#define RPG_CLIENT_ELFFACILITYINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xA225B90)
#define RPG_CLIENT_ELFFACILITYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA225A20)
#define RPG_CLIENT_ELFFACILITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA227330)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFacilityInfo_TypeDefinitionIndex = 58669;

	class ElfFacilityInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFacilityDataItem*>* FacilityMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_250* facility, ::System::Boolean markDirty)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_250*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_SYNC_OFFSET))(this, facility, markDirty);
		}

		::System::Void Sync_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_250*>* facilities)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_250*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_SYNC_1_OFFSET))(this, facilities);
		}

		::RPG::Client::ElfFacilityDataItem* GetFacility(::System::UInt32 facilityId)
		{
			return ((::RPG::Client::ElfFacilityDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETFACILITY_OFFSET))(this, facilityId);
		}

		::System::Boolean IsFacilityPurchased(::System::UInt32 facilityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_ISFACILITYPURCHASED_OFFSET))(this, facilityId);
		}

		::RPG::Client::ElfFacilityDataItem* GetPlatformData()
		{
			return ((::RPG::Client::ElfFacilityDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETPLATFORMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* GetAllPurchasedFacilityData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDFACILITYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* GetAllNewUnlockFacilityData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETALLNEWUNLOCKFACILITYDATA_OFFSET))(this);
		}

		::System::Int32 GetAllPurchasedTableCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDTABLECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* GetAllPurchasedTableData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDTABLEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* GetAllUnPurchasedTableData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETALLUNPURCHASEDTABLEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* GetAllPurchasedDevicesData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDDEVICESDATA_OFFSET))(this);
		}

		::RPG::Client::ElfFacilityDataItem* GetDrinkMachineData()
		{
			return ((::RPG::Client::ElfFacilityDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETDRINKMACHINEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* GetAllUnPurchasedDevicesData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETALLUNPURCHASEDDEVICESDATA_OFFSET))(this);
		}
	};
}
