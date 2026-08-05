#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateGeneralErrorDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA044C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1DA044D0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateGeneralErrorDialog___c__DisplayClass27_0_TypeDefinitionIndex = 21116;

	class ConsoleAgeGateGeneralErrorDialog___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::String* cancelText; // 0x10
		::System::String* confirmText; // 0x18
		::System::String* subDesc; // 0x20
		::System::String* title; // 0x28
		::System::String* desc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateGeneralErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
