#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web_OnUniWebViewMessageDelegate; }
namespace MiHoYo::SDK { class Web_OnWebViewBeforeNavigationMessage; }
namespace MiHoYo::SDK { class Web_OnWebViewInputEnableStatus; }
namespace MiHoYo::SDK { class Web_OnWebViewNativeReady; }
namespace MiHoYo::SDK { class Web_OnWebViewPageBeforeHide; }
namespace MiHoYo::SDK { class Web_OnWebViewPageClose; }
namespace MiHoYo::SDK { class Web_OnWebViewPageError; }
namespace MiHoYo::SDK { class Web_OnWebViewPageFinish; }
namespace MiHoYo::SDK { class Web_OnWebViewPopupBrowserCreate; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WEB_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x18461C00)
#define MIHOYO_SDK_WEB_ADD_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x18461B00)
#define MIHOYO_SDK_WEB_ADD_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x18461A00)
#define MIHOYO_SDK_WEB_ADD_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x18461900)
#define MIHOYO_SDK_WEB_ADD_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x18461800)
#define MIHOYO_SDK_WEB_ADD_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x18461700)
#define MIHOYO_SDK_WEB_ADD_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x18461600)
#define MIHOYO_SDK_WEB_ADD_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x18461D00)
#define MIHOYO_SDK_WEB_ADD_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x18461500)
#define MIHOYO_SDK_WEB_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0x184626E0)
#define MIHOYO_SDK_WEB_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0x18462660)
#define MIHOYO_SDK_WEB_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0x18462610)
#define MIHOYO_SDK_WEB_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x184622F0)
#define MIHOYO_SDK_WEB_CLOSE_OFFSET UNITYSDK_OFFSET(0x18461EF0)
#define MIHOYO_SDK_WEB_DISABLEINPUT_OFFSET UNITYSDK_OFFSET(0x184629F0)
#define MIHOYO_SDK_WEB_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x184621C0)
#define MIHOYO_SDK_WEB_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x18462140)
#define MIHOYO_SDK_WEB_HIDEBG_OFFSET UNITYSDK_OFFSET(0x184625C0)
#define MIHOYO_SDK_WEB_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0x18461FE0)
#define MIHOYO_SDK_WEB_HIDE_OFFSET UNITYSDK_OFFSET(0x18461EA0)
#define MIHOYO_SDK_WEB_INIT_OFFSET UNITYSDK_OFFSET(0x18461210)
#define MIHOYO_SDK_WEB_LOAD_OFFSET UNITYSDK_OFFSET(0x18461E00)
#define MIHOYO_SDK_WEB_ONGETBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x18462590)
#define MIHOYO_SDK_WEB_ONGETINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x184624C0)
#define MIHOYO_SDK_WEB_ONGETNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x18462490)
#define MIHOYO_SDK_WEB_ONGETPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x18462560)
#define MIHOYO_SDK_WEB_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x18462340)
#define MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x18462460)
#define MIHOYO_SDK_WEB_ONGETWEBVIEWPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x18462430)
#define MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEERROR_OFFSET UNITYSDK_OFFSET(0x184624F0)
#define MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x18462400)
#define MIHOYO_SDK_WEB_PRELOAD_OFFSET UNITYSDK_OFFSET(0x184614A0)
#define MIHOYO_SDK_WEB_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x18462760)
#define MIHOYO_SDK_WEB_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x18461C80)
#define MIHOYO_SDK_WEB_REMOVE_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x18461B80)
#define MIHOYO_SDK_WEB_REMOVE_ONNATIVEREADY_OFFSET UNITYSDK_OFFSET(0x18461A80)
#define MIHOYO_SDK_WEB_REMOVE_ONPAGEBEFOREHIDE_OFFSET UNITYSDK_OFFSET(0x18461980)
#define MIHOYO_SDK_WEB_REMOVE_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x18461880)
#define MIHOYO_SDK_WEB_REMOVE_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x18461780)
#define MIHOYO_SDK_WEB_REMOVE_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x18461680)
#define MIHOYO_SDK_WEB_REMOVE_ONPOPUPBROWSERCREATE_OFFSET UNITYSDK_OFFSET(0x18461D80)
#define MIHOYO_SDK_WEB_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x18461580)
#define MIHOYO_SDK_WEB_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0x18462BF0)
#define MIHOYO_SDK_WEB_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x18462810)
#define MIHOYO_SDK_WEB_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x18462060)
#define MIHOYO_SDK_WEB_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0x18461F90)
#define MIHOYO_SDK_WEB_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x18462B70)
#define MIHOYO_SDK_WEB_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x18462860)
#define MIHOYO_SDK_WEB_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x184627C0)
#define MIHOYO_SDK_WEB_SETFRAME_OFFSET UNITYSDK_OFFSET(0x184620B0)
#define MIHOYO_SDK_WEB_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x18462200)
#define MIHOYO_SDK_WEB_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18462250)
#define MIHOYO_SDK_WEB_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x18462180)
#define MIHOYO_SDK_WEB_SETWEBANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x18462900)
#define MIHOYO_SDK_WEB_SETWEBCOOKIES_OFFSET UNITYSDK_OFFSET(0x184629A0)
#define MIHOYO_SDK_WEB_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0x184628B0)
#define MIHOYO_SDK_WEB_SETWEBURLQUERY_OFFSET UNITYSDK_OFFSET(0x18462950)
#define MIHOYO_SDK_WEB_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0x18461F40)
#define MIHOYO_SDK_WEB_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x184622A0)
#define MIHOYO_SDK_WEB_SHOW_OFFSET UNITYSDK_OFFSET(0x18461E50)
#define MIHOYO_SDK_WEB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18461150)
#define MIHOYO_SDK_WEB__CTOR_2_OFFSET UNITYSDK_OFFSET(0x184611C0)
#define MIHOYO_SDK_WEB__CTOR_OFFSET UNITYSDK_OFFSET(0x18461140)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_TypeDefinitionIndex = 8154;

	class Web : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web_OnWebViewNativeReady* OnNativeReady; // 0x10
		::MiHoYo::SDK::Web_OnWebViewPageFinish* OnPageFinish; // 0x18
		::MiHoYo::SDK::Web_OnWebViewPageError* OnPageError; // 0x20
		::MiHoYo::SDK::Web_OnWebViewPageBeforeHide* OnPageBeforeHide; // 0x28
		::System::Object* webView; // 0x30
		::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate* OnUniWebViewMessage; // 0x38
		::MiHoYo::SDK::Web_OnWebViewPageClose* OnPageClose; // 0x40
		::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage* OnBeforeNavigationMessage; // 0x48
		::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate* OnPopupBrowserCreate; // 0x50
		::MiHoYo::SDK::Web_OnWebViewInputEnableStatus* OnInputEnableStatus; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::MiHoYo::SDK::Web* Init(::System::String* a1, ::System::Boolean a2)
		{
			return ((::MiHoYo::SDK::Web*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_INIT_OFFSET))(a1, a2);
		}

		static ::System::Void PreLoad(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_PRELOAD_OFFSET))(a1, a2, a3);
		}

		::System::Void add_OnUniWebViewMessage(::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnUniWebViewMessage(::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void add_OnPageFinish(::MiHoYo::SDK::Web_OnWebViewPageFinish* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageFinish*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPAGEFINISH_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageFinish(::MiHoYo::SDK::Web_OnWebViewPageFinish* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageFinish*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPAGEFINISH_OFFSET))(this, a1);
		}

		::System::Void add_OnPageError(::MiHoYo::SDK::Web_OnWebViewPageError* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageError*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPAGEERROR_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageError(::MiHoYo::SDK::Web_OnWebViewPageError* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageError*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPAGEERROR_OFFSET))(this, a1);
		}

		::System::Void add_OnPageClose(::MiHoYo::SDK::Web_OnWebViewPageClose* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageClose*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageClose(::MiHoYo::SDK::Web_OnWebViewPageClose* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageClose*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void add_OnPageBeforeHide(::MiHoYo::SDK::Web_OnWebViewPageBeforeHide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageBeforeHide*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPAGEBEFOREHIDE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPageBeforeHide(::MiHoYo::SDK::Web_OnWebViewPageBeforeHide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPageBeforeHide*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPAGEBEFOREHIDE_OFFSET))(this, a1);
		}

		::System::Void add_OnNativeReady(::MiHoYo::SDK::Web_OnWebViewNativeReady* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewNativeReady*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONNATIVEREADY_OFFSET))(this, a1);
		}

		::System::Void remove_OnNativeReady(::MiHoYo::SDK::Web_OnWebViewNativeReady* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewNativeReady*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONNATIVEREADY_OFFSET))(this, a1);
		}

		::System::Void add_OnInputEnableStatus(::MiHoYo::SDK::Web_OnWebViewInputEnableStatus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewInputEnableStatus*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONINPUTENABLESTATUS_OFFSET))(this, a1);
		}

		::System::Void remove_OnInputEnableStatus(::MiHoYo::SDK::Web_OnWebViewInputEnableStatus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewInputEnableStatus*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONINPUTENABLESTATUS_OFFSET))(this, a1);
		}

		::System::Void add_OnBeforeNavigationMessage(::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnBeforeNavigationMessage(::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewBeforeNavigationMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void add_OnPopupBrowserCreate(::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ADD_ONPOPUPBROWSERCREATE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPopupBrowserCreate(::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web_OnWebViewPopupBrowserCreate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REMOVE_ONPOPUPBROWSERCREATE_OFFSET))(this, a1);
		}

		::System::Void Load(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_LOAD_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_HIDE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CLOSE_OFFSET))(this);
		}

		::System::Void SetZoomEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETZOOMENABLED_OFFSET))(this, a1);
		}

		::System::Void SetBouncesEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETBOUNCESENABLED_OFFSET))(this, a1);
		}

		::System::Void HideNavigationBar(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_HIDENAVIGATIONBAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBackButtonEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETBACKBUTTONENABLED_OFFSET))(this, a1);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETFRAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetUserAgent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_GETUSERAGENT_OFFSET))(this);
		}

		::System::Void SetUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETUSERAGENT_OFFSET))(this, a1);
		}

		static ::System::String* GetGlobalUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_GETGLOBALUSERAGENT_OFFSET))();
		}

		static ::System::Void SetGlobalUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETGLOBALUSERAGENT_OFFSET))(a1);
		}

		::System::Void SetNewWindowType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETNEWWINDOWTYPE_OFFSET))(this, a1);
		}

		::System::Void ShowDevTools(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SHOWDEVTOOLS_OFFSET))(this, a1);
		}

		::System::Void ClearCookies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CLEARCOOKIES_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnGetWebViewPageFinish(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnGetWebViewPageClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETWEBVIEWPAGECLOSE_OFFSET))(this);
		}

		::System::Void OnGetWebViewPageBeforeHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEBEFOREHIDE_OFFSET))(this);
		}

		::System::Void OnGetNativeReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETNATIVEREADY_OFFSET))(this);
		}

		::System::Void OnGetInputEnableStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETINPUTENABLESTATUS_OFFSET))(this, a1);
		}

		::System::Void OnGetWebViewPageError(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETWEBVIEWPAGEERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGetPopupBrowserCreate(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETPOPUPBROWSERCREATE_OFFSET))(this, a1);
		}

		::System::Void OnGetBeforeNavigationMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONGETBEFORENAVIGATIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void HideBG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_HIDEBG_OFFSET))(this, a1);
		}

		::System::Void ClearBGImg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CLEARBGIMG_OFFSET))(this);
		}

		::System::Void CallJSPublishFunction(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CALLJSPUBLISHFUNCTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CallJSFunction(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_CALLJSFUNCTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterJSPostMessage(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_REGISTERJSPOSTMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void SetForwardButtonEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETFORWARDBUTTONENABLED_OFFSET))(this, a1);
		}

		::System::Void SetBackButtonAction(::System::Func_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETBACKBUTTONACTION_OFFSET))(this, a1);
		}

		::System::Void SetCurrentWebviewAnimationEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET))(this, a1);
		}

		::System::Void SetWebFeature(::MiHoYo::SDK::WebFeature a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETWEBFEATURE_OFFSET))(this, a1);
		}

		::System::Void SetWebAnimationEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETWEBANIMATIONENABLE_OFFSET))(this, a1);
		}

		static ::System::Void SetWebUrlQuery(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETWEBURLQUERY_OFFSET))(a1);
		}

		static ::System::Void SetWebCookies(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETWEBCOOKIES_OFFSET))(a1);
		}

		static ::System::Void DisableInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_DISABLEINPUT_OFFSET))();
		}

		::System::Void SetCookies(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETCOOKIES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAdjustDPIEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_SETADJUSTDPIENABLE_OFFSET))(this, a1);
		}
	};
}
