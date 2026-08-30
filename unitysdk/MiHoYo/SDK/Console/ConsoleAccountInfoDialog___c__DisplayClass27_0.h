#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleAccountInfoDialog; }
namespace MiHoYo::SDK::Console { class UserGameServerInfo; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B788FC0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B78B690)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__1_OFFSET UNITYSDK_OFFSET(0x1B78B830)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__2_OFFSET UNITYSDK_OFFSET(0x1B78B880)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountInfoDialog___c__DisplayClass27_0_TypeDefinitionIndex = 8938;

	class ConsoleAccountInfoDialog___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Console::UserGameServerInfo*>* userGameInfoList; // 0x10
		::System::String* consoleAccountName; // 0x18
		::System::String* currentZone; // 0x20
		::System::String* hoyoAccountName; // 0x28
		::System::Predicate_1<::MiHoYo::SDK::Console::UserGameServerInfo*>* __9__1; // 0x30
		::System::Predicate_1<::MiHoYo::SDK::Console::UserGameServerInfo*>* __9__2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Console::ConsoleAccountInfoDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleAccountInfoDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _Show_b__1(::MiHoYo::SDK::Console::UserGameServerInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Console::UserGameServerInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _Show_b__2(::MiHoYo::SDK::Console::UserGameServerInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Console::UserGameServerInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__2_OFFSET))(this, a1);
		}
	};
}
