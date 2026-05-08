#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ProtocolType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class OverseaProtocol; }

#define MIHOYO_SDK_OVERSEAPROTOCOL___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19456D80)
#define MIHOYO_SDK_OVERSEAPROTOCOL___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x19456D90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int OverseaProtocol___c__DisplayClass27_0_TypeDefinitionIndex = 19116;

	class OverseaProtocol___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ProtocolType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::OverseaProtocol* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::OverseaProtocol*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
