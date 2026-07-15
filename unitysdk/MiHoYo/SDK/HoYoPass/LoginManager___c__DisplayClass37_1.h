#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass37_0; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_1__CTOR_OFFSET UNITYSDK_OFFSET(0x181E0700)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_1__ONHOYOPASSRISKCHALLENGE_B__1_OFFSET UNITYSDK_OFFSET(0x181F13F0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass37_1_TypeDefinitionIndex = 8259;

	class LoginManager___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::System::String* sessionId; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass37_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassRiskChallenge_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_1__ONHOYOPASSRISKCHALLENGE_B__1_OFFSET))(this, a1);
		}
	};
}
