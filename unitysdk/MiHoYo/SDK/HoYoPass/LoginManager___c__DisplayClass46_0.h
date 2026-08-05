#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9E8C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS46_0__ONHOYOPASSVERIFICATION_B__0_OFFSET UNITYSDK_OFFSET(0x1CE9E8D0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass46_0_TypeDefinitionIndex = 20431;

	class LoginManager___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::String* args; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassVerification_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS46_0__ONHOYOPASSVERIFICATION_B__0_OFFSET))(this);
		}
	};
}
