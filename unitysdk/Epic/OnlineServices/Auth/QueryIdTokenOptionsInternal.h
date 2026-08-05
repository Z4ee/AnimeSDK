#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class QueryIdTokenOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BE8D0)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9BE860)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9BE6D0)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9BE850)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9BE790)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int QueryIdTokenOptionsInternal_TypeDefinitionIndex = 36849;

	struct alignas(8) QueryIdTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetAccountId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_TargetAccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_SET_TARGETACCOUNTID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::QueryIdTokenOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::QueryIdTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
