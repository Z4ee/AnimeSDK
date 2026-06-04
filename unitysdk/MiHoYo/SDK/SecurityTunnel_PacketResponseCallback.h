#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK { class SecurityTunnel_ResponseCallbackAction; }
namespace System::Timers { class Timer; }

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETRESPONSECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x2C890)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketResponseCallback_TypeDefinitionIndex = 43798;

	struct alignas(8) SecurityTunnel_PacketResponseCallback
	{
		::System::UInt64 RequestID; // 0x10
		::System::Timers::Timer* TimeoutTimer; // 0x18
		::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* Callback; // 0x20

		::System::Void _ctor(::System::UInt64 a1, ::System::Timers::Timer* a2, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Timers::Timer*, ::MiHoYo::SDK::SecurityTunnel_ResponseCallbackAction*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETRESPONSECALLBACK__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
