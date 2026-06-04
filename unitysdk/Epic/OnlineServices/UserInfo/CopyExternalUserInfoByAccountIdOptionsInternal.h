#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UserInfo { class CopyExternalUserInfoByAccountIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x22160)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x220E0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x22020)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x21EA0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x220D0)
#define EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x21F60)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int CopyExternalUserInfoByAccountIdOptionsInternal_TypeDefinitionIndex = 41896;

	struct alignas(8) CopyExternalUserInfoByAccountIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20
		::System::IntPtr m_AccountId; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void set_AccountId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::CopyExternalUserInfoByAccountIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_COPYEXTERNALUSERINFOBYACCOUNTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
