#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantCustomerRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB8D2860)
#define RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET_CUSTOMERID_OFFSET UNITYSDK_OFFSET(0xB8D28D0)
#define RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB8D29C0)
#define RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0xB8D28F0)
#define RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB8D2A30)
#define RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB8D2960)
#define RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_SET_CUSTOMERID_OFFSET UNITYSDK_OFFSET(0xB8D28E0)
#define RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D28C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantCustomerData_TypeDefinitionIndex = 59661;

	class ElfRestaurantCustomerData : public ::System::Object
	{
	public:
		::System::UInt32 _CustomerID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantCustomerData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantCustomerData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_CustomerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET_CUSTOMERID_OFFSET))(this);
		}

		::System::Void set_CustomerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_SET_CUSTOMERID_OFFSET))(this, a1);
		}

		::System::String* get_ImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET_IMGPATH_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantCustomerRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantCustomerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTCUSTOMERDATA_GET__ROW_OFFSET))(this);
		}
	};
}
