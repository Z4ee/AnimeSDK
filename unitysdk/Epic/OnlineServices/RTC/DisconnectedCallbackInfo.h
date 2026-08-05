#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/DisconnectedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D940D80)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D940D20)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D940D40)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D940D00)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1D940D60)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1D941060)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D940D30)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D940D50)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1D940DA0)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D940D10)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1D940D70)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9411A0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int DisconnectedCallbackInfo_TypeDefinitionIndex = 35967;

	class DisconnectedCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTC::DisconnectedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTC::DisconnectedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
