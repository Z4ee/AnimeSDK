#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketResponseCallback.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel___c__DisplayClass55_0; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS55_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA2126B0)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS55_1__SAFEENQUEUECALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0xA2126C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass55_1_TypeDefinitionIndex = 43834;

	class SecurityTunnel___c__DisplayClass55_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_PacketResponseCallback cbk; // 0x10
		::MiHoYo::SDK::SecurityTunnel___c__DisplayClass55_0* CS___8__locals1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS55_1__CTOR_OFFSET))(this);
		}

		::System::Void _SafeEnqueueCallback_b__1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS55_1__SAFEENQUEUECALLBACK_B__1_OFFSET))(this, a1);
		}
	};
}
