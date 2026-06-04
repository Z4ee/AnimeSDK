#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS154_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C90D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS154_0__PLAYCLOSEANIMATIONFORISR_B__0_OFFSET UNITYSDK_OFFSET(0xA1DD760)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass154_0_TypeDefinitionIndex = 43986;

	class MiHoYoSDKWebViewManager___c__DisplayClass154_0 : public ::System::Object
	{
	public:
		::System::Action* finishedAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS154_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCloseAnimationForISR_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS154_0__PLAYCLOSEANIMATIONFORISR_B__0_OFFSET))(this);
		}
	};
}
