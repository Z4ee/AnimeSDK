#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleUGCAgreementDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1823BA50)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1823BA90)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG___C__SHOW_B__22_0_OFFSET UNITYSDK_OFFSET(0x1823BAA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUGCAgreementDialog___c_TypeDefinitionIndex = 8622;

	class ConsoleUGCAgreementDialog___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog___c**)Il2CppClass::FromTypeDefinitionIndex(ConsoleUGCAgreementDialog___c_TypeDefinitionIndex)->GetStaticField(0xFA90);
		}
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog*>** StaticGet___9__22_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleUGCAgreementDialog___c_TypeDefinitionIndex)->GetStaticField(0xFA98);
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
