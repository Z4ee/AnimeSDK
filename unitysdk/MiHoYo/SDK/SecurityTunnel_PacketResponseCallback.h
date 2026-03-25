#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK { class SecurityTunnel_ResponseCallbackAction; }
namespace System::Timers { class Timer; }

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETRESPONSECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x29380)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketResponseCallback_TypeDefinitionIndex = 37150;

	struct alignas(8) SecurityTunnel_PacketResponseCallback
	{
		::System::UInt64 RequestID; // 0x10
		::System::Timers::Timer* TimeoutTimer; // 0x18
		::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* Callback; // 0x20

		::System::Void _ctor(::System::UInt64 requestID, ::System::Timers::Timer* timeoutTimer, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Timers::Timer*, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETRESPONSECALLBACK__CTOR_OFFSET))(this, requestID, timeoutTimer, callback);
		}
	};
}
