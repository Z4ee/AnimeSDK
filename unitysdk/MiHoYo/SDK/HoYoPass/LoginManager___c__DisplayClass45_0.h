#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFB480)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__ONHOYOPASSLOGSTRATEGYUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x15F06160)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass45_0_TypeDefinitionIndex = 7307;

	class LoginManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::String* args; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassLogStrategyUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS45_0__ONHOYOPASSLOGSTRATEGYUPDATE_B__0_OFFSET))(this);
		}
	};
}
