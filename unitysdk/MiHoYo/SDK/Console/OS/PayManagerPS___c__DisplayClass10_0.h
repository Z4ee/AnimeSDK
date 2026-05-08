#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class PayManagerPS; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19993CF0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS10_0__LAUNCHCONSOLEPAY_B__0_OFFSET UNITYSDK_OFFSET(0x19993D00)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerPS___c__DisplayClass10_0_TypeDefinitionIndex = 19678;

	class PayManagerPS___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::PayManagerPS* __4__this; // 0x10
		::MiHoYo::SDK::Console::ConsoleProduct product; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _LaunchConsolePay_b__0(::System::Boolean canPay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS10_0__LAUNCHCONSOLEPAY_B__0_OFFSET))(this, canPay);
		}
	};
}
