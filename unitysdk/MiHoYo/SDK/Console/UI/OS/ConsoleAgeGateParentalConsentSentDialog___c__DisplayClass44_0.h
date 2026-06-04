#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentSentDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18302E80)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG___C__DISPLAYCLASS44_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x183030F0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentSentDialog___c__DisplayClass44_0_TypeDefinitionIndex = 8704;

	class ConsoleAgeGateParentalConsentSentDialog___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::String* email; // 0x10
		::System::String* date; // 0x18
		::MiHoYo::SDK::AgeGateFlowType type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentSentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentSentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG___C__DISPLAYCLASS44_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
