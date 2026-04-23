#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantContactsConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA27AA00)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_CONTACTID_OFFSET UNITYSDK_OFFSET(0xA27AA70)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA27AB70)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA27AA90)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA27AB10)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_SET_CONTACTID_OFFSET UNITYSDK_OFFSET(0xA27AA80)
#define RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA27AA60)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventMessageContactsData_TypeDefinitionIndex = 58664;

	class ElfSelectEventMessageContactsData : public ::System::Object
	{
	public:
		::System::UInt32 _ContactID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfSelectEventMessageContactsData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ElfSelectEventMessageContactsData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ContactID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_GET_CONTACTID_OFFSET))(this);
		}

		::System::Void set_ContactID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGECONTACTSDATA_SET_CONTACTID_OFFSET))(this, value);
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
