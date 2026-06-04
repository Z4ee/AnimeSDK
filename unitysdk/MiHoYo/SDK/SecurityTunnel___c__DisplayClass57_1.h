#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketResponseCallback.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel___c__DisplayClass57_0; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS57_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA20C670)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS57_1__DISPATCHPACKET_B__0_OFFSET UNITYSDK_OFFSET(0xA2128A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass57_1_TypeDefinitionIndex = 43837;

	class SecurityTunnel___c__DisplayClass57_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel___c__DisplayClass57_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::SecurityTunnel_PacketResponseCallback callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS57_1__CTOR_OFFSET))(this);
		}

		::System::Void _DispatchPacket_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS57_1__DISPATCHPACKET_B__0_OFFSET))(this, a1);
		}
	};
}
