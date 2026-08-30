#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Console::OS { class LoginManagerCX___c__DisplayClass5_0; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C2F80)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_1__ONCONSOLELOGINCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1B7C3540)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerCX___c__DisplayClass5_1_TypeDefinitionIndex = 9028;

	class LoginManagerCX___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::LoginManagerCX___c__DisplayClass5_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::AccountModel* userModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnConsoleLoginCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_1__ONCONSOLELOGINCALLBACK_B__0_OFFSET))(this);
		}
	};
}
