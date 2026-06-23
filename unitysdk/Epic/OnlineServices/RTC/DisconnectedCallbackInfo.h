#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/DisconnectedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C544130)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C5440D0)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C5440F0)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C5440B0)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C544110)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C544410)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C5440E0)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C544100)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C544150)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C5440C0)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C544120)
#define EPIC_ONLINESERVICES_RTC_DISCONNECTEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C544550)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int DisconnectedCallbackInfo_TypeDefinitionIndex = 35308;

	class DisconnectedCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
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
