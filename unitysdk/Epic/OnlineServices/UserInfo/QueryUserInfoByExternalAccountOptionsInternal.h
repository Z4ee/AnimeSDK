#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UserInfo { class QueryUserInfoByExternalAccountOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x23F00)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x23E80)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xC4C0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_EXTERNALACCOUNTID_OFFSET UNITYSDK_OFFSET(0x23DC0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x23D00)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x23E70)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoByExternalAccountOptionsInternal_TypeDefinitionIndex = 41920;

	struct alignas(8) QueryUserInfoByExternalAccountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_ExternalAccountId; // 0x20
		::Epic::OnlineServices::ExternalAccountType m_AccountType; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_ExternalAccountId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_EXTERNALACCOUNTID_OFFSET))(this, a1);
		}

		::System::Void set_AccountType(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_ACCOUNTTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
