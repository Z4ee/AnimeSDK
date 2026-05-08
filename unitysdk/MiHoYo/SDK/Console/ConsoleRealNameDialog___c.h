#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleRealNameDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A060D50)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A060D90)
#define MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C__SHOW_B__16_0_OFFSET UNITYSDK_OFFSET(0x1A060DA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleRealNameDialog___c_TypeDefinitionIndex = 19592;

	class ConsoleRealNameDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Console::ConsoleRealNameDialog*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::ConsoleRealNameDialog*>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleRealNameDialog___c_TypeDefinitionIndex)->GetStaticField(0x9E50);
		}
		static ::MiHoYo::SDK::Console::ConsoleRealNameDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::ConsoleRealNameDialog___c**)Il2CppClass::FromTypeDefinitionIndex(ConsoleRealNameDialog___c_TypeDefinitionIndex)->GetStaticField(0x9E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__16_0(::MiHoYo::SDK::Console::ConsoleRealNameDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleRealNameDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEREALNAMEDIALOG___C__SHOW_B__16_0_OFFSET))(this, dialog);
		}
	};
}
