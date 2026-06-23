#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKUniWebViewMessage.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/HoYoSDKWebView_WebViewAdapterMsgID.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK::PluginUI { class HoYoSDKWebView_CookieInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CACHECOOKIE_OFFSET UNITYSDK_OFFSET(0x1AE2AC50)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x1AE2AA10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CLOSEWEB_OFFSET UNITYSDK_OFFSET(0x1AE29180)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_EVALUATEJSSCRIPTS_OFFSET UNITYSDK_OFFSET(0x1AE2B090)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_GETWEBHANDLER_OFFSET UNITYSDK_OFFSET(0x1AE27160)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_HANDLECUSTOMNOTIFYMSG_OFFSET UNITYSDK_OFFSET(0x1AE29590)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AE24AB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_LOADURL_OFFSET UNITYSDK_OFFSET(0x1AE262E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_NOTIFYERROR_OFFSET UNITYSDK_OFFSET(0x1AE29360)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFOREBACK_OFFSET UNITYSDK_OFFSET(0x1AE28F20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0x1AE290E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE292E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AE28A20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1AE25AA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONGETBRIDGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AE28C80)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AE28410)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1AE28670)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNOTICECLOSE_OFFSET UNITYSDK_OFFSET(0x1AE273E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNOTICEPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1AE275E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1AE27660)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1AE280B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1AE26F00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AE29550)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1AE24EC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_PROCCESSCACHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1AE29FC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_PROCCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1AE29850)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_REMOVEWEB_OFFSET UNITYSDK_OFFSET(0x1AE27CB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1AE28680)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x1AE24F30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE24B30)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKWebView_TypeDefinitionIndex = 37143;

	class HoYoSDKWebView : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKWebView** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKWebView**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKWebView_TypeDefinitionIndex)->GetStaticField(0x287B0);
		}
		// static const ::System::Int32 INVALIE_WEBVIEW_HANDLER = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* m_listBridgeMessage; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MiHoYo::SDK::MiHoYoSDKWebView*>* m_mapHandler2WebView; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PluginUI::HoYoSDKWebView_CookieInfo*>*>* m_mapHandle2Cookies; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* m_mapHandle2Scripts; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>* m_mapMsgID2Params; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKWebView* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKWebView*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_SHOW_OFFSET))(this);
		}

		::System::Void LoadUrl(::System::Int32 handle, ::System::String* url, ::System::Boolean needScale, ::System::Boolean bEnableJoypad, ::System::Boolean bDisableJoypadClose, ::System::Int32 nJoypadCloseBtnType, ::System::String* strBusiness)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_LOADURL_OFFSET))(this, handle, url, needScale, bEnableJoypad, bDisableJoypadClose, nJoypadCloseBtnType, strBusiness);
		}

		::System::Void OnPageFinish(::MiHoYo::SDK::MiHoYoSDKWebView* web, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGEFINISH_OFFSET))(this, web, url);
		}

		::System::Void OnNoticeClose(::MiHoYo::SDK::MiHoYoSDKWebView* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNOTICECLOSE_OFFSET))(this, web);
		}

		::System::Void OnNoticePageFinish(::MiHoYo::SDK::MiHoYoSDKWebView* web, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNOTICEPAGEFINISH_OFFSET))(this, web, url);
		}

		::System::Void OnPageClose(::MiHoYo::SDK::MiHoYoSDKWebView* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGECLOSE_OFFSET))(this, web);
		}

		::System::Void OnPageError(::MiHoYo::SDK::MiHoYoSDKWebView* web, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGEERROR_OFFSET))(this, web, url, errorCode, errorMessage);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::MiHoYoSDKWebView* web, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, web, message);
		}

		::System::Void OnNativeReady(::MiHoYo::SDK::MiHoYoSDKWebView* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNATIVEREADY_OFFSET))(this, web);
		}

		::System::Void OnBeforeNavigationMessage(::MiHoYo::SDK::MiHoYoSDKWebView* web, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, web, url);
		}

		::System::Void OnGetBridgeMessage(::MiHoYo::SDK::JSONNode* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONGETBRIDGEMESSAGE_OFFSET))(this, parameters);
		}

		::System::Void OnBeforeBack(::MiHoYo::SDK::MiHoYoSDKWebView* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFOREBACK_OFFSET))(this, web);
		}

		::System::Void OnBeforeClose(::MiHoYo::SDK::MiHoYoSDKWebView* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFORECLOSE_OFFSET))(this, web);
		}

		::System::Void OnBeforeDestroy(::MiHoYo::SDK::MiHoYoSDKWebView* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFOREDESTROY_OFFSET))(this, web);
		}

		::System::Int32 GetWebHandler(::MiHoYo::SDK::MiHoYoSDKWebView* web)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_GETWEBHANDLER_OFFSET))(this, web);
		}

		::System::Void RemoveWeb(::System::Int32 nHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_REMOVEWEB_OFFSET))(this, nHandle);
		}

		::System::Void NotifyError(::System::Int32 id, ::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_NOTIFYERROR_OFFSET))(this, id, errMsg);
		}

		::System::Void OnReceiveMessage(::System::Int32 nMsgID, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONRECEIVEMESSAGE_OFFSET))(this, nMsgID, strParams);
		}

		::System::Void HandleCustomNotifyMsg(::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_HANDLECUSTOMNOTIFYMSG_OFFSET))(this, strParams);
		}

		::System::Boolean ProccessEvent(::System::Int32 nHandle, ::MiHoYo::SDK::PluginUI::HoYoSDKWebView_WebViewAdapterMsgID eMsgID, ::MiHoYo::SDK::JSONNode* jsonValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::PluginUI::HoYoSDKWebView_WebViewAdapterMsgID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_PROCCESSEVENT_OFFSET))(this, nHandle, eMsgID, jsonValue);
		}

		::System::Void CacheCookie(::System::Int32 nHandle, ::System::String* cookie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CACHECOOKIE_OFFSET))(this, nHandle, cookie);
		}

		::System::Void ProccessCachedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_PROCCESSCACHEDEVENT_OFFSET))(this);
		}

		::System::Void SetCookies(::MiHoYo::SDK::MiHoYoSDKWebView* webview)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_SETCOOKIES_OFFSET))(this, webview);
		}

		::System::Void ClearCookies(::System::Int32 nHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET))(this, nHandle);
		}

		::System::Void EvaluateJSScripts(::MiHoYo::SDK::MiHoYoSDKWebView* webview)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_EVALUATEJSSCRIPTS_OFFSET))(this, webview);
		}

		::System::Void CloseWeb(::MiHoYo::SDK::MiHoYoSDKWebView* webview, ::System::Int32 handle)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CLOSEWEB_OFFSET))(this, webview, handle);
		}
	};
}
