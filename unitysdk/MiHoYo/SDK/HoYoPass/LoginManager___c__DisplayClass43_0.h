#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF77A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__PERFORMEMAILBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x15F05B40)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__PERFORMEMAILBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x15F05B70)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass43_0_TypeDefinitionIndex = 7304;

	class LoginManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::String* bindEmailTicket; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformEmailBinding_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__PERFORMEMAILBINDING_B__0_OFFSET))(this);
		}

		::System::Void _PerformEmailBinding_b__1(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS43_0__PERFORMEMAILBINDING_B__1_OFFSET))(this, args);
		}
	};
}
