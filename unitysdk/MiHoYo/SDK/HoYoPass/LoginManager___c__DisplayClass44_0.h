#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183288A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_0__PERFORMEMAILBINDING_B__0_OFFSET UNITYSDK_OFFSET(0x18336AD0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_0__PERFORMEMAILBINDING_B__1_OFFSET UNITYSDK_OFFSET(0x18336B00)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass44_0_TypeDefinitionIndex = 8258;

	class LoginManager___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::String* bindEmailTicket; // 0x18
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformEmailBinding_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_0__PERFORMEMAILBINDING_B__0_OFFSET))(this);
		}

		::System::Void _PerformEmailBinding_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS44_0__PERFORMEMAILBINDING_B__1_OFFSET))(this, a1);
		}
	};
}
