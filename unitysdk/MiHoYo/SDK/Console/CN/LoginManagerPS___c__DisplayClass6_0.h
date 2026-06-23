#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::CN { class LoginManagerPS; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50E250)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS6_0__ONCONSOLELOGINCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1B50E260)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS6_0__ONCONSOLELOGINCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x1B50E320)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManagerPS___c__DisplayClass6_0_TypeDefinitionIndex = 20862;

	class LoginManagerPS___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x10
		::MiHoYo::SDK::Console::CN::LoginManagerPS* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConsoleLoginCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS6_0__ONCONSOLELOGINCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _OnConsoleLoginCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS6_0__ONCONSOLELOGINCALLBACK_B__1_OFFSET))(this);
		}
	};
}
