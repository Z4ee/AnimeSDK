#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::PS { class LoginManager___c__DisplayClass33_0; }

#define MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC94FF0)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_1__ONPS4LOGINCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BC95000)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass33_1_TypeDefinitionIndex = 20656;

	class LoginManager___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userModel; // 0x10
		::MiHoYo::SDK::PS::LoginManager___c__DisplayClass33_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnPS4LoginCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_1__ONPS4LOGINCALLBACK_B__0_OFFSET))(this);
		}
	};
}
