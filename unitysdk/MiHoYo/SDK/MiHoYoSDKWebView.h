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

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREBACK_OFFSET UNITYSDK_OFFSET(0xA1C2660)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0xA1C2760)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA1C2860)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1C2460)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0xA1C2360)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0xA1C2260)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0xA1C2160)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xA1C2060)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0xA1C1F60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0xA1C1E60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0xA1C2560)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1C1D60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1C30D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1C3080)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ASYNCINIT_OFFSET UNITYSDK_OFFSET(0xA1C3110)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_BACK_OFFSET UNITYSDK_OFFSET(0xA1C2F30)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0xA1C33F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0xA1C3400)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CANOPENUSEINNERWEBVIEW_OFFSET UNITYSDK_OFFSET(0xA1C3C00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0xA1C33D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0xA1C31F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLOSE_OFFSET UNITYSDK_OFFSET(0xA1C2F00)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1C30A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETNATIVESCREENINFO_OFFSET UNITYSDK_OFFSET(0xA1C3670)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1C3050)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDEBG_OFFSET UNITYSDK_OFFSET(0xA1C33C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0xA1C2F60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDE_OFFSET UNITYSDK_OFFSET(0xA1C2F10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_1_OFFSET UNITYSDK_OFFSET(0xA1C19D0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_OFFSET UNITYSDK_OFFSET(0xA1C19C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0xA1C2C50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA1C3140)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFOREBACK_OFFSET UNITYSDK_OFFSET(0xA1C3B50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0xA1C3B90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA1C3BD0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1C3720)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETNATIVEREADY_OFFSET UNITYSDK_OFFSET(0xA1C3AC0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0xA1C3B20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1C3680)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0xA1C3AF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0xA1C3880)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xA1C3780)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEERROR_OFFSET UNITYSDK_OFFSET(0xA1C3970)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEFINISH_OFFSET UNITYSDK_OFFSET(0xA1C3750)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_PRELOAD_OFFSET UNITYSDK_OFFSET(0xA1C1D50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_QUERYPARAMETERINURL_OFFSET UNITYSDK_OFFSET(0xA1C2960)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1C3410)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREBACK_OFFSET UNITYSDK_OFFSET(0xA1C26E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORECLOSE_OFFSET UNITYSDK_OFFSET(0xA1C27E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA1C28E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1C24E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0xA1C23E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0xA1C22E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0xA1C21E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xA1C20E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0xA1C1FE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0xA1C1EE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0xA1C25E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1C1DE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_RESTRICTVALUE_OFFSET UNITYSDK_OFFSET(0xA1C3480)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0xA1C33E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0xA1C2F90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0xA1C2F70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0xA1C2F50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_1_OFFSET UNITYSDK_OFFSET(0xA1C32E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_2_OFFSET UNITYSDK_OFFSET(0xA1C3350)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0xA1C3270)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTJOYPADCLOSEENABLE_OFFSET UNITYSDK_OFFSET(0xA1C3DB0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0xA1C2FA0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0xA1C2F80)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAMESUPPORTDYNAMICDPI_OFFSET UNITYSDK_OFFSET(0xA1C3660)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAME_OFFSET UNITYSDK_OFFSET(0xA1C3040)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGAMEVOLUME_OFFSET UNITYSDK_OFFSET(0xA1C34E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENTAPPEND_OFFSET UNITYSDK_OFFSET(0xA1C30F0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1C30B0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNAVJOYPADICON_OFFSET UNITYSDK_OFFSET(0xA1C3C10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA1C3120)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0xA1C3060)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0xA1C3600)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBVOLUME_OFFSET UNITYSDK_OFFSET(0xA1C3420)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0xA1C2F40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0xA1C3130)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0xA1C2E60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C3DC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_TypeDefinitionIndex = 43954;

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

		static ::MiHoYo::SDK::MiHoYoSDKWebView* Init(::System::String* a1, ::System::Int32 a2)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKWebView*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::MiHoYoSDKWebView* Init_1(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::MiHoYo::SDK::MiHoYoSDKWebView*(*)(::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_INIT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PreLoad(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_PRELOAD_OFFSET))(a1, a2, a3);
		}

		::System::Void add_OnUniWebViewMessage(::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnUniWebViewMessage(::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void add_OnPageFinish(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEFINISH_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageFinish(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEFINISH_OFFSET))(this, a1);
		}

		::System::Void add_OnPageError(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEERROR_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageError(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageError*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEERROR_OFFSET))(this, a1);
		}

		::System::Void add_OnPageClose(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageClose(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void add_OnPageBeforeHide(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPAGEBEFOREHIDE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageBeforeHide(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPAGEBEFOREHIDE_OFFSET))(this, a1);
		}

		::System::Void add_OnNativeReady(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONNATIVEREADY_OFFSET))(this, a1);
		}

		::System::Void remove_OnNativeReady(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewNativeReady*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONNATIVEREADY_OFFSET))(this, a1);
		}

		::System::Void add_OnInputEnableStatus(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONINPUTENABLESTATUS_OFFSET))(this, a1);
		}

		::System::Void remove_OnInputEnableStatus(::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewInputEnableStatus*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONINPUTENABLESTATUS_OFFSET))(this, a1);
		}

		::System::Void add_OnBeforeNavigationMessage(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnBeforeNavigationMessage(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void add_OnPopupBrowserCreate(::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONPOPUPBROWSERCREATE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPopupBrowserCreate(::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnPopupBrowserCreateDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONPOPUPBROWSERCREATE_OFFSET))(this, a1);
		}

		::System::Void add_OnBeforeBack(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREBACK_OFFSET))(this, a1);
		}

		::System::Void remove_OnBeforeBack(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeBackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREBACK_OFFSET))(this, a1);
		}

		::System::Void add_OnBeforeClose(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFORECLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnBeforeClose(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeCloseDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFORECLOSE_OFFSET))(this, a1);
		}

		::System::Void add_OnBeforeDestroy(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ADD_ONBEFOREDESTROY_OFFSET))(this, a1);
		}

		::System::Void remove_OnBeforeDestroy(::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView_OnBeforeDestroyDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REMOVE_ONBEFOREDESTROY_OFFSET))(this, a1);
		}

		static ::System::String* QueryParameterInUrl(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_QUERYPARAMETERINURL_OFFSET))(a1, a2);
		}

		::System::Void Load(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_LOAD_OFFSET))(this, a1);
		}

		::System::Void Show(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOW_OFFSET))(this, a1);
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

		::System::Void SetZoomEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETZOOMENABLED_OFFSET))(this, a1);
		}

		::System::Void SetBouncesEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBOUNCESENABLED_OFFSET))(this, a1);
		}

		::System::Void HideNavigationBar(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDENAVIGATIONBAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBackButtonEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONENABLED_OFFSET))(this, a1);
		}

		::System::Void SetForwardButtonEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFORWARDBUTTONENABLED_OFFSET))(this, a1);
		}

		::System::Void SetBackButtonAction(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETBACKBUTTONACTION_OFFSET))(this, a1);
		}

		::System::Void SetCurrentWebviewAnimationEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET))(this, a1);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetUserAgent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETUSERAGENT_OFFSET))(this);
		}

		::System::Void SetUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETUSERAGENT_OFFSET))(this, a1);
		}

		::System::Void AppendUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDUSERAGENT_OFFSET))(this, a1);
		}

		static ::System::String* GetGlobalUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETGLOBALUSERAGENT_OFFSET))();
		}

		static ::System::Void SetGlobalUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void AppendGlobalUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_APPENDGLOBALUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void SetGlobalUserAgentAppend(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGLOBALUSERAGENTAPPEND_OFFSET))(a1);
		}

		static ::System::Void AsyncInit(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ASYNCINIT_OFFSET))(a1, a2);
		}

		::System::Void SetNewWindowType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNEWWINDOWTYPE_OFFSET))(this, a1);
		}

		::System::Void ShowDevTools(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SHOWDEVTOOLS_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearCookies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARCOOKIES_OFFSET))(this);
		}

		::System::Void SetCookies(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCookies_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetCookies_2(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCOOKIES_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HideBG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_HIDEBG_OFFSET))(this, a1);
		}

		::System::Void ClearBGImg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CLEARBGIMG_OFFSET))(this);
		}

		::System::Void SetAdjustDPIEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETADJUSTDPIENABLE_OFFSET))(this, a1);
		}

		::System::Void CallJSFunction(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSFUNCTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CallJSPublishFunction(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CALLJSPUBLISHFUNCTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterJSPostMessage(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_REGISTERJSPOSTMESSAGE_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetWebVolume(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBVOLUME_OFFSET))(a1);
		}

		static ::System::Int32 RestrictValue(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_RESTRICTVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetGameVolume(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETGAMEVOLUME_OFFSET))(a1, a2, a3);
		}

		::System::Void SetWebFeature(::MiHoYo::SDK::WebFeature a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETWEBFEATURE_OFFSET))(this, a1);
		}

		::System::Void SetFrameSupportDynamicDpi(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETFRAMESUPPORTDYNAMICDPI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetNativeScreenInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_GETNATIVESCREENINFO_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnGetBeforeNavigationMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnGetWebViewPageFinish(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnGetWebViewPageClose(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnGetWebViewPageBeforeHide(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET))(this, a1);
		}

		::System::Void OnGetWebViewPageError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWPAGEERROR_OFFSET))(this, a1);
		}

		::System::Void OnGetNativeReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETNATIVEREADY_OFFSET))(this);
		}

		::System::Void OnGetWebViewInputEnableStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETWEBVIEWINPUTENABLESTATUS_OFFSET))(this, a1);
		}

		::System::Void OnGetPopupBrowserCreate(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONGETPOPUPBROWSERCREATE_OFFSET))(this, a1);
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

		static ::System::Boolean CanOpenUseInnerWebView(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_CANOPENUSEINNERWEBVIEW_OFFSET))(a1);
		}

		::System::Void SetNavJoypadIcon(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETNAVJOYPADICON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetCurrentJoypadCloseEnable(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_SETCURRENTJOYPADCLOSEENABLE_OFFSET))(this, a1, a2);
		}
	};
}
