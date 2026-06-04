#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18261E20)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18261E60)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__OPENUSERCENTER_G__CALLBACK_20_2_OFFSET UNITYSDK_OFFSET(0x18261E70)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 8739;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::LoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::OS::LoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x10BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUserCenter_g__callback_20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__OPENUSERCENTER_G__CALLBACK_20_2_OFFSET))(this);
		}
	};
}
