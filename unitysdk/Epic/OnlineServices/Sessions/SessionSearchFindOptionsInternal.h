#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class SessionSearchFindOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FE300)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9FE1D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9FE040)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9FE100)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchFindOptionsInternal_TypeDefinitionIndex = 35807;

	struct alignas(8) SessionSearchFindOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchFindOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchFindOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHFINDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
