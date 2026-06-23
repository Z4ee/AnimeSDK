#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Info_WebViewAnimationOptions.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MIHOYO_SDK_MIHOYOSDKINTERFACE_APPENDGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1ADFC2F0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_APPENDUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1ADFAF90)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_ASYNCINIT_OFFSET UNITYSDK_OFFSET(0x1ADFB7C0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_BACK_OFFSET UNITYSDK_OFFSET(0x1ADF8CC0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CALLJSFUNCTION_OFFSET UNITYSDK_OFFSET(0x1ADFF7E0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CALLJSPUBLISHFUNCTION_OFFSET UNITYSDK_OFFSET(0x1ADFFFD0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CANOPENUSEINNERWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1AE00EA0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0x1AE00980)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CLEARBGIMG_OFFSET UNITYSDK_OFFSET(0x1ADFF320)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x1ADFDC40)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1ADF7F00)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_DISABLEURLJUMP_OFFSET UNITYSDK_OFFSET(0x1AE00580)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_GETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1ADFB2D0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_GETNATIVESCREENINFO_OFFSET UNITYSDK_OFFSET(0x1AE00E60)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1ADFAAC0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDEBG_OFFSET UNITYSDK_OFFSET(0x1ADFEBC0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDENAVIGATIONBAR_OFFSET UNITYSDK_OFFSET(0x1ADF9530)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDE_OFFSET UNITYSDK_OFFSET(0x1ADF77A0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0x1ADF46C0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_ISUSINGLOCALCONFIG_OFFSET UNITYSDK_OFFSET(0x1ADF46B0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_LOAD_OFFSET UNITYSDK_OFFSET(0x1ADF6460)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1ADFCFF0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_REGISTERJSPOSTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AE00240)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETADJUSTDPIENABLE_OFFSET UNITYSDK_OFFSET(0x1AE00990)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x1ADFCA30)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBACKBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x1ADFC700)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBOUNCESENABLED_OFFSET UNITYSDK_OFFSET(0x1ADF93A0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_1_OFFSET UNITYSDK_OFFSET(0x1ADFE350)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_2_OFFSET UNITYSDK_OFFSET(0x1ADFE780)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1ADFDF10)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCURRENTJOYPADCLOSEENABLE_OFFSET UNITYSDK_OFFSET(0x1AE01810)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET UNITYSDK_OFFSET(0x1ADFCC00)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFORWARDBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x1ADFC810)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFRAMESUPPORTDYNAMICDPI_OFFSET UNITYSDK_OFFSET(0x1AE00E50)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1ADFA180)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETGLOBALUSERAGENTAPPEND_OFFSET UNITYSDK_OFFSET(0x1ADFC490)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETGLOBALUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1ADFB550)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETNAVJOYPADICON_OFFSET UNITYSDK_OFFSET(0x1AE00F80)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETNEWWINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1ADFCD80)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x1ADFAC70)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETWEBFEATURE_OFFSET UNITYSDK_OFFSET(0x1AE00820)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SETZOOMENABLED_OFFSET UNITYSDK_OFFSET(0x1ADF9210)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SHOWDEVTOOLS_OFFSET UNITYSDK_OFFSET(0x1ADFD7D0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE_SHOW_OFFSET UNITYSDK_OFFSET(0x1ADF6FF0)
#define MIHOYO_SDK_MIHOYOSDKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE01F60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKInterface_TypeDefinitionIndex = 36961;

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

		static ::System::Void Init(::System::String* name, ::System::Boolean forceOffScreen, ::MiHoYo::SDK::MHYSDKC_Info_WebViewAnimationOptions animationOptions)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::MiHoYo::SDK::MHYSDKC_Info_WebViewAnimationOptions))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_INIT_OFFSET))(name, forceOffScreen, animationOptions);
		}

		static ::System::Void Load(::System::String* name, ::System::String* url)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_LOAD_OFFSET))(name, url);
		}

		static ::System::Void Show(::System::String* name, ::System::Boolean affectOpenedWebs)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SHOW_OFFSET))(name, affectOpenedWebs);
		}

		static ::System::Void Hide(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDE_OFFSET))(name);
		}

		static ::System::Void Close(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CLOSE_OFFSET))(name);
		}

		static ::System::Void Back(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_BACK_OFFSET))(name);
		}

		static ::System::Void SetZoomEnabled(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETZOOMENABLED_OFFSET))(name, enabled);
		}

		static ::System::Void SetBouncesEnabled(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBOUNCESENABLED_OFFSET))(name, enabled);
		}

		static ::System::Void HideNavigationBar(::System::String* name, ::System::Boolean enabled, ::System::Boolean affectWebsBehindCurrentWebView, ::System::Boolean setFullScreenSize)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDENAVIGATIONBAR_OFFSET))(name, enabled, affectWebsBehindCurrentWebView, setFullScreenSize);
		}

		static ::System::Void SetFrame(::System::String* name, ::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFRAME_OFFSET))(name, x, y, width, height);
		}

		static ::System::String* GetUserAgent(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_GETUSERAGENT_OFFSET))(name);
		}

		static ::System::Void SetUserAgent(::System::String* name, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETUSERAGENT_OFFSET))(name, content);
		}

		static ::System::Void AppendUserAgent(::System::String* name, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_APPENDUSERAGENT_OFFSET))(name, content);
		}

		static ::System::String* GetGlobalUserAgent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_GETGLOBALUSERAGENT_OFFSET))();
		}

		static ::System::Void SetGlobalUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETGLOBALUSERAGENT_OFFSET))(content);
		}

		static ::System::Void AsyncInit(::System::Int32 simulateSeconds, ::System::Boolean simulateFailed)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_ASYNCINIT_OFFSET))(simulateSeconds, simulateFailed);
		}

		static ::System::Void AppendGlobalUserAgent(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_APPENDGLOBALUSERAGENT_OFFSET))(content);
		}

		static ::System::Void SetGlobalUserAgentAppend(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETGLOBALUSERAGENTAPPEND_OFFSET))(content);
		}

		static ::System::Void SetBackButtonEnabled(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBACKBUTTONENABLED_OFFSET))(name, enabled);
		}

		static ::System::Void SetForwardButtonEnabled(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFORWARDBUTTONENABLED_OFFSET))(name, enabled);
		}

		static ::System::Void SetBackButtonAction(::System::String* name, ::System::Func_1<::System::Boolean>* action)
		{
			return ((::System::Void(*)(::System::String*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETBACKBUTTONACTION_OFFSET))(name, action);
		}

		static ::System::Void SetCurrentWebviewAnimationEnable(::System::String* name, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCURRENTWEBVIEWANIMATIONENABLE_OFFSET))(name, enable);
		}

		static ::System::Void SetNewWindowType(::System::String* name, ::System::Int32 type)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETNEWWINDOWTYPE_OFFSET))(name, type);
		}

		static ::System::Void PreLoad(::System::String* env, ::System::String* gameBiz, ::System::Boolean runtimeCache)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_PRELOAD_OFFSET))(env, gameBiz, runtimeCache);
		}

		static ::System::Void ShowDevTools(::System::String* name, ::System::Boolean isShow)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SHOWDEVTOOLS_OFFSET))(name, isShow);
		}

		static ::System::Void ClearCookies(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CLEARCOOKIES_OFFSET))(name);
		}

		static ::System::Void SetCookies(::System::String* name, ::System::String* key, ::System::String* content, ::System::String* domain)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_OFFSET))(name, key, content, domain);
		}

		static ::System::Void SetCookies_1(::System::String* name, ::System::String* key, ::System::String* content, ::System::String* domain, ::System::String* expires)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_1_OFFSET))(name, key, content, domain, expires);
		}

		static ::System::Void SetCookies_2(::System::String* name, ::System::String* key, ::System::String* content, ::System::String* domain, ::System::Boolean secure, ::System::Boolean httpOnly)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCOOKIES_2_OFFSET))(name, key, content, domain, secure, httpOnly);
		}

		static ::System::Void HideBG(::System::String* name, ::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_HIDEBG_OFFSET))(name, flag);
		}

		static ::System::Void ClearBGImg(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CLEARBGIMG_OFFSET))(name);
		}

		static ::System::Void CallJSFunction(::System::String* name, ::System::String* method, ::System::String* jsonString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CALLJSFUNCTION_OFFSET))(name, method, jsonString, isDirectly);
		}

		static ::System::Void CallJSPublishFunction(::System::String* name, ::System::String* typeString, ::System::String* dataString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CALLJSPUBLISHFUNCTION_OFFSET))(name, typeString, dataString, isDirectly);
		}

		static ::System::Void RegisterJSPostMessage(::System::String* name, ::System::String* typeString, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_REGISTERJSPOSTMESSAGE_OFFSET))(name, typeString, callback);
		}

		static ::System::Void DisableUrlJump(::System::String* name, ::System::Boolean disable)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_DISABLEURLJUMP_OFFSET))(name, disable);
		}

		static ::System::Void SetWebFeature(::System::String* name, ::MiHoYo::SDK::WebFeature feature)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETWEBFEATURE_OFFSET))(name, feature);
		}

		static ::System::Void CheckPlatform()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CHECKPLATFORM_OFFSET))();
		}

		static ::System::Void SetAdjustDPIEnable(::System::String* name, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETADJUSTDPIENABLE_OFFSET))(name, enabled);
		}

		static ::System::Void SetFrameSupportDynamicDpi(::System::String* name, ::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETFRAMESUPPORTDYNAMICDPI_OFFSET))(name, x, y, width, height);
		}

		static ::System::String* GetNativeScreenInfo(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_GETNATIVESCREENINFO_OFFSET))(name);
		}

		static ::System::Boolean CanOpenUseInnerWebView(::System::String* activityId)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_CANOPENUSEINNERWEBVIEW_OFFSET))(activityId);
		}

		static ::System::Void SetNavJoypadIcon(::System::String* name, ::System::Boolean bEnable, ::System::Boolean bExchange, ::System::String* strJoypadType, ::System::String* strCloseBtnText)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETNAVJOYPADICON_OFFSET))(name, bEnable, bExchange, strJoypadType, strCloseBtnText);
		}

		static ::System::Void SetCurrentJoypadCloseEnable(::System::String* name, ::System::Boolean bEnable, ::System::Int32 nCloseBtnType)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKINTERFACE_SETCURRENTJOYPADCLOSEENABLE_OFFSET))(name, bEnable, nCloseBtnType);
		}
	};
}
