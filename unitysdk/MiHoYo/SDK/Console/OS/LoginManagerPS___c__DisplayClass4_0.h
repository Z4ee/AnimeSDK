#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class LoginManagerPS; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C5E50)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS4_0__ONCONSOLELOGINCALLBACK_G__FAILEDCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1B7C7180)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerPS___c__DisplayClass4_0_TypeDefinitionIndex = 9023;

	class LoginManagerPS___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::LoginManagerPS* __4__this; // 0x10
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConsoleLoginCallback_g__failedCallback_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS4_0__ONCONSOLELOGINCALLBACK_G__FAILEDCALLBACK_1_OFFSET))(this, a1, a2);
		}
	};
}
