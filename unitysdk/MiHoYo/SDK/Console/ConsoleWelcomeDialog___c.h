#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleWelcomeDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173455C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17345600)
#define MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__SHOW_B__24_0_OFFSET UNITYSDK_OFFSET(0x17345610)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleWelcomeDialog___c_TypeDefinitionIndex = 8955;

	class ConsoleWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleWelcomeDialog*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleWelcomeDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0xB650);
		}
		static ::MiHoYo::SDK::Console::ConsoleWelcomeDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::ConsoleWelcomeDialog___c**)Il2CppClass::FromTypeDefinitionIndex(ConsoleWelcomeDialog___c_TypeDefinitionIndex)->GetStaticField(0xB658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__24_0(::MiHoYo::SDK::Console::ConsoleWelcomeDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEWELCOMEDIALOG___C__SHOW_B__24_0_OFFSET))(this, a1);
		}
	};
}
