#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9799E0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS16_0__ONGETTHIRDTOKENINVOKED_B__0_OFFSET UNITYSDK_OFFSET(0x1B97B370)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager___c__DisplayClass16_0_TypeDefinitionIndex = 8236;

	class UserCenterManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::String* jsCallback; // 0x10
		::MiHoYo::SDK::Web* webPage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetThirdTokenInvoked_b__0(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__DISPLAYCLASS16_0__ONGETTHIRDTOKENINVOKED_B__0_OFFSET))(this, a1, a2);
		}
	};
}
