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

#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CACHECOOKIE_OFFSET UNITYSDK_OFFSET(0xB026EA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0xB026D00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CLOSEWEB_OFFSET UNITYSDK_OFFSET(0xB025520)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_EVALUATEJSSCRIPTS_OFFSET UNITYSDK_OFFSET(0xB027AF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_GETWEBHANDLER_OFFSET UNITYSDK_OFFSET(0xB0235F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_HANDLECUSTOMNOTIFYMSG_OFFSET UNITYSDK_OFFSET(0xB025930)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB020910)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_LOADURL_OFFSET UNITYSDK_OFFSET(0xB022530)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_NOTIFYERROR_OFFSET UNITYSDK_OFFSET(0xB0257C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFOREBACK_OFFSET UNITYSDK_OFFSET(0xB025280)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0xB025430)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xB025740)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xB024CD0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB021C80)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONGETBRIDGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB024ED0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0xB0247C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0xB0249C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNOTICECLOSE_OFFSET UNITYSDK_OFFSET(0xB023850)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNOTICEPAGEFINISH_OFFSET UNITYSDK_OFFSET(0xB023A60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xB023A80)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0xB0245C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0xB0233E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB0258F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB020F80)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_PROCCESSCACHEDEVENT_OFFSET UNITYSDK_OFFSET(0xB0262A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_PROCCESSEVENT_OFFSET UNITYSDK_OFFSET(0xB025C60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_REMOVEWEB_OFFSET UNITYSDK_OFFSET(0xB024220)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0xB0249D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0xB021040)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB020960)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKWebView_TypeDefinitionIndex = 46775;

	class HoYoSDKWebView : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKWebView** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKWebView**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKWebView_TypeDefinitionIndex)->GetStaticField(0x30710);
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

		::System::Void LoadUrl(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_LOADURL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OnPageFinish(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGEFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void OnNoticeClose(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNOTICECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnNoticePageFinish(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNOTICEPAGEFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void OnPageClose(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnPageError(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONPAGEERROR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnNativeReady(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONNATIVEREADY_OFFSET))(this, a1);
		}

		::System::Void OnBeforeNavigationMessage(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetBridgeMessage(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONGETBRIDGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnBeforeBack(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFOREBACK_OFFSET))(this, a1);
		}

		::System::Void OnBeforeClose(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFORECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnBeforeDestroy(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONBEFOREDESTROY_OFFSET))(this, a1);
		}

		::System::Int32 GetWebHandler(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_GETWEBHANDLER_OFFSET))(this, a1);
		}

		::System::Void RemoveWeb(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_REMOVEWEB_OFFSET))(this, a1);
		}

		::System::Void NotifyError(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_NOTIFYERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnReceiveMessage(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_ONRECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void HandleCustomNotifyMsg(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_HANDLECUSTOMNOTIFYMSG_OFFSET))(this, a1);
		}

		::System::Boolean ProccessEvent(::System::Int32 a1, ::MiHoYo::SDK::PluginUI::HoYoSDKWebView_WebViewAdapterMsgID a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::PluginUI::HoYoSDKWebView_WebViewAdapterMsgID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_PROCCESSEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CacheCookie(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CACHECOOKIE_OFFSET))(this, a1, a2);
		}

		::System::Void ProccessCachedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_PROCCESSCACHEDEVENT_OFFSET))(this);
		}

		::System::Void SetCookies(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_SETCOOKIES_OFFSET))(this, a1);
		}

		::System::Void ClearCookies(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET))(this, a1);
		}

		::System::Void EvaluateJSScripts(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_EVALUATEJSSCRIPTS_OFFSET))(this, a1);
		}

		::System::Void CloseWeb(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKWEBVIEW_CLOSEWEB_OFFSET))(this, a1, a2);
		}
	};
}
