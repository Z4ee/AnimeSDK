#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UserInfo { class GetExternalUserInfoCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x978CC0)
#define EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x978C50)
#define EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x978AC0)
#define EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x978C40)
#define EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x978B80)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int GetExternalUserInfoCountOptionsInternal_TypeDefinitionIndex = 34885;

	struct alignas(8) GetExternalUserInfoCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::GetExternalUserInfoCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_GETEXTERNALUSERINFOCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
