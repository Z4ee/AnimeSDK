#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class WebDelegate_CallJSFunctionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CallJSPublishFunctionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ClearBGImgDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ClearCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CloseDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GeetestLoadURLDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetGlobalUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideBGDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideNavigationBarDelegate; }
namespace MiHoYo::SDK { class WebDelegate_InitDelegate; }
namespace MiHoYo::SDK { class WebDelegate_LoadDelegate; }
namespace MiHoYo::SDK { class WebDelegate_OnUniWebViewMessageDelegate; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewBeforeNavigationMessageDelegate; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewBeforePageHide; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewInputEnableStatus; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewNativeReady; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewPageClose; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewPageError; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewPageFinish; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewPopupBrowserCreate; }
namespace MiHoYo::SDK { class WebDelegate_PreLoadDelegate; }
namespace MiHoYo::SDK { class WebDelegate_QueryIsOffScreenRenderingDelegate; }
namespace MiHoYo::SDK { class WebDelegate_RegisterGeetestViewDelegate; }
namespace MiHoYo::SDK { class WebDelegate_RegisterJSPostMessageDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetAdjustDPIEnableDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetBackButtonActionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetBackButtonEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetBouncesEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetCurrentWebviewAnimationEnableDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetForwardButtonEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetFrameDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetGameVolumeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetGlobalUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetNewWindowTypeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetUrlQueryDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebAnimationEnableDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebFeatureDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebLinearDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebVolumeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetZoomEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowDevToolsDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowGeetestV4WebDelegate; }
namespace MiHoYo::SDK { class WebDelegate_UpdateJoypadControlDelegate; }

#define MIHOYO_SDK_WEBDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176A4B70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_TypeDefinitionIndex = 6855;

	class WebDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate** StaticGet_GetUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17DC0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetUrlQueryDelegate** StaticGet_SetWebUrlQuery()
		{
			return (::MiHoYo::SDK::WebDelegate_SetUrlQueryDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17DC8);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewNativeReady** StaticGet_OnNativeReady()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewNativeReady**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17DD0);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageError** StaticGet_OnPageError()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageError**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17DD8);
		}
		static ::MiHoYo::SDK::WebDelegate_CallJSFunctionDelegate** StaticGet_CallJSFunction()
		{
			return (::MiHoYo::SDK::WebDelegate_CallJSFunctionDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17DE0);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageClose** StaticGet_OnPageClose()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageClose**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17DE8);
		}
		static ::MiHoYo::SDK::WebDelegate_CloseDelegate** StaticGet_Close()
		{
			return (::MiHoYo::SDK::WebDelegate_CloseDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17DF0);
		}
		static ::MiHoYo::SDK::WebDelegate_HideBGDelegate** StaticGet_HideBG()
		{
			return (::MiHoYo::SDK::WebDelegate_HideBGDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17DF8);
		}
		static ::MiHoYo::SDK::WebDelegate_ShowGeetestV4WebDelegate** StaticGet_ShowGeetestV4Web()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowGeetestV4WebDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E00);
		}
		static ::MiHoYo::SDK::WebDelegate_SetCookiesDelegate** StaticGet_SetCookies()
		{
			return (::MiHoYo::SDK::WebDelegate_SetCookiesDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E08);
		}
		static ::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate** StaticGet_SetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E10);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewBeforeNavigationMessageDelegate** StaticGet_OnBeforeNavigationMessage()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewBeforeNavigationMessageDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E18);
		}
		static ::MiHoYo::SDK::WebDelegate_SetBouncesEnabledDelegate** StaticGet_SetBouncesEnabled()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBouncesEnabledDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E20);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebFeatureDelegate** StaticGet_SetWebFeature()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebFeatureDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E28);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewInputEnableStatus** StaticGet_OnInputEnableStatus()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewInputEnableStatus**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E30);
		}
		static ::MiHoYo::SDK::WebDelegate_PreLoadDelegate** StaticGet_PreLoad()
		{
			return (::MiHoYo::SDK::WebDelegate_PreLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E38);
		}
		static ::MiHoYo::SDK::WebDelegate_SetBackButtonActionDelegate** StaticGet_SetBackButtonAction()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBackButtonActionDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E40);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebCookiesDelegate** StaticGet_SetWebCookies()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebCookiesDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E48);
		}
		static ::MiHoYo::SDK::WebDelegate_SetFrameDelegate** StaticGet_SetFrame()
		{
			return (::MiHoYo::SDK::WebDelegate_SetFrameDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E50);
		}
		static ::MiHoYo::SDK::WebDelegate_SetForwardButtonEnabledDelegate** StaticGet_SetForwardButtonEnabled()
		{
			return (::MiHoYo::SDK::WebDelegate_SetForwardButtonEnabledDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E58);
		}
		static ::MiHoYo::SDK::WebDelegate_ShowDevToolsDelegate** StaticGet_ShowDevTools()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowDevToolsDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E60);
		}
		static ::MiHoYo::SDK::WebDelegate_SetBackButtonEnabledDelegate** StaticGet_SetBackButtonEnabled()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBackButtonEnabledDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E68);
		}
		static ::MiHoYo::SDK::WebDelegate_GeetestLoadURLDelegate** StaticGet_GeetestLoadURL()
		{
			return (::MiHoYo::SDK::WebDelegate_GeetestLoadURLDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E70);
		}
		static ::MiHoYo::SDK::WebDelegate_UpdateJoypadControlDelegate** StaticGet_UpdateJoypadControl()
		{
			return (::MiHoYo::SDK::WebDelegate_UpdateJoypadControlDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E78);
		}
		static ::MiHoYo::SDK::WebDelegate_RegisterGeetestViewDelegate** StaticGet_RegisterGeetestView()
		{
			return (::MiHoYo::SDK::WebDelegate_RegisterGeetestViewDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E80);
		}
		static ::MiHoYo::SDK::WebDelegate_LoadDelegate** StaticGet_Load()
		{
			return (::MiHoYo::SDK::WebDelegate_LoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E88);
		}
		static ::MiHoYo::SDK::WebDelegate_CallJSPublishFunctionDelegate** StaticGet_CallJSPublishFunction()
		{
			return (::MiHoYo::SDK::WebDelegate_CallJSPublishFunctionDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E90);
		}
		static ::MiHoYo::SDK::WebDelegate_HideDelegate** StaticGet_Hide()
		{
			return (::MiHoYo::SDK::WebDelegate_HideDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17E98);
		}
		static ::MiHoYo::SDK::WebDelegate_RegisterJSPostMessageDelegate** StaticGet_RegisterJSPostMessage()
		{
			return (::MiHoYo::SDK::WebDelegate_RegisterJSPostMessageDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EA0);
		}
		static ::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate** StaticGet_GetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EA8);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate** StaticGet_SetWebVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EB0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate** StaticGet_SetGameVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EB8);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewBeforePageHide** StaticGet_OnPageBeforeHide()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewBeforePageHide**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EC0);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewPopupBrowserCreate** StaticGet_OnPopupBrowserCreate()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPopupBrowserCreate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EC8);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebLinearDelegate** StaticGet_SetWebLinear()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebLinearDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17ED0);
		}
		static ::MiHoYo::SDK::WebDelegate_ClearCookiesDelegate** StaticGet_ClearCookies()
		{
			return (::MiHoYo::SDK::WebDelegate_ClearCookiesDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17ED8);
		}
		static ::MiHoYo::SDK::WebDelegate_SetCurrentWebviewAnimationEnableDelegate** StaticGet_SetCurrentWebviewAnimationEnable()
		{
			return (::MiHoYo::SDK::WebDelegate_SetCurrentWebviewAnimationEnableDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EE0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetAdjustDPIEnableDelegate** StaticGet_SetAdjustDPIEnable()
		{
			return (::MiHoYo::SDK::WebDelegate_SetAdjustDPIEnableDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EE8);
		}
		static ::MiHoYo::SDK::WebDelegate_SetUserAgentDelegate** StaticGet_SetUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_SetUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EF0);
		}
		static ::MiHoYo::SDK::WebDelegate_ShowDelegate** StaticGet_Show()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17EF8);
		}
		static ::MiHoYo::SDK::WebDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::WebDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F00);
		}
		static ::MiHoYo::SDK::WebDelegate_SetZoomEnabledDelegate** StaticGet_SetZoomEnabled()
		{
			return (::MiHoYo::SDK::WebDelegate_SetZoomEnabledDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F08);
		}
		static ::MiHoYo::SDK::WebDelegate_OnUniWebViewMessageDelegate** StaticGet_OnUniWebViewMessage()
		{
			return (::MiHoYo::SDK::WebDelegate_OnUniWebViewMessageDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F10);
		}
		static ::MiHoYo::SDK::WebDelegate_SetNewWindowTypeDelegate** StaticGet_SetNewWindowType()
		{
			return (::MiHoYo::SDK::WebDelegate_SetNewWindowTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F18);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageFinish** StaticGet_OnPageFinish()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageFinish**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F20);
		}
		static ::MiHoYo::SDK::WebDelegate_HideNavigationBarDelegate** StaticGet_HideNavigationBar()
		{
			return (::MiHoYo::SDK::WebDelegate_HideNavigationBarDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F28);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebAnimationEnableDelegate** StaticGet_SetWebAnimationEnable()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebAnimationEnableDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F30);
		}
		static ::MiHoYo::SDK::WebDelegate_ClearBGImgDelegate** StaticGet_ClearBGImg()
		{
			return (::MiHoYo::SDK::WebDelegate_ClearBGImgDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F38);
		}
		static ::MiHoYo::SDK::WebDelegate_QueryIsOffScreenRenderingDelegate** StaticGet_QueryIsOffScreenRendering()
		{
			return (::MiHoYo::SDK::WebDelegate_QueryIsOffScreenRenderingDelegate**)Il2CppClass::FromTypeDefinitionIndex(WebDelegate_TypeDefinitionIndex)->GetStaticField(0x17F40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
