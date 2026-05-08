#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C77B20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS33_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x19C77B30)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateAgeAppealOptionDialog___c__DisplayClass33_0_TypeDefinitionIndex = 19611;

	class ConsoleAgeGateAgeAppealOptionDialog___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Int32 days; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS33_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
