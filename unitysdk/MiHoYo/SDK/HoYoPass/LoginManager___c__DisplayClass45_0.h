#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager_HoYoPassResult; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18329E20)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__ONHOYOPASSLOGINRESULT_B__0_OFFSET UNITYSDK_OFFSET(0x18336B20)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__ONHOYOPASSLOGINRESULT_B__3_OFFSET UNITYSDK_OFFSET(0x18336B50)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass45_0_TypeDefinitionIndex = 8259;

	class LoginManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassResult* result; // 0x18
		::System::String* args; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassLoginResult_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__ONHOYOPASSLOGINRESULT_B__0_OFFSET))(this);
		}

		::System::Void _OnHoYoPassLoginResult_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__ONHOYOPASSLOGINRESULT_B__3_OFFSET))(this);
		}
	};
}
