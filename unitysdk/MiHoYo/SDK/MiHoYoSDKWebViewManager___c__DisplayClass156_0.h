#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB272CF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__PLAYWEBLOADFINISHEDANIMATIONFORISR_B__0_OFFSET UNITYSDK_OFFSET(0xB272D00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass156_0_TypeDefinitionIndex = 47085;

	class MiHoYoSDKWebViewManager___c__DisplayClass156_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* __4__this; // 0x10
		::System::Boolean showWebWhenFinished; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayWebLoadFinishedAnimationForISR_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS156_0__PLAYWEBLOADFINISHEDANIMATIONFORISR_B__0_OFFSET))(this);
		}
	};
}
