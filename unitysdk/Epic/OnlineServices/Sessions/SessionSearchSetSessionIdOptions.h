#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xA0ED3B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xA0ED3C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0ED3D0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchSetSessionIdOptions_TypeDefinitionIndex = 42180;

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

		::System::Void set_SessionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHSETSESSIONIDOPTIONS_SET_SESSIONID_OFFSET))(this, a1);
		}
	};
}
