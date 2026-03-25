#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass56_0; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F065D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS56_1__STARTTHIRDPARTYOAUTH_B__3_OFFSET UNITYSDK_OFFSET(0x15F06800)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass56_1_TypeDefinitionIndex = 7312;

	class LoginManager___c__DisplayClass56_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass56_0* CS___8__locals1; // 0x10
		::System::String* accessToken; // 0x18
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode retcode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS56_1__CTOR_OFFSET))(this);
		}

		::System::Void _StartThirdpartyOAuth_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS56_1__STARTTHIRDPARTYOAUTH_B__3_OFFSET))(this);
		}
	};
}
