#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentProcessDialog; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC77540)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG___C__DISPLAYCLASS26_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BC77550)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentProcessDialog___c__DisplayClass26_0_TypeDefinitionIndex = 20782;

	class ConsoleAgeGateParentalConsentProcessDialog___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AgeGateFlowType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentProcessDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG___C__DISPLAYCLASS26_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
