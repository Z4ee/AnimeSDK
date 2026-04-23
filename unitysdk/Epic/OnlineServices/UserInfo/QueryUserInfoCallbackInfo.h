#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/UserInfo/QueryUserInfoCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8BFD840)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8BFD7E0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8BFD800)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8BFD7C0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8BFD820)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8BFDD90)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8BFD7F0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8BFD810)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8BFD860)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8BFD7D0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8BFD830)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8BFDEC0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoCallbackInfo_TypeDefinitionIndex = 41118;

	class QueryUserInfoCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
