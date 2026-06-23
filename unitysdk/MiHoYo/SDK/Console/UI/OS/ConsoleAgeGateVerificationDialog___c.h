#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateVerificationDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA7C7B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7C7F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG___C__SHOW_B__43_0_OFFSET UNITYSDK_OFFSET(0x1BA7C800)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateVerificationDialog___c_TypeDefinitionIndex = 20794;

	class ConsoleAgeGateVerificationDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog*>** StaticGet___9__43_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateVerificationDialog___c_TypeDefinitionIndex)->GetStaticField(0xA120);
		}
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog___c**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateVerificationDialog___c_TypeDefinitionIndex)->GetStaticField(0xA128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__43_0(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG___C__SHOW_B__43_0_OFFSET))(this, dialog);
		}
	};
}
