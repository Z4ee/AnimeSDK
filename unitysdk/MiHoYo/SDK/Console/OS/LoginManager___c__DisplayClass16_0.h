#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::OS { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF6CE0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS16_0__HANDLEAGEGATECOMPLETEDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1CDF6CF0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass16_0_TypeDefinitionIndex = 21169;

	class LoginManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::LoginManager* __4__this; // 0x10
		::System::String* ticket; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateCompletedCallback_b__0(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS16_0__HANDLEAGEGATECOMPLETEDCALLBACK_B__0_OFFSET))(this, token);
		}
	};
}
