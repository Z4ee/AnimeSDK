#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/LeaveRoomCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F13810)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F137B0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F137D0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F13790)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F137F0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8F13DF0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8F137C0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F137E0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8F13830)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8F137A0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8F13800)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8F13F20)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int LeaveRoomCallbackInfo_TypeDefinitionIndex = 41533;

	class LeaveRoomCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
