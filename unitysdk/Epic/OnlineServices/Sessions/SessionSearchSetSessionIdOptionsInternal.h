#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionSearchSetSessionIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x18AF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x18A20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONSINTERNAL_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x18970)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetSessionIdOptionsInternal_TypeDefinitionIndex = 42181;

	struct alignas(8) SessionSearchSetSessionIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionId; // 0x18

		::System::Void set_SessionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONSINTERNAL_SET_SESSIONID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
