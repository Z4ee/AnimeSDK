#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/JoinRoomCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BF03A30)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BF039D0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BF039F0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BF039B0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1BF03A10)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1BF03D10)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BF039E0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BF03A00)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1BF03A50)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BF039C0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1BF03A20)
#define EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF03E50)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int JoinRoomCallbackInfo_TypeDefinitionIndex = 35310;

	class JoinRoomCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTC::JoinRoomCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTC::JoinRoomCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
