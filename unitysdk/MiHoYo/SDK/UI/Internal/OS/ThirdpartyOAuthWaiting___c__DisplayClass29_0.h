#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Internal/OS/OAuthType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class ThirdpartyOAuthWaiting; }

#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6E1C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING___C__DISPLAYCLASS29_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1CD6E2D0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int ThirdpartyOAuthWaiting___c__DisplayClass29_0_TypeDefinitionIndex = 8397;

	class ThirdpartyOAuthWaiting___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::Internal::OS::OAuthType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::UI::Internal::OS::ThirdpartyOAuthWaiting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::ThirdpartyOAuthWaiting*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING___C__DISPLAYCLASS29_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
