#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKWebView_WebViewAdapterMsgID_TypeDefinitionIndex = 45001;

	enum class HoYoSDKWebView_WebViewAdapterMsgID : ::System::Int32
	{
		UNKNOWN = -1,
		WEBVIEW_SET_NEW_WINDOW_TYPE = 0,
		WEBVIEW_SHOW = 1,
		WEBVIEW_HIDE = 2,
		WEBVIEW_BACK = 3,
		WEBVIEW_CLOSE = 4,
		WEBVIEW_SHOW_BG = 5,
		WEBVIEW_RELOAD = 6,
		WEBVIEW_HIDE_NAVIGATION_BAR = 7,
		WEBVIEW_CLEAR_COOKIES = 8,
		WEBVIEW_SET_USER_AGENT = 9,
		WEBVIEW_SET_COOKIE = 10,
		WEBVIEW_CALL_JS_FUNCTION = 11,
		WEBVIEW_CALL_PUBLISH_JS_FUNCTION = 12,
		WEBVIEW_EVALUATE_JAVA_SCRIPT = 13,
		WEBVIEW_SET_NAV_JOYPAD_ICON = 14,
	};
}
