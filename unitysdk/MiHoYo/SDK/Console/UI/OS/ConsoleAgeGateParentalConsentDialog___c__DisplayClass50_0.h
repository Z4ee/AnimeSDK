#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentDialog; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FB580)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG___C__DISPLAYCLASS50_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A3FB590)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentDialog___c__DisplayClass50_0_TypeDefinitionIndex = 19618;

	class ConsoleAgeGateParentalConsentDialog___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AgeGateFlowType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG___C__DISPLAYCLASS50_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
