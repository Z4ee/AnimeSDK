#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_264;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfFacilityDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFACILITYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8A9220)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLNEWUNLOCKFACILITYDATA_OFFSET UNITYSDK_OFFSET(0xB8A9D80)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDDEVICESDATA_OFFSET UNITYSDK_OFFSET(0xB8AA850)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDFACILITYDATA_OFFSET UNITYSDK_OFFSET(0xB8A9B10)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDTABLECOUNT_OFFSET UNITYSDK_OFFSET(0xB8AA000)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLPURCHASEDTABLEDATA_OFFSET UNITYSDK_OFFSET(0xB8AA270)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLUNPURCHASEDDEVICESDATA_OFFSET UNITYSDK_OFFSET(0xB8AAE00)
#define RPG_CLIENT_ELFFACILITYINFO_GETALLUNPURCHASEDTABLEDATA_OFFSET UNITYSDK_OFFSET(0xB8AA560)
#define RPG_CLIENT_ELFFACILITYINFO_GETDRINKMACHINEDATA_OFFSET UNITYSDK_OFFSET(0xB8AABC0)
#define RPG_CLIENT_ELFFACILITYINFO_GETFACILITY_OFFSET UNITYSDK_OFFSET(0xB8A96D0)
#define RPG_CLIENT_ELFFACILITYINFO_GETPLATFORMDATA_OFFSET UNITYSDK_OFFSET(0xB8A98D0)
#define RPG_CLIENT_ELFFACILITYINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB8A8FB0)
#define RPG_CLIENT_ELFFACILITYINFO_ISFACILITYPURCHASED_OFFSET UNITYSDK_OFFSET(0xB8A97C0)
#define RPG_CLIENT_ELFFACILITYINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xB8A9400)
#define RPG_CLIENT_ELFFACILITYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB8A92C0)
#define RPG_CLIENT_ELFFACILITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AB170)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFacilityInfo_TypeDefinitionIndex = 59599;

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

		::System::Void Sync(::Class_1_D17272E82AE804C2_264* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_264*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void Sync_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_264*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_264*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_SYNC_1_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFacilityDataItem* GetFacility(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFacilityDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_GETFACILITY_OFFSET))(this, a1);
		}

		::System::Boolean IsFacilityPurchased(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFACILITYINFO_ISFACILITYPURCHASED_OFFSET))(this, a1);
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
