#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x83B3010)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x83B2FF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x83B3020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x83B3000)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83B3030)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchRemoveParameterOptions_TypeDefinitionIndex = 35545;

	class SessionSearchRemoveParameterOptions : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::Epic::OnlineServices::ComparisonOp _ComparisonOp_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_SET_KEY_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ComparisonOp get_ComparisonOp()
		{
			return ((::Epic::OnlineServices::ComparisonOp(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET))(this);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET))(this, value);
		}
	};
}
