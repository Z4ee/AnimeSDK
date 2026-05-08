#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS155_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19438A80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS155_0__PLAYWEBLOADFINISHEDANIMATIONFORISR_B__0_OFFSET UNITYSDK_OFFSET(0x19438A90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass155_0_TypeDefinitionIndex = 35396;

	class MiHoYoSDKWebViewManager___c__DisplayClass155_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKWebViewManager* __4__this; // 0x10
		::System::Boolean showWebWhenFinished; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS155_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayWebLoadFinishedAnimationForISR_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS155_0__PLAYWEBLOADFINISHEDANIMATIONFORISR_B__0_OFFSET))(this);
		}
	};
}
