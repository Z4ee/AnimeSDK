#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateErrorDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194AB710)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG___C__DISPLAYCLASS21_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x194AB720)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateErrorDialog___c__DisplayClass21_0_TypeDefinitionIndex = 19615;

	class ConsoleAgeGateErrorDialog___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* title; // 0x10
		::System::String* subDesc; // 0x18
		::System::String* desc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG___C__DISPLAYCLASS21_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
