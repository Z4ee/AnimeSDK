#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantTagRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFRESTAURANTTAGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB8FEF20)
#define RPG_CLIENT_ELFRESTAURANTTAGDATA_GET_COLORID_OFFSET UNITYSDK_OFFSET(0xB8FF090)
#define RPG_CLIENT_ELFRESTAURANTTAGDATA_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xB8FF100)
#define RPG_CLIENT_ELFRESTAURANTTAGDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB8FEFB0)
#define RPG_CLIENT_ELFRESTAURANTTAGDATA_GET_TAGID_OFFSET UNITYSDK_OFFSET(0xB8FEF90)
#define RPG_CLIENT_ELFRESTAURANTTAGDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB8FF030)
#define RPG_CLIENT_ELFRESTAURANTTAGDATA_SET_TAGID_OFFSET UNITYSDK_OFFSET(0xB8FEFA0)
#define RPG_CLIENT_ELFRESTAURANTTAGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FEF80)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantTagData_TypeDefinitionIndex = 59680;

	class ElfRestaurantTagData : public ::System::Object
	{
	public:
		::System::UInt32 _TagID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTTAGDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantTagData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantTagData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTTAGDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_TagID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTTAGDATA_GET_TAGID_OFFSET))(this);
		}

		::System::Void set_TagID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTTAGDATA_SET_TAGID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTTAGDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_ColorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTTAGDATA_GET_COLORID_OFFSET))(this);
		}

		::System::String* get_Color()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTTAGDATA_GET_COLOR_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantTagRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantTagRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTTAGDATA_GET__ROW_OFFSET))(this);
		}
	};
}
