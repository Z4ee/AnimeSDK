#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UserInfo { class CopyExternalUserInfoByAccountTypeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x22520)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x224A0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xC4C0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x22310)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x22490)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x223D0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int CopyExternalUserInfoByAccountTypeOptionsInternal_TypeDefinitionIndex = 41898;

	struct alignas(8) CopyExternalUserInfoByAccountTypeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20
		::Epic::OnlineServices::ExternalAccountType m_AccountType; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void set_AccountType(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_ACCOUNTTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountTypeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTTYPEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
