#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BF043C0)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1BF043E0)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_GET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0x1BF04400)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_GET_SETTINGVALUE_OFFSET UNITYSDK_OFFSET(0x1BF04420)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BF043D0)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1BF043F0)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_SET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0x1BF04410)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_SET_SETTINGVALUE_OFFSET UNITYSDK_OFFSET(0x1BF04430)
#define EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF04440)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int SetRoomSettingOptions_TypeDefinitionIndex = 35335;

	class SetRoomSettingOptions : public ::System::Object
	{
	public:
		::System::String* _SettingName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _SettingValue_k__BackingField; // 0x20
		::System::String* _RoomName_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::String* get_SettingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_GET_SETTINGNAME_OFFSET))(this);
		}

		::System::Void set_SettingName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_SET_SETTINGNAME_OFFSET))(this, value);
		}

		::System::String* get_SettingValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_GET_SETTINGVALUE_OFFSET))(this);
		}

		::System::Void set_SettingValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETROOMSETTINGOPTIONS_SET_SETTINGVALUE_OFFSET))(this, value);
		}
	};
}
