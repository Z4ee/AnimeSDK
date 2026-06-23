#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE7FEC0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS41_0__SHOWPAYAGELIMITLEGACY_B__0_OFFSET UNITYSDK_OFFSET(0x1BE7FED0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass41_0_TypeDefinitionIndex = 21089;

	class OverseaPayManager___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::Action* closeCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPayAgeLimitLegacy_b__0(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS41_0__SHOWPAYAGELIMITLEGACY_B__0_OFFSET))(this, web);
		}
	};
}
