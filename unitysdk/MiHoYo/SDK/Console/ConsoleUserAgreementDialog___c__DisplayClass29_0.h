#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleUserAgreementDialog_DisplayMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleUserAgreementDialog; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3C460)
#define MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG___C__DISPLAYCLASS29_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x15E3ED80)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUserAgreementDialog___c__DisplayClass29_0_TypeDefinitionIndex = 7627;

	class ConsoleUserAgreementDialog___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode mode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::ConsoleUserAgreementDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleUserAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUSERAGREEMENTDIALOG___C__DISPLAYCLASS29_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
