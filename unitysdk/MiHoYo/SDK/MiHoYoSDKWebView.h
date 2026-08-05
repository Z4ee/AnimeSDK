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

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREBACK_OFFSET UNITYSDK_OFFSET(0x1D845700)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0x1D845800)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1D845900)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D845500)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1D845400)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1D845300)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x1D845200)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1D845100)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1D845000)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1D844F00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x1D845600)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D844E00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D846000)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D845FC0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ASYNCINIT_OFFSET UNITYSDK_OFFSET(0x1D846020)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_BACK_OFFSET UNITYSDK_OFFSET(0x1D845F00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D846120)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D846130)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CANOPENUSEINNERWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1D846D40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0x1D846100)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x1D8460B0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D845ED0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D845FE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETNATIVESCREENINFO_OFFSET UNITYSDK_OFFSET(0x1D846350)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D845F90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDEBG_OFFSET UNITYSDK_OFFSET(0x1D8460F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0x1D845F30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDE_OFFSET UNITYSDK_OFFSET(0x1D845EE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_1_OFFSET UNITYSDK_OFFSET(0x1D8449C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1D8449B0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x1D845D30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D846050)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFOREBACK_OFFSET UNITYSDK_OFFSET(0x1D846CE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0x1D846D00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1D846D20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D8463F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1D846670)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x1D846CC0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D846390)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1D846690)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x1D846530)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1D846430)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1D8465B0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1D846410)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1D844DF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_QUERYPARAMETERINURL_OFFSET UNITYSDK_OFFSET(0x1D845A00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D846140)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREBACK_OFFSET UNITYSDK_OFFSET(0x1D845780)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0x1D845880)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1D845980)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D845580)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1D845480)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x1D845380)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x1D845280)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1D845180)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1D845080)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1D844F80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x1D845680)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D844E80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_RESTRICTVALUE_OFFSET UNITYSDK_OFFSET(0x1D846210)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0x1D846110)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1D845F60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x1D845F40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0x1D845F20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_1_OFFSET UNITYSDK_OFFSET(0x1D8460D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_2_OFFSET UNITYSDK_OFFSET(0x1D8460E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1D8460C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTJOYPADCLOSEENABLE_OFFSET UNITYSDK_OFFSET(0x1D846F50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x1D845F70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x1D845F50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAMESUPPORTDYNAMICDPI_OFFSET UNITYSDK_OFFSET(0x1D846340)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1D845F80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGAMEVOLUME_OFFSET UNITYSDK_OFFSET(0x1D846220)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENTAPPEND_OFFSET UNITYSDK_OFFSET(0x1D846010)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D845FF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNAVJOYPADICON_OFFSET UNITYSDK_OFFSET(0x1D846D50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1D846030)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1D845FA0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0x1D846330)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBVOLUME_OFFSET UNITYSDK_OFFSET(0x1D846150)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0x1D845F10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x1D846040)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x1D845E30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D846F60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_TypeDefinitionIndex = 37624;

	class MiHoYoSDKWebView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* id; // 0x18
		::System::String* webViewName; // 0x20
		::System::Boolean isHide; // 0x28
		::System::Boolean forceOffScreen; // 0x29
		::System::Boolean canOpenUseInnerWebViewByPerf; // 0x2A
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

		static ::MiHoYo::SDK::MiHoYoSDKWebView* Init_1(::System::String* url, ::System::Boolean forceOffScreen, ::System::Int32 options)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKWebView*(*)(::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_1_OFFSET))(url, forceOffScreen, options);
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

		static ::System::Void SetGlobalUserAgentAppend(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENTAPPEND_OFFSET))(content);
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
