#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF52B0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_0__ONHOYOPASSREACTIVATE_B__0_OFFSET UNITYSDK_OFFSET(0x15F03EC0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass39_0_TypeDefinitionIndex = 7297;

	class LoginManager___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::String* reactivateTicket; // 0x18
		::System::String* args; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassReactivate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_0__ONHOYOPASSREACTIVATE_B__0_OFFSET))(this);
		}
	};
}
