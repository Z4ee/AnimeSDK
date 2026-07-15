#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantContactsConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18D81D20)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x18D81D90)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18D81ED0)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18D81DB0)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x18D81E70)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_SET_CONTACTID_OFFSET UNITYSDK_OFFSET(0x18D81DA0)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18D81D80)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventMessageContactsData_TypeDefinitionIndex = 60879;

	class ElfSelectEventMessageContactsData : public ::System::Object
	{
	public:
		::System::UInt32 _ContactID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfSelectEventMessageContactsData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfSelectEventMessageContactsData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_CONTACTID_OFFSET))(this);
		}

		::System::Void set_ContactID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_SET_CONTACTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantContactsConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantContactsConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET__ROW_OFFSET))(this);
		}
	};
}
