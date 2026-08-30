#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::PC::OS { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA36A20)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS10_0__ONLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1BA36AF0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS10_0__ONLOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1BA36BB0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass10_0_TypeDefinitionIndex = 8652;

	class LoginManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10
		::MiHoYo::SDK::AccountModel* accountModel; // 0x18
		::MiHoYo::SDK::PC::OS::LoginManager* __4__this; // 0x20
		::System::Int32 retcode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLogin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS10_0__ONLOGIN_B__0_OFFSET))(this);
		}

		::System::Void _OnLogin_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS10_0__ONLOGIN_B__1_OFFSET))(this);
		}
	};
}
