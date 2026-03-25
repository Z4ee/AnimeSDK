#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/UserInfo/QueryUserInfoByExternalAccountCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x83D4970)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x83D4930)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x83D48D0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_EXTERNALACCOUNTID_OFFSET UNITYSDK_OFFSET(0x83D4910)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83D48F0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x83D48B0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x83D4950)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x83D50E0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x83D4940)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x83D48E0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_EXTERNALACCOUNTID_OFFSET UNITYSDK_OFFSET(0x83D4920)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x83D4900)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x83D4990)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x83D48C0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x83D4960)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x83D5220)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoByExternalAccountCallbackInfo_TypeDefinitionIndex = 35288;

	class QueryUserInfoByExternalAccountCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _ExternalAccountId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20
		::System::Object* _ClientData_k__BackingField; // 0x28
		::Epic::OnlineServices::ExternalAccountType _AccountType_k__BackingField; // 0x30
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_ExternalAccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_EXTERNALACCOUNTID_OFFSET))(this);
		}

		::System::Void set_ExternalAccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_EXTERNALACCOUNTID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_ACCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_AccountType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_ACCOUNTTYPE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
