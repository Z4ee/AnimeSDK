#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager_HoYoPassResult; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9605C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__0_OFFSET UNITYSDK_OFFSET(0x1B96F840)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__1_OFFSET UNITYSDK_OFFSET(0x1B96F870)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__2_OFFSET UNITYSDK_OFFSET(0x1B96FC80)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass47_0_TypeDefinitionIndex = 8280;

	class LoginManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::String* args; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18
		::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassResult* result; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassAgeGate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__0_OFFSET))(this);
		}

		::System::Void _OnHoYoPassAgeGate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__1_OFFSET))(this);
		}

		::System::Void _OnHoYoPassAgeGate_b__2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__2_OFFSET))(this, a1);
		}
	};
}
