#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass43_0; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18336960)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_1__ONHOYOPASSCHANNELACCOUNTBINDING_B__3_OFFSET UNITYSDK_OFFSET(0x18336970)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass43_1_TypeDefinitionIndex = 8257;

	class LoginManager___c__DisplayClass43_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass43_0* CS___8__locals1; // 0x10
		::System::Boolean autoRegister; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassChannelAccountBinding_b__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_1__ONHOYOPASSCHANNELACCOUNTBINDING_B__3_OFFSET))(this, a1);
		}
	};
}
