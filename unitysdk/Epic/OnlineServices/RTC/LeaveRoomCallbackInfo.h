#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/LeaveRoomCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA33B9B0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA33B950)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA33B970)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA33B930)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA33B990)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA33BF90)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA33B960)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA33B980)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA33B9D0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xA33B940)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA33B9A0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA33C0C0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int LeaveRoomCallbackInfo_TypeDefinitionIndex = 42336;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
