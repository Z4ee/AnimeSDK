#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1754ADA0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS78_0__GOOGLEPCOAUTH_B__0_OFFSET UNITYSDK_OFFSET(0x17553430)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS78_0__GOOGLEPCOAUTH_B__1_OFFSET UNITYSDK_OFFSET(0x175534E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS78_0__GOOGLEPCOAUTH_B__2_OFFSET UNITYSDK_OFFSET(0x17553600)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass78_0_TypeDefinitionIndex = 7369;

	class LoginManager___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Action* successCallback; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Void _GooglePCOAuth_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS78_0__GOOGLEPCOAUTH_B__0_OFFSET))(this);
		}

		::System::Void _GooglePCOAuth_b__1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS78_0__GOOGLEPCOAUTH_B__1_OFFSET))(this, message);
		}

		::System::Void _GooglePCOAuth_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS78_0__GOOGLEPCOAUTH_B__2_OFFSET))(this);
		}
	};
}
