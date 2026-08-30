#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B96AF70)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS84_0__GOOGLEPCOAUTH_B__0_OFFSET UNITYSDK_OFFSET(0x1B974250)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS84_0__GOOGLEPCOAUTH_B__1_OFFSET UNITYSDK_OFFSET(0x1B974310)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS84_0__GOOGLEPCOAUTH_B__2_OFFSET UNITYSDK_OFFSET(0x1B974430)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass84_0_TypeDefinitionIndex = 8296;

	class LoginManager___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::System::Action* successCallback; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
		}

		::System::Void _GooglePCOAuth_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS84_0__GOOGLEPCOAUTH_B__0_OFFSET))(this);
		}

		::System::Void _GooglePCOAuth_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS84_0__GOOGLEPCOAUTH_B__1_OFFSET))(this, a1);
		}

		::System::Void _GooglePCOAuth_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS84_0__GOOGLEPCOAUTH_B__2_OFFSET))(this);
		}
	};
}
