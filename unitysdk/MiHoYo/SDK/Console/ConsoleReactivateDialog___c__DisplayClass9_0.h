#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleReactivateDialog; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18236D70)
#define MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG___C__DISPLAYCLASS9_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x18237B70)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleReactivateDialog___c__DisplayClass9_0_TypeDefinitionIndex = 8666;

	class ConsoleReactivateDialog___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Boolean isAccountPlatform; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::ConsoleReactivateDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleReactivateDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREACTIVATEDIALOG___C__DISPLAYCLASS9_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
