#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class PS4BindResultDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9190A0)
#define MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG___C__DISPLAYCLASS11_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B919CC0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PS4BindResultDialog___c__DisplayClass11_0_TypeDefinitionIndex = 8961;

	class PS4BindResultDialog___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* userName; // 0x10
		::System::String* email; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::PS4BindResultDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::PS4BindResultDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDRESULTDIALOG___C__DISPLAYCLASS11_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
