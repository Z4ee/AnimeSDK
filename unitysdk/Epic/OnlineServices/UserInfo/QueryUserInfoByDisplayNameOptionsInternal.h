#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UserInfo { class QueryUserInfoByDisplayNameOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x22E80)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x22E10)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x22D50)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x22C90)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x22E00)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoByDisplayNameOptionsInternal_TypeDefinitionIndex = 41113;

	struct alignas(8) QueryUserInfoByDisplayNameOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_DisplayName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYDISPLAYNAMEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
