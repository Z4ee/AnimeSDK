#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass39_0; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C390BC0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS39_1__GETCROSSTOKENURLWITHLOGINSTATUS_B__1_OFFSET UNITYSDK_OFFSET(0x1C390BD0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass39_1_TypeDefinitionIndex = 20075;

	class LoginManager___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass39_0* CS___8__locals1; // 0x10
		::System::String* crossTokenUrl; // 0x18
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
