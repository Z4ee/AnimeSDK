#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class LoginManagerCX; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C65B0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerCX___c__DisplayClass5_0_TypeDefinitionIndex = 20832;

	class LoginManagerCX___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::LoginManagerCX* __4__this; // 0x10
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}
	};
}
