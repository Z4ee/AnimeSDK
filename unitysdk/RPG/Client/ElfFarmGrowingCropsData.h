#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28AF0C7D8FD87E9F;
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfFarmSeedData; }

#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB8ABEC0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_DAYSTOMATURITY_OFFSET UNITYSDK_OFFSET(0xB8B1A20)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_GROWINGDAYS_OFFSET UNITYSDK_OFFSET(0xB8B1A00)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISBIGCROP_OFFSET UNITYSDK_OFFSET(0xB8B1B70)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISMATURED_OFFSET UNITYSDK_OFFSET(0xB8B1B50)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_PRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xB8B1800)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xB8B1710)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDDATA_OFFSET UNITYSDK_OFFSET(0xB8B15B0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDID_OFFSET UNITYSDK_OFFSET(0xB8B1590)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_GROWINGDAYS_OFFSET UNITYSDK_OFFSET(0xB8B1A10)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISBIGCROP_OFFSET UNITYSDK_OFFSET(0xB8B1B80)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISMATURED_OFFSET UNITYSDK_OFFSET(0xB8B1B60)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_SEEDID_OFFSET UNITYSDK_OFFSET(0xB8B15A0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB8ABF60)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B1580)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmGrowingCropsData_TypeDefinitionIndex = 59604;

	class ElfFarmGrowingCropsData : public ::System::Object
	{
	public:
		::System::UInt32 _GrowingDays_k__BackingField; // 0x10
		::System::UInt32 _SeedID_k__BackingField; // 0x14
		::System::Boolean _IsMatured_k__BackingField; // 0x18
		::System::Boolean _IsBigCrop_k__BackingField; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmGrowingCropsData* Create(::Class_1_28AF0C7D8FD87E9F* a1)
		{
			return ((::RPG::Client::ElfFarmGrowingCropsData*(*)(::Class_1_28AF0C7D8FD87E9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_28AF0C7D8FD87E9F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDID_OFFSET))(this);
		}

		::System::Void set_SeedID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_SEEDID_OFFSET))(this, a1);
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

		::System::Void set_GrowingDays(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_GROWINGDAYS_OFFSET))(this, a1);
		}

		::System::UInt32 get_DaysToMaturity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_DAYSTOMATURITY_OFFSET))(this);
		}

		::System::Boolean get_IsMatured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISMATURED_OFFSET))(this);
		}

		::System::Void set_IsMatured(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISMATURED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBigCrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISBIGCROP_OFFSET))(this);
		}

		::System::Void set_IsBigCrop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISBIGCROP_OFFSET))(this, a1);
		}
	};
}
