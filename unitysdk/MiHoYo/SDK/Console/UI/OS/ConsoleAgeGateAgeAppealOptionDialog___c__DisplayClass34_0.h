#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92D630)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS34_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B92DA30)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateAgeAppealOptionDialog___c__DisplayClass34_0_TypeDefinitionIndex = 8967;

	class ConsoleAgeGateAgeAppealOptionDialog___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Int32 days; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS34_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
