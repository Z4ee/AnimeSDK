#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK::PluginUI { class HoYoSDKWebView_CookieInfo; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E35C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW___C__DISPLAYCLASS37_0__SETCOOKIES_B__0_OFFSET UNITYSDK_OFFSET(0x1E5E35D0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKWebView___c__DisplayClass37_0_TypeDefinitionIndex = 37809;

	class HoYoSDKWebView___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKWebView* webview; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetCookies_b__0(::MiHoYo::SDK::PluginUI::HoYoSDKWebView_CookieInfo* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::HoYoSDKWebView_CookieInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW___C__DISPLAYCLASS37_0__SETCOOKIES_B__0_OFFSET))(this, cookie);
		}
	};
}
