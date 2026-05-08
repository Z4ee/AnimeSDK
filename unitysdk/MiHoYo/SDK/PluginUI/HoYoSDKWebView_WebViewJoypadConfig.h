#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_WEBVIEWJOYPADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E9C50)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKWebView_WebViewJoypadConfig_TypeDefinitionIndex = 35545;

	class HoYoSDKWebView_WebViewJoypadConfig : public ::System::Object
	{
	public:
		::System::Boolean set_joypad_enable; // 0x10
		::System::String* set_joypad_type; // 0x18
		::System::Boolean set_joypad_exchange; // 0x20
		::System::String* webview_joypad_tips_text; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_WEBVIEWJOYPADCONFIG__CTOR_OFFSET))(this);
		}
	};
}
