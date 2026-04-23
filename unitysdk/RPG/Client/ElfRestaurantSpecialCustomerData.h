#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantSpecialCustomerRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA263220)
#define RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET_CUSTOMERID_OFFSET UNITYSDK_OFFSET(0xA275950)
#define RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET_EVENTCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA272300)
#define RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET_SELECTEVENTID_OFFSET UNITYSDK_OFFSET(0xA275A20)
#define RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET_SPECIALCUSTOMERID_OFFSET UNITYSDK_OFFSET(0xA275930)
#define RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA2759C0)
#define RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_SET_SPECIALCUSTOMERID_OFFSET UNITYSDK_OFFSET(0xA275940)
#define RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA275920)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantSpecialCustomerData_TypeDefinitionIndex = 58749;

	class ElfRestaurantSpecialCustomerData : public ::System::Object
	{
	public:
		::System::UInt32 _SpecialCustomerID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantSpecialCustomerData* Create(::System::UInt32 specialCustomerID)
		{
			return ((::RPG::Client::ElfRestaurantSpecialCustomerData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_CREATE_OFFSET))(specialCustomerID);
		}

		::System::UInt32 get_SpecialCustomerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET_SPECIALCUSTOMERID_OFFSET))(this);
		}

		::System::Void set_SpecialCustomerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_SET_SPECIALCUSTOMERID_OFFSET))(this, value);
		}

		::System::UInt32 get_CustomerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET_CUSTOMERID_OFFSET))(this);
		}

		::System::UInt32 get_SelectEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET_SELECTEVENTID_OFFSET))(this);
		}

		::System::String* get_EventConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET_EVENTCONFIGPATH_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantSpecialCustomerRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantSpecialCustomerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSPECIALCUSTOMERDATA_GET__ROW_OFFSET))(this);
		}
	};
}
