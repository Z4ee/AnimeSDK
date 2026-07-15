#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::QA::RemoteDebug
{
	inline static constexpr unsigned int RemoteDebugDiscoveryReply_TypeDefinitionIndex = 49470;

	struct alignas(8) RemoteDebugDiscoveryReply
	{
		::System::UInt16 TcpPort; // 0x10
		::System::String* DeviceName; // 0x18
		::System::String* Platform; // 0x20
		::System::Int32 Pid; // 0x28
	};
}
