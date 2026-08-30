#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass44_0; }
namespace MiHoYo::SDK::UI::OS { class IAlertDialog; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE8D800)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_1__ONHOYOPASSREACTIVATE_B__1_OFFSET UNITYSDK_OFFSET(0x1AE9DC90)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_1__ONHOYOPASSREACTIVATE_B__2_OFFSET UNITYSDK_OFFSET(0x1AE9DE10)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass44_1_TypeDefinitionIndex = 8275;

	class LoginManager___c__DisplayClass44_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass44_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::UI::OS::IAlertDialog* alertDialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassReactivate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_1__ONHOYOPASSREACTIVATE_B__1_OFFSET))(this);
		}

		::System::Void _OnHoYoPassReactivate_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_1__ONHOYOPASSREACTIVATE_B__2_OFFSET))(this);
		}
	};
}
