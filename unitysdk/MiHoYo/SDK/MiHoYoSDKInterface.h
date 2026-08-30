#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Info_WebViewAnimationOptions.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_MIHOYOSDKINTERFACE_APPENDGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x19498080)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_APPENDUSERAGENT_OFFSET UNITYSDK_OFFSET(0x19496D70)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_ASYNCINIT_OFFSET UNITYSDK_OFFSET(0x19497760)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_BACK_OFFSET UNITYSDK_OFFSET(0x19495060)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0x19499FA0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0x1949A0C0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CANOPENUSEINNERWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1949A650)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0x1949A4F0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0x19499E90)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x19499530)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CLOSE_OFFSET UNITYSDK_OFFSET(0x19494410)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_DISABLEURLJUMP_OFFSET UNITYSDK_OFFSET(0x1949A360)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x194970B0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_GETNATIVESCREENINFO_OFFSET UNITYSDK_OFFSET(0x1949A640)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x19496740)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDEBG_OFFSET UNITYSDK_OFFSET(0x19499DB0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0x19495850)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDE_OFFSET UNITYSDK_OFFSET(0x19493D00)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0x19490970)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_ISUSINGLOCALCONFIG_OFFSET UNITYSDK_OFFSET(0x19490960)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_LOAD_OFFSET UNITYSDK_OFFSET(0x19492720)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_PRELOAD_OFFSET UNITYSDK_OFFSET(0x19498B70)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1949A1E0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0x1949A500)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x19498870)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x19498570)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0x19495650)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_1_OFFSET UNITYSDK_OFFSET(0x19499850)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_2_OFFSET UNITYSDK_OFFSET(0x19499B00)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x194995B0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCURRENTJOYPADCLOSEENABLE_OFFSET UNITYSDK_OFFSET(0x1949AE90)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x19498950)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x19498750)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFRAMESUPPORTDYNAMICDPI_OFFSET UNITYSDK_OFFSET(0x1949A630)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x19495F60)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETGLOBALUSERAGENTAPPEND_OFFSET UNITYSDK_OFFSET(0x19498280)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x19497470)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETNAVJOYPADICON_OFFSET UNITYSDK_OFFSET(0x1949A8B0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x194989F0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x19496A50)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0x1949A4A0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0x19495450)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x19499420)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SHOW_OFFSET UNITYSDK_OFFSET(0x19493310)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1949AF50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKInterface_TypeDefinitionIndex = 47050;

	class MiHoYoSDKInterface : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsUsingLocalConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_ISUSINGLOCALCONFIG_OFFSET))();
		}

		static ::System::Void Init(::System::String* a1, ::System::Boolean a2, ::MiHoYo::SDK::MHYSDKC_Info_WebViewAnimationOptions a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::MiHoYo::SDK::MHYSDKC_Info_WebViewAnimationOptions, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_INIT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Load(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_LOAD_OFFSET))(a1, a2);
		}

		static ::System::Void Show(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SHOW_OFFSET))(a1, a2);
		}

		static ::System::Void Hide(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDE_OFFSET))(a1);
		}

		static ::System::Void Close(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CLOSE_OFFSET))(a1);
		}

		static ::System::Void Back(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_BACK_OFFSET))(a1);
		}

		static ::System::Void SetZoomEnabled(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETZOOMENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void SetBouncesEnabled(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBOUNCESENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void HideNavigationBar(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDENAVIGATIONBAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetFrame(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFRAME_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetUserAgent(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_GETUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void SetUserAgent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETUSERAGENT_OFFSET))(a1, a2);
		}

		static ::System::Void AppendUserAgent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_APPENDUSERAGENT_OFFSET))(a1, a2);
		}

		static ::System::String* GetGlobalUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_GETGLOBALUSERAGENT_OFFSET))();
		}

		static ::System::Void SetGlobalUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETGLOBALUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void AsyncInit(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_ASYNCINIT_OFFSET))(a1, a2);
		}

		static ::System::Void AppendGlobalUserAgent(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_APPENDGLOBALUSERAGENT_OFFSET))(a1);
		}

		static ::System::Void SetGlobalUserAgentAppend(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETGLOBALUSERAGENTAPPEND_OFFSET))(a1);
		}

		static ::System::Void SetBackButtonEnabled(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBACKBUTTONENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void SetForwardButtonEnabled(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFORWARDBUTTONENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void SetBackButtonAction(::System::String* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBACKBUTTONACTION_OFFSET))(a1, a2);
		}

		static ::System::Void SetCurrentWebviewAnimationEnable(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET))(a1, a2);
		}

		static ::System::Void SetNewWindowType(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETNEWWINDOWTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void PreLoad(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_PRELOAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowDevTools(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SHOWDEVTOOLS_OFFSET))(a1, a2);
		}

		static ::System::Void ClearCookies(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CLEARCOOKIES_OFFSET))(a1);
		}

		static ::System::Void SetCookies(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetCookies_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetCookies_2(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void HideBG(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDEBG_OFFSET))(a1, a2);
		}

		static ::System::Void ClearBGImg(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CLEARBGIMG_OFFSET))(a1);
		}

		static ::System::Void CallJSFunction(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CALLJSFUNCTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CallJSPublishFunction(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CALLJSPUBLISHFUNCTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RegisterJSPostMessage(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_REGISTERJSPOSTMESSAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DisableUrlJump(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_DISABLEURLJUMP_OFFSET))(a1, a2);
		}

		static ::System::Void SetWebFeature(::System::String* a1, ::MiHoYo::SDK::WebFeature a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETWEBFEATURE_OFFSET))(a1, a2);
		}

		static ::System::Void CheckPlatform()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CHECKPLATFORM_OFFSET))();
		}

		static ::System::Void SetAdjustDPIEnable(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETADJUSTDPIENABLE_OFFSET))(a1, a2);
		}

		static ::System::Void SetFrameSupportDynamicDpi(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFRAMESUPPORTDYNAMICDPI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetNativeScreenInfo(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_GETNATIVESCREENINFO_OFFSET))(a1);
		}

		static ::System::Boolean CanOpenUseInnerWebView(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CANOPENUSEINNERWEBVIEW_OFFSET))(a1);
		}

		static ::System::Void SetNavJoypadIcon(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETNAVJOYPADICON_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetCurrentJoypadCloseEnable(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCURRENTJOYPADCLOSEENABLE_OFFSET))(a1, a2, a3);
		}
	};
}
