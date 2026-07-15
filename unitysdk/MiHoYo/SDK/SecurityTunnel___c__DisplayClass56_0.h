#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketResponseCallback.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB6EE0)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS56_0__SAFEDEQUEUECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1ABBD750)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass56_0_TypeDefinitionIndex = 44697;

	class SecurityTunnel___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::System::UInt64 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SafeDequeueCallback_b__0(::MiHoYo::SDK::SecurityTunnel_PacketResponseCallback a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketResponseCallback))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS56_0__SAFEDEQUEUECALLBACK_B__0_OFFSET))(this, a1);
		}
	};
}
