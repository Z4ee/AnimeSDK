#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnBeforeBackDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnBeforeCloseDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnBeforeDestroyDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnPopupBrowserCreateDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnUniWebViewMessageDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewInputEnableStatus; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewNativeReady; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewPageBeforeHide; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewPageClose; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewPageError; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewPageFinish; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREBACK_OFFSET UNITYSDK_OFFSET(0x85330F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0x85331F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x85332F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x8532EF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x8532DF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x8532CF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x8532BF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x8532AF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x85329F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x85328F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x8532FF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x85327F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x8533B60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDUSERAGENT_OFFSET UNITYSDK_OFFSET(0x8533B10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ASYNCINIT_OFFSET UNITYSDK_OFFSET(0x8533B80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_BACK_OFFSET UNITYSDK_OFFSET(0x85339C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0x8533E60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0x8533E70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CANOPENUSEINNERWEBVIEW_OFFSET UNITYSDK_OFFSET(0x8538940)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0x8533E40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x8533C60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLOSE_OFFSET UNITYSDK_OFFSET(0x8533990)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x8533B30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETNATIVESCREENINFO_OFFSET UNITYSDK_OFFSET(0x8534010)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x8533AE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDEBG_OFFSET UNITYSDK_OFFSET(0x8533E30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0x85339F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDE_OFFSET UNITYSDK_OFFSET(0x85339A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x85324C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x8533750)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8533BB0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFOREBACK_OFFSET UNITYSDK_OFFSET(0x85378F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0x8537E60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x85383D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x8534870)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x85367D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x8537350)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x8534020)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x8536D40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x85359E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x85353B0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEERROR_OFFSET UNITYSDK_OFFSET(0x8536000)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x8534E10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_PRELOAD_OFFSET UNITYSDK_OFFSET(0x85327E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_QUERYPARAMETERINURL_OFFSET UNITYSDK_OFFSET(0x85333F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8533E80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREBACK_OFFSET UNITYSDK_OFFSET(0x8533170)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0x8533270)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x8533370)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x8532F70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x8532E70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x8532D70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x8532C70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x8532B70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x8532A70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x8532970)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x8533070)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x8532870)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_RESTRICTVALUE_OFFSET UNITYSDK_OFFSET(0x8533EF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0x8533E50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x8533A20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x8533A00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0x85339E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_1_OFFSET UNITYSDK_OFFSET(0x8533D50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_2_OFFSET UNITYSDK_OFFSET(0x8533DC0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x8533CE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTJOYPADCLOSEENABLE_OFFSET UNITYSDK_OFFSET(0x8538B70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x8533A30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x8533A10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAMESUPPORTDYNAMICDPI_OFFSET UNITYSDK_OFFSET(0x8534000)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAME_OFFSET UNITYSDK_OFFSET(0x8533AD0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGAMEVOLUME_OFFSET UNITYSDK_OFFSET(0x8533F00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x8533B40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNAVJOYPADICON_OFFSET UNITYSDK_OFFSET(0x8538950)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8533B90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x8533AF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0x8533FA0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBVOLUME_OFFSET UNITYSDK_OFFSET(0x8533E90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0x85339D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x8533BA0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x85338F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x8538B80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_TypeDefinitionIndex = 37274;

	class MiHoYoSDKWebView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* id; // 0x18
		::System::String* webViewName; // 0x20
		::System::Boolean isHide; // 0x28
		::System::Boolean canOpenUseInnerWebViewByPerf; // 0x29
		::System::String* srcUrl; // 0x30
		::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate* OnUniWebViewMessage; // 0x38
		::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish* OnPageFinish; // 0x40
		::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError* OnPageError; // 0x48
		::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose* OnPageClose; // 0x50
		::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide* OnPageBeforeHide; // 0x58
		::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady* OnNativeReady; // 0x60
		::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus* OnInputEnableStatus; // 0x68
		::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate* OnBeforeNavigationMessage; // 0x70
		::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate* OnPopupBrowserCreate; // 0x78
		::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate* OnBeforeBack; // 0x80
		::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate* OnBeforeClose; // 0x88
		::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate* OnBeforeDestroy; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MiHoYoSDKWebView* Init(::System::String* url, ::System::Int32 options)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKWebView*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_OFFSET))(url, options);
		}

		static ::System::Void PreLoad(::System::String* env, ::System::String* gameBiz, ::System::Boolean runtimeCache)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_PRELOAD_OFFSET))(env, gameBiz, runtimeCache);
		}

		::System::Void add_OnUniWebViewMessage(::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONUNIWEBVIEWMESSAGE_OFFSET))(this, value);
		}

		::System::Void remove_OnUniWebViewMessage(::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET))(this, value);
		}

		::System::Void add_OnPageFinish(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEFINISH_OFFSET))(this, value);
		}

		::System::Void remove_OnPageFinish(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEFINISH_OFFSET))(this, value);
		}

		::System::Void add_OnPageError(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEERROR_OFFSET))(this, value);
		}

		::System::Void remove_OnPageError(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEERROR_OFFSET))(this, value);
		}

		::System::Void add_OnPageClose(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGECLOSE_OFFSET))(this, value);
		}

		::System::Void remove_OnPageClose(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGECLOSE_OFFSET))(this, value);
		}

		::System::Void add_OnPageBeforeHide(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEBEFOREHIDE_OFFSET))(this, value);
		}

		::System::Void remove_OnPageBeforeHide(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEBEFOREHIDE_OFFSET))(this, value);
		}

		::System::Void add_OnNativeReady(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONNATIVEREADY_OFFSET))(this, value);
		}

		::System::Void remove_OnNativeReady(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONNATIVEREADY_OFFSET))(this, value);
		}

		::System::Void add_OnInputEnableStatus(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONINPUTENABLESTATUS_OFFSET))(this, value);
		}

		::System::Void remove_OnInputEnableStatus(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONINPUTENABLESTATUS_OFFSET))(this, value);
		}

		::System::Void add_OnBeforeNavigationMessage(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, value);
		}

		::System::Void remove_OnBeforeNavigationMessage(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, value);
		}

		::System::Void add_OnPopupBrowserCreate(::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPOPUPBROWSERCREATE_OFFSET))(this, value);
		}

		::System::Void remove_OnPopupBrowserCreate(::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPOPUPBROWSERCREATE_OFFSET))(this, value);
		}

		::System::Void add_OnBeforeBack(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREBACK_OFFSET))(this, value);
		}

		::System::Void remove_OnBeforeBack(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREBACK_OFFSET))(this, value);
		}

		::System::Void add_OnBeforeClose(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORECLOSE_OFFSET))(this, value);
		}

		::System::Void remove_OnBeforeClose(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORECLOSE_OFFSET))(this, value);
		}

		::System::Void add_OnBeforeDestroy(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREDESTROY_OFFSET))(this, value);
		}

		::System::Void remove_OnBeforeDestroy(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREDESTROY_OFFSET))(this, value);
		}

		static ::System::String* QueryParameterInUrl(::System::String* url, ::System::String* param)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_QUERYPARAMETERINURL_OFFSET))(url, param);
		}

		::System::Void Load(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_LOAD_OFFSET))(this, url);
		}

		::System::Void Show(::System::Boolean affectOpenedWebs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOW_OFFSET))(this, affectOpenedWebs);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLOSE_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_BACK_OFFSET))(this);
		}

		::System::Void SetZoomEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETZOOMENABLED_OFFSET))(this, enabled);
		}

		::System::Void SetBouncesEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBOUNCESENABLED_OFFSET))(this, enabled);
		}

		::System::Void HideNavigationBar(::System::Boolean enabled, ::System::Boolean affectWebsBehindCurrentWebView, ::System::Boolean setFullScreenSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDENAVIGATIONBAR_OFFSET))(this, enabled, affectWebsBehindCurrentWebView, setFullScreenSize);
		}

		::System::Void SetBackButtonEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONENABLED_OFFSET))(this, enabled);
		}

		::System::Void SetForwardButtonEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFORWARDBUTTONENABLED_OFFSET))(this, enabled);
		}

		::System::Void SetBackButtonAction(::System::Func_1<::System::Boolean>* backAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONACTION_OFFSET))(this, backAction);
		}

		::System::Void SetCurrentWebviewAnimationEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET))(this, enable);
		}

		::System::Void SetFrame(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAME_OFFSET))(this, x, y, width, height);
		}

		::System::String* GetUserAgent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETUSERAGENT_OFFSET))(this);
		}

		::System::Void SetUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETUSERAGENT_OFFSET))(this, content);
		}

		::System::Void AppendUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDUSERAGENT_OFFSET))(this, content);
		}

		static ::System::String* GetGlobalUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETGLOBALUSERAGENT_OFFSET))();
		}

		static ::System::Void SetGlobalUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENT_OFFSET))(content);
		}

		static ::System::Void AppendGlobalUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDGLOBALUSERAGENT_OFFSET))(content);
		}

		static ::System::Void AsyncInit(::System::Int32 simulateSeconds, ::System::Boolean simulateFailed)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ASYNCINIT_OFFSET))(simulateSeconds, simulateFailed);
		}

		::System::Void SetNewWindowType(::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNEWWINDOWTYPE_OFFSET))(this, type);
		}

		::System::Void ShowDevTools(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOWDEVTOOLS_OFFSET))(this, isShow);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearCookies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET))(this);
		}

		::System::Void SetCookies(::System::String* key, ::System::String* content, ::System::String* domain)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_OFFSET))(this, key, content, domain);
		}

		::System::Void SetCookies_1(::System::String* key, ::System::String* content, ::System::String* domain, ::System::String* expires)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_1_OFFSET))(this, key, content, domain, expires);
		}

		::System::Void SetCookies_2(::System::String* key, ::System::String* content, ::System::String* domain, ::System::Boolean secure, ::System::Boolean httpOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_2_OFFSET))(this, key, content, domain, secure, httpOnly);
		}

		::System::Void HideBG(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDEBG_OFFSET))(this, flag);
		}

		::System::Void ClearBGImg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARBGIMG_OFFSET))(this);
		}

		::System::Void SetAdjustDPIEnable(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETADJUSTDPIENABLE_OFFSET))(this, enabled);
		}

		::System::Void CallJSFunction(::System::String* method, ::System::String* jsonString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSFUNCTION_OFFSET))(this, method, jsonString, isDirectly);
		}

		::System::Void CallJSPublishFunction(::System::String* typeString, ::System::String* dataString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSPUBLISHFUNCTION_OFFSET))(this, typeString, dataString, isDirectly);
		}

		::System::Void RegisterJSPostMessage(::System::String* typeString, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REGISTERJSPOSTMESSAGE_OFFSET))(this, typeString, callback);
		}

		static ::System::Void SetWebVolume(::System::Int32 v)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBVOLUME_OFFSET))(v);
		}

		static ::System::Int32 RestrictValue(::System::Int32 value, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_RESTRICTVALUE_OFFSET))(value, min, max);
		}

		static ::System::Void SetGameVolume(::System::Int32 audioEffect, ::System::Int32 voice, ::System::Int32 bgm)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGAMEVOLUME_OFFSET))(audioEffect, voice, bgm);
		}

		::System::Void SetWebFeature(::MiHoYo::SDK::WebFeature feature)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBFEATURE_OFFSET))(this, feature);
		}

		::System::Void SetFrameSupportDynamicDpi(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAMESUPPORTDYNAMICDPI_OFFSET))(this, x, y, width, height);
		}

		::System::String* GetNativeScreenInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETNATIVESCREENINFO_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, result);
		}

		::System::Void OnGetBeforeNavigationMessage(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORENAVIGATIONMESSAGE_OFFSET))(this, result);
		}

		::System::Void OnGetWebViewPageFinish(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEFINISH_OFFSET))(this, url);
		}

		::System::Void OnGetWebViewPageClose(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGECLOSE_OFFSET))(this, message);
		}

		::System::Void OnGetWebViewPageBeforeHide(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET))(this, message);
		}

		::System::Void OnGetWebViewPageError(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEERROR_OFFSET))(this, message);
		}

		::System::Void OnGetNativeReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETNATIVEREADY_OFFSET))(this);
		}

		::System::Void OnGetWebViewInputEnableStatus(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWINPUTENABLESTATUS_OFFSET))(this, enabled);
		}

		::System::Void OnGetPopupBrowserCreate(::MiHoYo::SDK::Web* newWeb)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETPOPUPBROWSERCREATE_OFFSET))(this, newWeb);
		}

		::System::Void OnGetBeforeBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFOREBACK_OFFSET))(this);
		}

		::System::Void OnGetBeforeClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORECLOSE_OFFSET))(this);
		}

		::System::Void OnGetBeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFOREDESTROY_OFFSET))(this);
		}

		static ::System::Boolean CanOpenUseInnerWebView(::System::String* activityId)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CANOPENUSEINNERWEBVIEW_OFFSET))(activityId);
		}

		::System::Void SetNavJoypadIcon(::System::Boolean bEnable, ::System::Boolean bExchange, ::System::String* strJoypadType, ::System::String* strCloseBtnText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNAVJOYPADICON_OFFSET))(this, bEnable, bExchange, strJoypadType, strCloseBtnText);
		}

		::System::Void SetCurrentJoypadCloseEnable(::System::Boolean bEnable, ::System::Int32 nCloseBtnType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTJOYPADCLOSEENABLE_OFFSET))(this, bEnable, nCloseBtnType);
		}
	};
}
