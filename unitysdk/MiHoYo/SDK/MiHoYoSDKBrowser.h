#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class CanvasGroup; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define MIHOYO_SDK_MIHOYOSDKBROWSER_AWAKE_OFFSET UNITYSDK_OFFSET(0x8507640)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x8507AD0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GET_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x8507B20)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GET_CANGOFORWARD_OFFSET UNITYSDK_OFFSET(0x8507B50)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GOBACK_OFFSET UNITYSDK_OFFSET(0x8508290)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_GOFORWARD_OFFSET UNITYSDK_OFFSET(0x8508320)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_INITCANVASGROUP_OFFSET UNITYSDK_OFFSET(0x8507990)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_LOADURL_OFFSET UNITYSDK_OFFSET(0x8508440)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8507A80)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONFETCHERROR_OFFSET UNITYSDK_OFFSET(0x8507EC0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONLOADFINISHED_OFFSET UNITYSDK_OFFSET(0x8508090)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONLOADSTARTS_OFFSET UNITYSDK_OFFSET(0x8508080)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_ONUNIWEBVIEWMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x8508200)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_RELOAD_OFFSET UNITYSDK_OFFSET(0x85083B0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_SETFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x8507B80)
#define MIHOYO_SDK_MIHOYOSDKBROWSER_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x8507AF0)
#define MIHOYO_SDK_MIHOYOSDKBROWSER__CTOR_OFFSET UNITYSDK_OFFSET(0x8508460)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKBrowser_TypeDefinitionIndex = 37225;

	class MiHoYoSDKBrowser : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_2<::MiHoYo::SDK::MiHoYoSDKBrowser*, ::System::String*>* OnPageFinished; // 0x18
		::System::Action_2<::MiHoYo::SDK::MiHoYoSDKBrowser*, ::System::String*>* OnMessageReceived; // 0x20
		::System::Action_3<::MiHoYo::SDK::MiHoYoSDKBrowser*, ::System::Int32, ::System::String*>* OnPageErrorReceived; // 0x28
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x30
		::ZenFulcrum::EmbeddedBrowser::Browser* _browser; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONDESTROY_OFFSET))(this);
		}

		::System::Single get_Alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GET_ALPHA_OFFSET))(this);
		}

		::System::Void set_Alpha(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_SET_ALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_CanGoBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GET_CANGOBACK_OFFSET))(this);
		}

		::System::Boolean get_CanGoForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GET_CANGOFORWARD_OFFSET))(this);
		}

		::System::Void InitCanvasGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_INITCANVASGROUP_OFFSET))(this);
		}

		::System::Void SetFullScreen(::System::Boolean fullScreen, ::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_SETFULLSCREEN_OFFSET))(this, fullScreen, offset);
		}

		::System::Void OnFetchError(::ZenFulcrum::EmbeddedBrowser::JSONNode* obj)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONFETCHERROR_OFFSET))(this, obj);
		}

		::System::Void OnLoadStarts(::ZenFulcrum::EmbeddedBrowser::JSONNode* args)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONLOADSTARTS_OFFSET))(this, args);
		}

		::System::Void OnLoadFinished(::ZenFulcrum::EmbeddedBrowser::JSONNode* obj)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONLOADFINISHED_OFFSET))(this, obj);
		}

		::System::Void OnUniWebViewMsgReceive(::ZenFulcrum::EmbeddedBrowser::JSONNode* obj)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_ONUNIWEBVIEWMSGRECEIVE_OFFSET))(this, obj);
		}

		::System::Void GoBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GOBACK_OFFSET))(this);
		}

		::System::Void GoForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_GOFORWARD_OFFSET))(this);
		}

		::System::Void Reload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_RELOAD_OFFSET))(this);
		}

		::System::Void LoadURL(::System::String* url, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBROWSER_LOADURL_OFFSET))(this, url, v);
		}
	};
}
