#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class LoginManager; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE4CC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS85_0__REQUESTLOGINBYTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x18AFA050)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass85_0_TypeDefinitionIndex = 9400;

	class LoginManager___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestLoginByToken_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS85_0__REQUESTLOGINBYTOKEN_B__0_OFFSET))(this, a1);
		}
	};
}
