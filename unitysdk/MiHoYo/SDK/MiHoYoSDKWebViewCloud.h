#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Info_WebViewAnimationOptions.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ADDINVOKERETURNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D26BB20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_APPENDGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D26C860)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_APPENDUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D26C350)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ASYNCINIT_OFFSET UNITYSDK_OFFSET(0x1D26CB20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D26D140)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D26D190)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLREMOTEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D26BDA0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CANOPENUSEINNERWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1D26BFC0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D26B870)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0x1D26D0F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x1D26D030)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D26AC40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D26C550)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETMIHOYOSDKWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1D26D3C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETNATIVESCREENINFO_OFFSET UNITYSDK_OFFSET(0x1D26B810)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D26B880)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDEBG_OFFSET UNITYSDK_OFFSET(0x1D26D0E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0x1D26B1A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDE_OFFSET UNITYSDK_OFFSET(0x1D26AAE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_INIT_OFFSET UNITYSDK_OFFSET(0x1D26A360)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ISUSINGLOCALCONFIG_OFFSET UNITYSDK_OFFSET(0x1D26A350)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_LOAD_OFFSET UNITYSDK_OFFSET(0x1D26A780)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ONGETWEBEVENT_OFFSET UNITYSDK_OFFSET(0x1D26D590)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_UNI_WEBVIEW_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1D26DBC0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D26DDF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_ERROR_OFFSET UNITYSDK_OFFSET(0x1D26DD50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_FINISH_OFFSET UNITYSDK_OFFSET(0x1D26DCB0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1D26CD80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D26D230)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SENDCLOUDWEBDATA_OFFSET UNITYSDK_OFFSET(0x1D26A560)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0x1D26D1E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1D26D320)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x1D26CB70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0x1D26AFA0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCOOKIES_1_OFFSET UNITYSDK_OFFSET(0x1D26D090)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1D26D040)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x1D26D370)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x1D26D2D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFRAMESUPPORTDYNAMICDPI_OFFSET UNITYSDK_OFFSET(0x1D26B7A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1D26B3A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETGLOBALUSERAGENTAPPEND_OFFSET UNITYSDK_OFFSET(0x1D26C9C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D26C700)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1D26CD70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D26C150)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0x1D26D280)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0x1D26ADA0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x1D26D020)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SHOW_OFFSET UNITYSDK_OFFSET(0x1D26A980)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D26DEA0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26DE90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewCloud_TypeDefinitionIndex = 36956;

	class MiHoYoSDKWebViewCloud : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_MiHoYoSDKWebCloud()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewCloud_TypeDefinitionIndex)->GetStaticField(0x28310);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewCloud_TypeDefinitionIndex)->GetStaticField(0x28318);
		}
		static ::System::Int32* StaticGet_TimeoutCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewCloud_TypeDefinitionIndex)->GetStaticField(0x87B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsUsingLocalConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ISUSINGLOCALCONFIG_OFFSET))();
		}

		static ::System::Void Init(::System::String* name, ::System::Boolean offScreen, ::MiHoYo::SDK::MHYSDKC_Info_WebViewAnimationOptions animationOptions)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::MiHoYo::SDK::MHYSDKC_Info_WebViewAnimationOptions))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_INIT_OFFSET))(name, offScreen, animationOptions);
		}

		static ::System::Void Load(::System::String* name, ::System::String* url)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_LOAD_OFFSET))(name, url);
		}

		static ::System::Void Show(::System::String* name, ::System::Boolean affectOpenedWebs)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SHOW_OFFSET))(name, affectOpenedWebs);
		}

		static ::System::Void Hide(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDE_OFFSET))(name);
		}

		static ::System::Void Close(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLOSE_OFFSET))(name);
		}

		static ::System::Void SetZoomEnabled(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETZOOMENABLED_OFFSET))(name, enabled);
		}

		static ::System::Void SetBouncesEnabled(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBOUNCESENABLED_OFFSET))(name, enabled);
		}

		static ::System::Void HideNavigationBar(::System::String* name, ::System::Boolean enabled, ::System::Boolean affectWebsBehindCurrentWebView, ::System::Boolean setFullScreenSize)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDENAVIGATIONBAR_OFFSET))(name, enabled, affectWebsBehindCurrentWebView, setFullScreenSize);
		}

		static ::System::Void SetFrame(::System::String* name, ::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFRAME_OFFSET))(name, x, y, width, height);
		}

		static ::System::Void SetFrameSupportDynamicDpi(::System::String* name, ::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFRAMESUPPORTDYNAMICDPI_OFFSET))(name, x, y, width, height);
		}

		static ::System::String* GetNativeScreenInfo(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETNATIVESCREENINFO_OFFSET))(name);
		}

		static ::System::String* GetUserAgent(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETUSERAGENT_OFFSET))(name);
		}

		static ::System::String* CallRemoteFunction(::System::String* funcName, ::MiHoYo::SDK::JSONObject* parameters)
		{
			return ((::System::String*(*)(::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLREMOTEFUNCTION_OFFSET))(funcName, parameters);
		}

		static ::System::Boolean CanOpenUseInnerWebView(::System::String* activityId)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CANOPENUSEINNERWEBVIEW_OFFSET))(activityId);
		}

		static ::System::Void SetUserAgent(::System::String* name, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETUSERAGENT_OFFSET))(name, content);
		}

		static ::System::Void AppendUserAgent(::System::String* name, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_APPENDUSERAGENT_OFFSET))(name, content);
		}

		static ::System::String* GetGlobalUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETGLOBALUSERAGENT_OFFSET))();
		}

		static ::System::Void SetGlobalUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETGLOBALUSERAGENT_OFFSET))(content);
		}

		static ::System::Void AppendGlobalUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_APPENDGLOBALUSERAGENT_OFFSET))(content);
		}

		static ::System::Void SetGlobalUserAgentAppend(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETGLOBALUSERAGENTAPPEND_OFFSET))(content);
		}

		static ::System::Void AsyncInit(::System::Int32 simulateSeconds, ::System::Boolean simulateFailed)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ASYNCINIT_OFFSET))(simulateSeconds, simulateFailed);
		}

		static ::System::Void SetBackButtonEnabled(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBACKBUTTONENABLED_OFFSET))(name, enabled);
		}

		static ::System::Void SetNewWindowType(::System::String* name, ::System::Int32 type)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETNEWWINDOWTYPE_OFFSET))(name, type);
		}

		static ::System::Void PreLoad(::System::String* env, ::System::String* gameBiz, ::System::Boolean runtimeCache)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_PRELOAD_OFFSET))(env, gameBiz, runtimeCache);
		}

		static ::System::Void ShowDevTools(::System::String* name, ::System::Boolean isShow)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SHOWDEVTOOLS_OFFSET))(name, isShow);
		}

		static ::System::Void ClearCookies(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLEARCOOKIES_OFFSET))(name);
		}

		static ::System::Void SetCookies(::System::String* name, ::System::String* key, ::System::String* content, ::System::String* domain)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCOOKIES_OFFSET))(name, key, content, domain);
		}

		static ::System::Void SetCookies_1(::System::String* name, ::System::String* key, ::System::String* content, ::System::String* domain, ::System::String* expires)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCOOKIES_1_OFFSET))(name, key, content, domain, expires);
		}

		static ::System::Void HideBG(::System::String* name, ::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDEBG_OFFSET))(name, flag);
		}

		static ::System::Void ClearBGImg(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLEARBGIMG_OFFSET))(name);
		}

		static ::System::Void CallJSFunction(::System::String* name, ::System::String* method, ::System::String* jsonString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLJSFUNCTION_OFFSET))(name, method, jsonString, isDirectly);
		}

		static ::System::Void CallJSPublishFunction(::System::String* name, ::System::String* typeString, ::System::String* dataString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLJSPUBLISHFUNCTION_OFFSET))(name, typeString, dataString, isDirectly);
		}

		static ::System::Void SetAdjustDPIEnable(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETADJUSTDPIENABLE_OFFSET))(name, enabled);
		}

		static ::System::Void RegisterJSPostMessage(::System::String* name, ::System::String* typeString, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_REGISTERJSPOSTMESSAGE_OFFSET))(name, typeString, callback);
		}

		static ::System::Void SetWebFeature(::System::String* name, ::MiHoYo::SDK::WebFeature feature)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETWEBFEATURE_OFFSET))(name, feature);
		}

		static ::System::Void SetForwardButtonEnabled(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFORWARDBUTTONENABLED_OFFSET))(name, enabled);
		}

		static ::System::Void SetBackButtonAction(::System::String* name, ::System::Func_1<::System::Boolean>* action)
		{
			return ((::System::Void(*)(::System::String*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBACKBUTTONACTION_OFFSET))(name, action);
		}

		static ::System::Void SetCurrentWebviewAnimationEnable(::System::String* name, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET))(name, enable);
		}

		static ::System::Void CheckPlatform()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CHECKPLATFORM_OFFSET))();
		}

		static ::System::Void SendCloudWebData(::System::String* f, ::System::String* p, ::System::Int32 i)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SENDCLOUDWEBDATA_OFFSET))(f, p, i);
		}

		static ::System::Void AddInvokeReturnCallback(::System::String* f, ::System::String* p, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ADDINVOKERETURNCALLBACK_OFFSET))(f, p, callback);
		}

		static ::System::Boolean GetMiHoYoSDKWebView(::System::String* name, ::MiHoYo::SDK::MiHoYoSDKWebView*& web)
		{
			return ((::System::Boolean(*)(::System::String*, ::MiHoYo::SDK::MiHoYoSDKWebView*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETMIHOYOSDKWEBVIEW_OFFSET))(name, web);
		}

		static ::System::Void OnGetWebEvent(::System::String* f, ::System::String* p)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ONGETWEBEVENT_OFFSET))(f, p);
		}

		static ::System::Void on_get_uni_webview_message(::System::String* name, ::System::String* data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_UNI_WEBVIEW_MESSAGE_OFFSET))(name, data);
		}

		static ::System::Void on_get_webview_page_finish(::System::String* name, ::System::String* data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_FINISH_OFFSET))(name, data);
		}

		static ::System::Void on_get_webview_page_error(::System::String* name, ::System::String* data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_ERROR_OFFSET))(name, data);
		}

		static ::System::Void on_get_webview_page_close(::System::String* name, ::System::String* data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_CLOSE_OFFSET))(name, data);
		}
	};
}
