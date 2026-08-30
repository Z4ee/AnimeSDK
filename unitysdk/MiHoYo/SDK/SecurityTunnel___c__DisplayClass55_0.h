#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel; }
namespace MiHoYo::SDK { class SecurityTunnel_Packet; }
namespace System::Timers { class ElapsedEventArgs; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C9720)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS55_0__SAFEENQUEUECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1C6CE4A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass55_0_TypeDefinitionIndex = 46881;

	class SecurityTunnel___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_Packet* packet; // 0x10
		::MiHoYo::SDK::SecurityTunnel* __4__this; // 0x18
		::System::UInt64 id; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _SafeEnqueueCallback_b__0(::System::Object* a1, ::System::Timers::ElapsedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS55_0__SAFEENQUEUECALLBACK_B__0_OFFSET))(this, a1, a2);
		}
	};
}
