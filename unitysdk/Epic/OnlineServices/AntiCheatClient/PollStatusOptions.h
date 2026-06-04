#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONS_GET_OUTMESSAGELENGTH_OFFSET UNITYSDK_OFFSET(0xA0C3470)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONS_SET_OUTMESSAGELENGTH_OFFSET UNITYSDK_OFFSET(0xA0C3480)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C3490)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int PollStatusOptions_TypeDefinitionIndex = 43346;

	class PollStatusOptions : public ::System::Object
	{
	public:
		::System::UInt32 _OutMessageLength_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_OutMessageLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONS_GET_OUTMESSAGELENGTH_OFFSET))(this);
		}

		::System::Void set_OutMessageLength(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONS_SET_OUTMESSAGELENGTH_OFFSET))(this, a1);
		}
	};
}
