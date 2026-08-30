#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class PayManagerCX; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173787A0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS21_0__LAUNCHCONSOLEPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1737AEB0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass21_0_TypeDefinitionIndex = 9043;

	class PayManagerCX___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleProduct product; // 0x10
		::MiHoYo::SDK::Console::OS::PayManagerCX* __4__this; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _LaunchConsolePay_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERCX___C__DISPLAYCLASS21_0__LAUNCHCONSOLEPAY_B__0_OFFSET))(this, a1);
		}
	};
}
