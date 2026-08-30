#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass37_0; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B96E0D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_1__OPENURLWITHLOGINSTATUS_B__3_OFFSET UNITYSDK_OFFSET(0x1B96E0E0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass37_1_TypeDefinitionIndex = 8267;

	class LoginManager___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::System::String* crossTokenUrl; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass37_0* CS___8__locals1; // 0x18
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_1__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUrlWithLoginStatus_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_1__OPENURLWITHLOGINSTATUS_B__3_OFFSET))(this);
		}
	};
}
