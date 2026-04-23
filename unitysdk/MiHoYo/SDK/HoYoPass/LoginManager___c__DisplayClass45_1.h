#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass45_0; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17542860)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSLOGINRESULT_B__1_OFFSET UNITYSDK_OFFSET(0x1754F950)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSLOGINRESULT_B__2_OFFSET UNITYSDK_OFFSET(0x1754FAB0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass45_1_TypeDefinitionIndex = 7357;

	class LoginManager___c__DisplayClass45_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* accountModel; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass45_0* CS___8__locals1; // 0x18
		::System::Action* __9__2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassLoginResult_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSLOGINRESULT_B__1_OFFSET))(this);
		}

		::System::Void _OnHoYoPassLoginResult_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_1__ONHOYOPASSLOGINRESULT_B__2_OFFSET))(this);
		}
	};
}
