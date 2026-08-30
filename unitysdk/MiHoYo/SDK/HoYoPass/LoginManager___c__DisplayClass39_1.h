#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass39_0; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B96E360)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_1__GETCROSSTOKENURLWITHLOGINSTATUS_B__1_OFFSET UNITYSDK_OFFSET(0x1B96E370)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass39_1_TypeDefinitionIndex = 8270;

	class LoginManager___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::System::String* crossTokenUrl; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass39_0* CS___8__locals1; // 0x18
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}

		::System::Void _GetCrossTokenUrlWithLoginStatus_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_1__GETCROSSTOKENURLWITHLOGINSTATUS_B__1_OFFSET))(this);
		}
	};
}
