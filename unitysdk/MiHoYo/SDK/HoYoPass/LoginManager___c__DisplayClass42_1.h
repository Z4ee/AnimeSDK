#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass42_0; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB39C00)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS42_1__ONHOYOPASSRISKCHALLENGE_B__1_OFFSET UNITYSDK_OFFSET(0x1BB39C10)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass42_1_TypeDefinitionIndex = 20077;

	class LoginManager___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::System::String* sessionId; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass42_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS42_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassRiskChallenge_b__1(::System::String* aigisData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS42_1__ONHOYOPASSRISKCHALLENGE_B__1_OFFSET))(this, aigisData);
		}
	};
}
