#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181E1190)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__ONHOYOPASSTHIRDPARTYACCOUNTBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x181F1430)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__ONHOYOPASSTHIRDPARTYACCOUNTBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x181F1460)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass38_0_TypeDefinitionIndex = 8260;

	class LoginManager___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::String* args; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassThirdpartyAccountBinding_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__ONHOYOPASSTHIRDPARTYACCOUNTBINDING_B__0_OFFSET))(this);
		}

		::System::Void _OnHoYoPassThirdpartyAccountBinding_b__1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__ONHOYOPASSTHIRDPARTYACCOUNTBINDING_B__1_OFFSET))(this, a1);
		}
	};
}
