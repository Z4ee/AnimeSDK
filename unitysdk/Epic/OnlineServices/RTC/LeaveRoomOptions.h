#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C011E60)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C011E80)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C011E70)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C011E90)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C011EA0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int LeaveRoomOptions_TypeDefinitionIndex = 43199;

	class LeaveRoomOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONS_SET_ROOMNAME_OFFSET))(this, a1);
		}
	};
}
