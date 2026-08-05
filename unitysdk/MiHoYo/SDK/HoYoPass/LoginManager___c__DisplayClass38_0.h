#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D768620)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__OPENURLWITHLOGINSTATUS_B__1_OFFSET UNITYSDK_OFFSET(0x1D768890)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__OPENURLWITHLOGINSTATUS_G__OPENURLBYACTIONTYPE_0_OFFSET UNITYSDK_OFFSET(0x1D768630)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass38_0_TypeDefinitionIndex = 20419;

	class LoginManager___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::String* originalUrl; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18
		::System::Int32 actionType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUrlWithLoginStatus_g__OpenUrlByActionType_0(::System::String* openUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__OPENURLWITHLOGINSTATUS_G__OPENURLBYACTIONTYPE_0_OFFSET))(this, openUrl);
		}

		::System::Void _OpenUrlWithLoginStatus_b__1(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret, ::System::String* crossTokenUrl)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS38_0__OPENURLWITHLOGINSTATUS_B__1_OFFSET))(this, ret, crossTokenUrl);
		}
	};
}
