#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Win/OAuthType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ThirdpartyOAuthWaiting; }

#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8FF9E0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B8FFAF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ThirdpartyOAuthWaiting___c__DisplayClass25_0_TypeDefinitionIndex = 9251;

	class ThirdpartyOAuthWaiting___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::OAuthType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::ThirdpartyOAuthWaiting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ThirdpartyOAuthWaiting*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
