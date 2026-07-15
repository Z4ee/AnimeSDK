#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class QueryInvitesOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A8FA30)
#define EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A8FA20)
#define EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A8F890)
#define EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A8F950)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int QueryInvitesOptionsInternal_TypeDefinitionIndex = 42974;

	struct alignas(8) QueryInvitesOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::QueryInvitesOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::QueryInvitesOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_QUERYINVITESOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
