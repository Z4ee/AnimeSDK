#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181E47C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x181F3160)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x181F3190)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__2_OFFSET UNITYSDK_OFFSET(0x181F31B0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass43_0_TypeDefinitionIndex = 8268;

	class LoginManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::String* args; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassChannelAccountBinding_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__0_OFFSET))(this);
		}

		::System::Void _OnHoYoPassChannelAccountBinding_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__1_OFFSET))(this);
		}

		::System::Void _OnHoYoPassChannelAccountBinding_b__2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__2_OFFSET))(this, a1);
		}
	};
}
