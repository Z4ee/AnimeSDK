#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager_HoYoPassResult; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9ED30)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__0_OFFSET UNITYSDK_OFFSET(0x1CE9ED40)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__1_OFFSET UNITYSDK_OFFSET(0x1CE9ED70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__2_OFFSET UNITYSDK_OFFSET(0x1CE9F1B0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass47_0_TypeDefinitionIndex = 20433;

	class LoginManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::String* args; // 0x18
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

		::System::Void _OnHoYoPassAgeGate_b__2(::System::Int32 retcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS47_0__ONHOYOPASSAGEGATE_B__2_OFFSET))(this, retcode);
		}
	};
}
