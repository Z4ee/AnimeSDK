#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class PollStatusOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8AF0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1D60)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_OUTMESSAGELENGTH_OFFSET UNITYSDK_OFFSET(0x1D50)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int PollStatusOptionsInternal_TypeDefinitionIndex = 36718;

	struct alignas(4) PollStatusOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_OutMessageLength; // 0x14

		::System::Void set_OutMessageLength(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_OUTMESSAGELENGTH_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::PollStatusOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::PollStatusOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_POLLSTATUSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
