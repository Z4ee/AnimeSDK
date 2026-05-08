#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class PayManagerCX; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19993C70)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS19_0__LAUNCHCONSOLEPAY_B__0_OFFSET UNITYSDK_OFFSET(0x19993C80)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass19_0_TypeDefinitionIndex = 19685;

	class PayManagerCX___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleProduct product; // 0x10
		::MiHoYo::SDK::Console::OS::PayManagerCX* __4__this; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _LaunchConsolePay_b__0(::System::Boolean canPay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS19_0__LAUNCHCONSOLEPAY_B__0_OFFSET))(this, canPay);
		}
	};
}
