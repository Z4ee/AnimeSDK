#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ThirdpartyLoginMethod.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1832F1E0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS57_0__STARTTHIRDPARTYOAUTH_B__0_OFFSET UNITYSDK_OFFSET(0x183374A0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS57_0__STARTTHIRDPARTYOAUTH_B__1_OFFSET UNITYSDK_OFFSET(0x18337590)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS57_0__STARTTHIRDPARTYOAUTH_B__2_OFFSET UNITYSDK_OFFSET(0x18337700)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass57_0_TypeDefinitionIndex = 8265;

	class LoginManager___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ThirdpartyLoginMethod method; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartThirdpartyOAuth_b__0(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS57_0__STARTTHIRDPARTYOAUTH_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _StartThirdpartyOAuth_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS57_0__STARTTHIRDPARTYOAUTH_B__1_OFFSET))(this);
		}

		::System::Void _StartThirdpartyOAuth_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS57_0__STARTTHIRDPARTYOAUTH_B__2_OFFSET))(this);
		}
	};
}
