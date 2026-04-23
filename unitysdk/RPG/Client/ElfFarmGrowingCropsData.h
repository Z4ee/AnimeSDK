#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28AF0C7D8FD87E9F;
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfFarmSeedData; }

#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2282B0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_DAYSTOMATURITY_OFFSET UNITYSDK_OFFSET(0xA22D960)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_GROWINGDAYS_OFFSET UNITYSDK_OFFSET(0xA22D940)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISBIGCROP_OFFSET UNITYSDK_OFFSET(0xA22DAB0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_ISMATURED_OFFSET UNITYSDK_OFFSET(0xA22DA90)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_PRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xA22D7B0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xA22D6C0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDDATA_OFFSET UNITYSDK_OFFSET(0xA22D530)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_GET_SEEDID_OFFSET UNITYSDK_OFFSET(0xA22D510)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_GROWINGDAYS_OFFSET UNITYSDK_OFFSET(0xA22D950)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISBIGCROP_OFFSET UNITYSDK_OFFSET(0xA22DAC0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_ISMATURED_OFFSET UNITYSDK_OFFSET(0xA22DAA0)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SET_SEEDID_OFFSET UNITYSDK_OFFSET(0xA22D520)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA228350)
#define RPG_CLIENT_ELFFARMGROWINGCROPSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA22D500)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmGrowingCropsData_TypeDefinitionIndex = 58674;

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

		static ::RPG::Client::ElfFarmGrowingCropsData* Create(::Class_1_28AF0C7D8FD87E9F* serverInfo)
		{
			return ((::RPG::Client::ElfFarmGrowingCropsData*(*)(::Class_1_28AF0C7D8FD87E9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_CREATE_OFFSET))(serverInfo);
		}

		::System::Void Sync(::Class_1_28AF0C7D8FD87E9F* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28AF0C7D8FD87E9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMGROWINGCROPSDATA_SYNC_OFFSET))(this, serverInfo);
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
