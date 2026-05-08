#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleAccountBindingDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199919E0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19991A20)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C__SHOW_B__66_0_OFFSET UNITYSDK_OFFSET(0x19991A30)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountBindingDialog___c_TypeDefinitionIndex = 19579;

	class ConsoleAccountBindingDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*>** StaticGet___9__66_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAccountBindingDialog___c_TypeDefinitionIndex)->GetStaticField(0xA1B0);
		}
		static ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::ConsoleAccountBindingDialog___c**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAccountBindingDialog___c_TypeDefinitionIndex)->GetStaticField(0xA1B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__66_0(::MiHoYo::SDK::Console::ConsoleAccountBindingDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG___C__SHOW_B__66_0_OFFSET))(this, dialog);
		}
	};
}
