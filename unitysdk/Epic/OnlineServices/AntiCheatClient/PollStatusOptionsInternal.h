#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class PollStatusOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C38580)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCC9F0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_OUTMESSAGELENGTH_OFFSET UNITYSDK_OFFSET(0xB596A0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int PollStatusOptionsInternal_TypeDefinitionIndex = 46390;

	struct alignas(4) PollStatusOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_OutMessageLength; // 0x14

		::System::Void set_OutMessageLength(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_OUTMESSAGELENGTH_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::PollStatusOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::PollStatusOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
