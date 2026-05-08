#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleBindMobileDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50D2B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG___C__DISPLAYCLASS21_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A50D2C0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleBindMobileDialog___c__DisplayClass21_0_TypeDefinitionIndex = 19549;

	class ConsoleBindMobileDialog___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::ConsoleBindMobileDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleBindMobileDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDMOBILEDIALOG___C__DISPLAYCLASS21_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
