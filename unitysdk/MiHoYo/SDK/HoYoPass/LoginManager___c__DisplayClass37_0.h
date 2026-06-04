#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18323EF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__ONHOYOPASSRISKCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0x18334A90)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__ONHOYOPASSRISKCHALLENGE_B__2_OFFSET UNITYSDK_OFFSET(0x18334AC0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass37_0_TypeDefinitionIndex = 8246;

	class LoginManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::String* args; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassRiskChallenge_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__ONHOYOPASSRISKCHALLENGE_B__0_OFFSET))(this);
		}

		::System::Void _OnHoYoPassRiskChallenge_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__ONHOYOPASSRISKCHALLENGE_B__2_OFFSET))(this);
		}
	};
}
