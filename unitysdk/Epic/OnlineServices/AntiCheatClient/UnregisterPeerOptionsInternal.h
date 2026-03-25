#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class UnregisterPeerOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96E0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9670)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9650)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONSINTERNAL_SET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x8D10)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int UnregisterPeerOptionsInternal_TypeDefinitionIndex = 36730;

	struct alignas(8) UnregisterPeerOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PeerHandle; // 0x18

		::System::Void set_PeerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONSINTERNAL_SET_PEERHANDLE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
