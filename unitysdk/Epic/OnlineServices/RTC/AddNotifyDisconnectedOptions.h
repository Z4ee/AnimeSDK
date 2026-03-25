#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86DC2E0)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86DC300)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86DC2F0)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86DC310)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86DC320)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int AddNotifyDisconnectedOptions_TypeDefinitionIndex = 35692;

	class AddNotifyDisconnectedOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYDISCONNECTEDOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}
	};
}
