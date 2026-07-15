#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::QA::RemoteDebug
{
	inline static constexpr unsigned int RemoteDebugConfig_TypeDefinitionIndex = 49466;

	class RemoteDebugConfig : public ::System::Object
	{
	public:
		// static const ::System::Int32 kDefaultTcpPort = 0x6D72; // 0x0
		// static const ::System::Int32 kDefaultUdpPort = 0x6D73; // 0x0
		// static const ::System::UInt32 kDiscoveryMagic = 0x44475052; // 0x0
		// static const ::System::Byte kProtocolVersion = 0x1; // 0x0
		// static const ::System::Int32 kHeartbeatIntervalMs = 0xBB8; // 0x0
		// static const ::System::Int32 kHeartbeatMissMax = 0x3; // 0x0
		// static const ::System::Int32 kMaxFrameBytes = 0x800000; // 0x0
		// static const ::System::Double kDiscoveryReplyTtlSeconds; // 0x0
		// static const ::System::Int32 kDefaultManualPort = 0x6D72; // 0x0
	};
}
