#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB39C50)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSTHIRDPARTYACCOUNTBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x1BB39C60)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSTHIRDPARTYACCOUNTBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x1BB39C90)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass43_0_TypeDefinitionIndex = 20078;

	class LoginManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::String* args; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassThirdpartyAccountBinding_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSTHIRDPARTYACCOUNTBINDING_B__0_OFFSET))(this);
		}

		::System::Void _OnHoYoPassThirdpartyAccountBinding_b__1(::System::Int32 retcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSTHIRDPARTYACCOUNTBINDING_B__1_OFFSET))(this, retcode);
		}
	};
}
