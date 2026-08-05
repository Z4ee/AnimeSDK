#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS225_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E2B30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS225_0__ONDESTROY_B__0_OFFSET UNITYSDK_OFFSET(0x1E5E2B40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c__DisplayClass225_0_TypeDefinitionIndex = 37660;

	class MiHoYoSDKWebViewManager___c__DisplayClass225_0 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* nextBrowser; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS225_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnDestroy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__DISPLAYCLASS225_0__ONDESTROY_B__0_OFFSET))(this);
		}
	};
}
