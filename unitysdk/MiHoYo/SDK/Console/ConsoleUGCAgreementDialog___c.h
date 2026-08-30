#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleUGCAgreementDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B795150)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B795190)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__SHOW_B__22_0_OFFSET UNITYSDK_OFFSET(0x1B7951A0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUGCAgreementDialog___c_TypeDefinitionIndex = 8901;

	class ConsoleUGCAgreementDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog*>** StaticGet___9__22_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleUGCAgreementDialog___c_TypeDefinitionIndex)->GetStaticField(0xB0B0);
		}
		static ::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog___c**)Il2CppClass::FromTypeDefinitionIndex(ConsoleUGCAgreementDialog___c_TypeDefinitionIndex)->GetStaticField(0xB0B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__22_0(::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__SHOW_B__22_0_OFFSET))(this, a1);
		}
	};
}
