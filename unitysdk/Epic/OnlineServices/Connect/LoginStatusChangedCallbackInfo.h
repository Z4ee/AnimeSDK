#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/LoginStatusChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/LoginStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BEFD360)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BEFD2E0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1BEFD340)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BEFD300)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x1BEFD320)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1BEFD5B0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BEFD2F0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1BEFD350)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BEFD310)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1BEFD370)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x1BEFD330)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFD6E0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int LoginStatusChangedCallbackInfo_TypeDefinitionIndex = 36086;

	class LoginStatusChangedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::LoginStatus _CurrentStatus_k__BackingField; // 0x20
		::Epic::OnlineServices::LoginStatus _PreviousStatus_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::LoginStatus get_PreviousStatus()
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::System::Void set_PreviousStatus(::Epic::OnlineServices::LoginStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::LoginStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_PREVIOUSSTATUS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::LoginStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::Epic::OnlineServices::LoginStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::LoginStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_CURRENTSTATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
