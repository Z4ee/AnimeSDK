#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__CHANNELLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1C7C1DA0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C1D90)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass67_0_TypeDefinitionIndex = 20443;

	class LoginManager___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::Boolean autoRegister; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChannelLogin_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS67_0__CHANNELLOGIN_B__0_OFFSET))(this, accessToken);
		}
	};
}
