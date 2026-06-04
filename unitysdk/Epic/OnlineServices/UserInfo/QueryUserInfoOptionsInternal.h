#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UserInfo { class QueryUserInfoOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x24430)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x243B0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x24220)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x243A0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x242E0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoOptionsInternal_TypeDefinitionIndex = 41924;

	struct alignas(8) QueryUserInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::QueryUserInfoOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
