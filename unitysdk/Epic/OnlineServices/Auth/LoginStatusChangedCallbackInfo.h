#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LoginStatusChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/LoginStatus.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C9BF580)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C9BF500)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1C9BF560)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C9BF520)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GET_PREVSTATUS_OFFSET UNITYSDK_OFFSET(0x1C9BF540)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C9BF7D0)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C9BF510)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1C9BF570)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C9BF530)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C9BF590)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_PREVSTATUS_OFFSET UNITYSDK_OFFSET(0x1C9BF550)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BF900)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LoginStatusChangedCallbackInfo_TypeDefinitionIndex = 36822;

	class LoginStatusChangedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::LoginStatus _PrevStatus_k__BackingField; // 0x20
		::Epic::OnlineServices::LoginStatus _CurrentStatus_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::LoginStatus get_PrevStatus()
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GET_PREVSTATUS_OFFSET))(this);
		}

		::System::Void set_PrevStatus(::Epic::OnlineServices::LoginStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::LoginStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_PREVSTATUS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::LoginStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::Epic::OnlineServices::LoginStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::LoginStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_CURRENTSTATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
