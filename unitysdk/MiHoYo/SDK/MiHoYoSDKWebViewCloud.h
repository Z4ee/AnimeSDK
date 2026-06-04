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

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ADDINVOKERETURNCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1C50F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_APPENDGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1A3940)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_APPENDUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1A26F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ASYNCINIT_OFFSET UNITYSDK_OFFSET(0xA1C55A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0xA1A5B10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0xA1A61A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLREMOTEFUNCTION_OFFSET UNITYSDK_OFFSET(0xA1C5320)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CANOPENUSEINNERWEBVIEW_OFFSET UNITYSDK_OFFSET(0xA1A6810)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0xA1C50D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0xA1A59D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0xA1C55C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLOSE_OFFSET UNITYSDK_OFFSET(0xA19FD60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1A2990)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETMIHOYOSDKWEBVIEW_OFFSET UNITYSDK_OFFSET(0xA1C5690)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETNATIVESCREENINFO_OFFSET UNITYSDK_OFFSET(0xA1C5090)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1A2040)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDEBG_OFFSET UNITYSDK_OFFSET(0xA1A5650)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0xA1A11C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDE_OFFSET UNITYSDK_OFFSET(0xA19F640)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_INIT_OFFSET UNITYSDK_OFFSET(0xA19CE20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ISUSINGLOCALCONFIG_OFFSET UNITYSDK_OFFSET(0xA1C4D20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_LOAD_OFFSET UNITYSDK_OFFSET(0xA19E0E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ONGETWEBEVENT_OFFSET UNITYSDK_OFFSET(0xA1C5780)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_UNI_WEBVIEW_MESSAGE_OFFSET UNITYSDK_OFFSET(0xA1C5BD0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_CLOSE_OFFSET UNITYSDK_OFFSET(0xA1C5D70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_ERROR_OFFSET UNITYSDK_OFFSET(0xA1C5D00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_FINISH_OFFSET UNITYSDK_OFFSET(0xA1C5C80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_PRELOAD_OFFSET UNITYSDK_OFFSET(0xA1A43C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1A6340)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SENDCLOUDWEBDATA_OFFSET UNITYSDK_OFFSET(0xA1C4D30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0xA1A6680)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0xA1C5650)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0xA1A0F80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0xA1C4F00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCOOKIES_1_OFFSET UNITYSDK_OFFSET(0xA1C55F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0xA1C55D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0xA1C5670)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0xA1C5630)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFRAMESUPPORTDYNAMICDPI_OFFSET UNITYSDK_OFFSET(0xA1C5040)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFRAME_OFFSET UNITYSDK_OFFSET(0xA1A18C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETGLOBALUSERAGENTAPPEND_OFFSET UNITYSDK_OFFSET(0xA1A3B10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1A2D40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA1A4290)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1A23C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0xA1C5610)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0xA1A0D80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0xA1A4C90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SHOW_OFFSET UNITYSDK_OFFSET(0xA19EC80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1C5DF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C5DE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewCloud_TypeDefinitionIndex = 43947;

	class MiHoYoSDKWebViewCloud : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_MiHoYoSDKWebCloud()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewCloud_TypeDefinitionIndex)->GetStaticField(0x106F0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewCloud_TypeDefinitionIndex)->GetStaticField(0x106F8);
		}
		static ::System::Int32* StaticGet_TimeoutCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewCloud_TypeDefinitionIndex)->GetStaticField(0x5060);
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

		static ::System::Void Init(::System::String* a1, ::System::Boolean a2, ::MiHoYo::SDK::MHYSDKC_Info_WebViewAnimationOptions a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::MiHoYo::SDK::MHYSDKC_Info_WebViewAnimationOptions))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_INIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Load(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_LOAD_OFFSET))(a1, a2);
		}

		static ::System::Void Show(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SHOW_OFFSET))(a1, a2);
		}

		static ::System::Void Hide(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDE_OFFSET))(a1);
		}

		static ::System::Void Close(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLOSE_OFFSET))(a1);
		}

		static ::System::Void SetZoomEnabled(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETZOOMENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void SetBouncesEnabled(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBOUNCESENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void HideNavigationBar(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDENAVIGATIONBAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetFrame(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFRAME_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetFrameSupportDynamicDpi(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFRAMESUPPORTDYNAMICDPI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetNativeScreenInfo(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETNATIVESCREENINFO_OFFSET))(a1);
		}

		static ::System::String* GetUserAgent(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETUSERAGENT_OFFSET))(a1);
		}

		static ::System::String* CallRemoteFunction(::System::String* a1, ::MiHoYo::SDK::JSONObject* a2)
		{
			return ((::System::String*(*)(::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLREMOTEFUNCTION_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanOpenUseInnerWebView(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CANOPENUSEINNERWEBVIEW_OFFSET))(a1);
		}

		static ::System::Void SetUserAgent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETUSERAGENT_OFFSET))(a1, a2);
		}

		static ::System::Void AppendUserAgent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_APPENDUSERAGENT_OFFSET))(a1, a2);
		}

		static ::System::String* GetGlobalUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETGLOBALUSERAGENT_OFFSET))();
		}

		static ::System::Void SetGlobalUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETGLOBALUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void AppendGlobalUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_APPENDGLOBALUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void SetGlobalUserAgentAppend(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETGLOBALUSERAGENTAPPEND_OFFSET))(a1);
		}

		static ::System::Void AsyncInit(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ASYNCINIT_OFFSET))(a1, a2);
		}

		static ::System::Void SetBackButtonEnabled(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBACKBUTTONENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void SetNewWindowType(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETNEWWINDOWTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void PreLoad(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_PRELOAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowDevTools(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SHOWDEVTOOLS_OFFSET))(a1, a2);
		}

		static ::System::Void ClearCookies(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLEARCOOKIES_OFFSET))(a1);
		}

		static ::System::Void SetCookies(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCOOKIES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetCookies_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCOOKIES_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void HideBG(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_HIDEBG_OFFSET))(a1, a2);
		}

		static ::System::Void ClearBGImg(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CLEARBGIMG_OFFSET))(a1);
		}

		static ::System::Void CallJSFunction(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLJSFUNCTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CallJSPublishFunction(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CALLJSPUBLISHFUNCTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetAdjustDPIEnable(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETADJUSTDPIENABLE_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterJSPostMessage(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_REGISTERJSPOSTMESSAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetWebFeature(::System::String* a1, ::MiHoYo::SDK::WebFeature a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETWEBFEATURE_OFFSET))(a1, a2);
		}

		static ::System::Void SetForwardButtonEnabled(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETFORWARDBUTTONENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void SetBackButtonAction(::System::String* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETBACKBUTTONACTION_OFFSET))(a1, a2);
		}

		static ::System::Void SetCurrentWebviewAnimationEnable(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET))(a1, a2);
		}

		static ::System::Void CheckPlatform()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_CHECKPLATFORM_OFFSET))();
		}

		static ::System::Void SendCloudWebData(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_SENDCLOUDWEBDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddInvokeReturnCallback(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ADDINVOKERETURNCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetMiHoYoSDKWebView(::System::String* a1, ::MiHoYo::SDK::MiHoYoSDKWebView*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::MiHoYo::SDK::MiHoYoSDKWebView*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_GETMIHOYOSDKWEBVIEW_OFFSET))(a1, a2);
		}

		static ::System::Void OnGetWebEvent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ONGETWEBEVENT_OFFSET))(a1, a2);
		}

		static ::System::Void on_get_uni_webview_message(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_UNI_WEBVIEW_MESSAGE_OFFSET))(a1, a2);
		}

		static ::System::Void on_get_webview_page_finish(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_FINISH_OFFSET))(a1, a2);
		}

		static ::System::Void on_get_webview_page_error(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_ERROR_OFFSET))(a1, a2);
		}

		static ::System::Void on_get_webview_page_close(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWCLOUD_ON_GET_WEBVIEW_PAGE_CLOSE_OFFSET))(a1, a2);
		}
	};
}
