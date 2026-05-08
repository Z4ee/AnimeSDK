#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::PC::OS { class LoginManager; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC0320)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS8_0__REFRESHACCOUNTINFO_B__0_OFFSET UNITYSDK_OFFSET(0x18DC0330)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass8_0_TypeDefinitionIndex = 19404;

	class LoginManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::System::Action* callback; // 0x18
		::MiHoYo::SDK::PC::OS::LoginManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAccountInfo_b__0(::System::Int32 retcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS8_0__REFRESHACCOUNTINFO_B__0_OFFSET))(this, retcode);
		}
	};
}
