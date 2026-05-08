#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1A2C9870)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1A2C9880)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C9890)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetSessionIdOptions_TypeDefinitionIndex = 33596;

	class SessionSearchSetSessionIdOptions : public ::System::Object
	{
	public:
		::System::String* _SessionId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SessionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS_GET_SESSIONID_OFFSET))(this);
		}

		::System::Void set_SessionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS_SET_SESSIONID_OFFSET))(this, value);
		}
	};
}
