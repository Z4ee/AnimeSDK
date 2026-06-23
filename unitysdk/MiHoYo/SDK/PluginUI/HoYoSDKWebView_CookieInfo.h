#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_COOKIEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7D2110)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKWebView_CookieInfo_TypeDefinitionIndex = 37144;

	class HoYoSDKWebView_CookieInfo : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::String* value; // 0x18
		::System::String* domain; // 0x20
		::System::String* expires; // 0x28
		::System::Boolean http_only; // 0x30
		::System::Boolean secure; // 0x31

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* jsonCookie)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_COOKIEINFO__CTOR_OFFSET))(this, jsonCookie);
		}
	};
}
