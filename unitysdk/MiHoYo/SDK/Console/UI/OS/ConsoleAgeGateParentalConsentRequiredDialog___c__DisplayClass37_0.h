#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentRequiredDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA3C5B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG___C__DISPLAYCLASS37_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1AA3C800)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentRequiredDialog___c__DisplayClass37_0_TypeDefinitionIndex = 8712;

	class ConsoleAgeGateParentalConsentRequiredDialog___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::String* email; // 0x10
		::MiHoYo::SDK::AgeGateFlowType type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentRequiredDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentRequiredDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG___C__DISPLAYCLASS37_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
