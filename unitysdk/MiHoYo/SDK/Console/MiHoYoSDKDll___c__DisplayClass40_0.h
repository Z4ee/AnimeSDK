#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1734B640)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS40_0__LOGIN_OPEN_URL_WITH_LOGIN_STATUS_B__0_OFFSET UNITYSDK_OFFSET(0x173516D0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass40_0_TypeDefinitionIndex = 8891;

	class MiHoYoSDKDll___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Int32 actionType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _login_open_url_with_login_status_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__DISPLAYCLASS40_0__LOGIN_OPEN_URL_WITH_LOGIN_STATUS_B__0_OFFSET))(this);
		}
	};
}
