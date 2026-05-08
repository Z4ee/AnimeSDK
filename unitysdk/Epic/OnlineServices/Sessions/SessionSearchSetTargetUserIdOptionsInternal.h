#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class SessionSearchSetTargetUserIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89AA40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x89A910)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x89A840)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x89A780)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetTargetUserIdOptionsInternal_TypeDefinitionIndex = 33599;

	struct alignas(8) SessionSearchSetTargetUserIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETTARGETUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
