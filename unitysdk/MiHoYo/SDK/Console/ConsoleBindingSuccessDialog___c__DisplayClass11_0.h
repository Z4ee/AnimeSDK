#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleBindingSuccessDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F7BC0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG___C__DISPLAYCLASS11_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A3F7BD0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleBindingSuccessDialog___c__DisplayClass11_0_TypeDefinitionIndex = 19585;

	class ConsoleBindingSuccessDialog___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* psnAccount; // 0x10
		::System::String* hoyoAccount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::ConsoleBindingSuccessDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleBindingSuccessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG___C__DISPLAYCLASS11_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
