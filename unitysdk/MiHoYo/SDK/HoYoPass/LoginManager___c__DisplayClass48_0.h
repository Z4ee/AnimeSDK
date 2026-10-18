#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE37100)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS48_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x1BE46870)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS48_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x1BE468A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS48_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__2_OFFSET UNITYSDK_OFFSET(0x1BE468C0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass48_0_TypeDefinitionIndex = 8324;

	class LoginManager___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::String* args; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassChannelAccountBinding_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS48_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__0_OFFSET))(this);
		}

		::System::Void _OnHoYoPassChannelAccountBinding_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS48_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__1_OFFSET))(this);
		}

		::System::Void _OnHoYoPassChannelAccountBinding_b__2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS48_0__ONHOYOPASSCHANNELACCOUNTBINDING_B__2_OFFSET))(this, a1);
		}
	};
}
