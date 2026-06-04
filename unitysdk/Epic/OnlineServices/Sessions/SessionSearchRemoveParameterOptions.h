#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0xA0ECC60)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA0ECC40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0xA0ECC70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_SET_KEY_OFFSET UNITYSDK_OFFSET(0xA0ECC50)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0ECC80)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionSearchRemoveParameterOptions_TypeDefinitionIndex = 42174;

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

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_SET_KEY_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ComparisonOp get_ComparisonOp()
		{
			return ((::Epic::OnlineServices::ComparisonOp(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_GET_COMPARISONOP_OFFSET))(this);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSEARCHREMOVEPARAMETEROPTIONS_SET_COMPARISONOP_OFFSET))(this, a1);
		}
	};
}
