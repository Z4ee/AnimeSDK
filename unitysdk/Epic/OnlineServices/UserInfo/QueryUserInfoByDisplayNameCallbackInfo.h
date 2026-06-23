#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/UserInfo/QueryUserInfoByDisplayNameCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CBDDCF0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CBDDC70)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1CBDDCD0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CBDDC90)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CBDDC50)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1CBDDCB0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1CBDE0D0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CBDDC80)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1CBDDCE0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CBDDCA0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1CBDDD10)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CBDDC60)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1CBDDCC0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDE210)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoByDisplayNameCallbackInfo_TypeDefinitionIndex = 34892;

	class QueryUserInfoByDisplayNameCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x20
		::System::String* _DisplayName_k__BackingField; // 0x28
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMECALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
