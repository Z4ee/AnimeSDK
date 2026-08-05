#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONS_GET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x1E519290)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONS_SET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x1E5192A0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5192B0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int UnregisterPeerOptions_TypeDefinitionIndex = 36996;

	class UnregisterPeerOptions : public ::System::Object
	{
	public:
		::System::IntPtr _PeerHandle_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PeerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONS_GET_PEERHANDLE_OFFSET))(this);
		}

		::System::Void set_PeerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNREGISTERPEEROPTIONS_SET_PEERHANDLE_OFFSET))(this, value);
		}
	};
}
