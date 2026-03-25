#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F48B67D07D3C17D7;
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfFarmSeedData; }

#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x95A1BD0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_DAYSTOMATURITY_OFFSET UNITYSDK_OFFSET(0x95A7270)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_GROWINGDAYS_OFFSET UNITYSDK_OFFSET(0x95A7250)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISBIGCROP_OFFSET UNITYSDK_OFFSET(0x95A73C0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISMATURED_OFFSET UNITYSDK_OFFSET(0x95A73A0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_PRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x95A70C0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x95A6FD0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDDATA_OFFSET UNITYSDK_OFFSET(0x95A6E50)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDID_OFFSET UNITYSDK_OFFSET(0x95A6E30)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_GROWINGDAYS_OFFSET UNITYSDK_OFFSET(0x95A7260)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISBIGCROP_OFFSET UNITYSDK_OFFSET(0x95A73D0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISMATURED_OFFSET UNITYSDK_OFFSET(0x95A73B0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_SEEDID_OFFSET UNITYSDK_OFFSET(0x95A6E40)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x95A1C70)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x95A6E20)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmGrowingCropsData_TypeDefinitionIndex = 51726;

	class ElfFarmGrowingCropsData : public ::System::Object
	{
	public:
		::System::UInt32 _SeedID_k__BackingField; // 0x10
		::System::Boolean _IsBigCrop_k__BackingField; // 0x14
		::System::Boolean _IsMatured_k__BackingField; // 0x15
		::System::UInt32 _GrowingDays_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmGrowingCropsData* Create(::Class_1_F48B67D07D3C17D7* serverInfo)
		{
			return ((::RPG::Client::ElfFarmGrowingCropsData*(*)(::Class_1_F48B67D07D3C17D7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_CREATE_OFFSET))(serverInfo);
		}

		::System::Void Sync(::Class_1_F48B67D07D3C17D7* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F48B67D07D3C17D7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SYNC_OFFSET))(this, serverInfo);
		}

		::System::UInt32 get_SeedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDID_OFFSET))(this);
		}

		::System::Void set_SeedID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_SEEDID_OFFSET))(this, value);
		}

		::RPG::Client::ElfFarmSeedData* get_SeedData()
		{
			return ((::RPG::Client::ElfFarmSeedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDDATA_OFFSET))(this);
		}

		::System::UInt32 get_ProductID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_PRODUCTID_OFFSET))(this);
		}

		::RPG::Client::ElfFarmProductData* get_ProductData()
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_PRODUCTDATA_OFFSET))(this);
		}

		::System::UInt32 get_GrowingDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_GROWINGDAYS_OFFSET))(this);
		}

		::System::Void set_GrowingDays(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_GROWINGDAYS_OFFSET))(this, value);
		}

		::System::UInt32 get_DaysToMaturity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_DAYSTOMATURITY_OFFSET))(this);
		}

		::System::Boolean get_IsMatured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISMATURED_OFFSET))(this);
		}

		::System::Void set_IsMatured(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISMATURED_OFFSET))(this, value);
		}

		::System::Boolean get_IsBigCrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISBIGCROP_OFFSET))(this);
		}

		::System::Void set_IsBigCrop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISBIGCROP_OFFSET))(this, value);
		}
	};
}
