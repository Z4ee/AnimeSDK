#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_Packet; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB6EF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass57_0_TypeDefinitionIndex = 44698;

	class SecurityTunnel___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_Packet* packet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}
	};
}
