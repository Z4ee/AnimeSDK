#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS155_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C69A0A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS155_0__PLAYCLOSEANIMATIONFORISR_B__0_OFFSET UNITYSDK_OFFSET(0x1C69A0B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass155_0_TypeDefinitionIndex = 47084;

	class MiHoYoSDKWebViewManager___c__DisplayClass155_0 : public ::System::Object
	{
	public:
		::System::Action* finishedAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS155_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCloseAnimationForISR_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS155_0__PLAYCLOSEANIMATIONFORISR_B__0_OFFSET))(this);
		}
	};
}
