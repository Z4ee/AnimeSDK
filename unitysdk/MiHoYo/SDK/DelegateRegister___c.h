#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelCallbackType.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WeLing/SDK/GyroType.h"

namespace MiHoYo::SDK { class GameRoleModel; }
namespace MiHoYo::SDK { class GeetestView; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace MiHoYo::SDK { class SDKDelegate_DownloadDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GeNetworkAdapterDescriptionDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDiskFreeSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDriveTotalFreeSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDriveTotalSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetMacAddressDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetNetworkAdapterListDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetNetworkTypeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetRamRemainDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_InputFieldDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LoadAssetDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_NotificationDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGameControlReceiveDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGameRoleUpdateDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGyroEventDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGyroscopeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_SetAPMAgeGateDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_ShowTextDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_UnLoadAssetDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_UseRuntimeFontDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CallJSFunctionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CallJSPublishFunctionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ClearBGImgDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ClearCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CloseDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GeetestLoadURLDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideBGDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideNavigationBarDelegate; }
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
namespace MiHoYo::SDK { class WebDelegate_SetNewWindowTypeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetUrlQueryDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebFeatureDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebLinearDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetZoomEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowDevToolsDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowGeetestV4WebDelegate; }
namespace MiHoYo::SDK { class WebDelegate_UpdateJoypadControlDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_UnregisterCallbackDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_DELEGATEREGISTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFBBAB0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFBBAF0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERAPM_B__8_0_OFFSET UNITYSDK_OFFSET(0x1BFBFEE0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERHOYOCHANNELS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1BFBFE80)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x1BFBC920)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_10_OFFSET UNITYSDK_OFFSET(0x1BFBD990)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_11_OFFSET UNITYSDK_OFFSET(0x1BFBDA40)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_12_OFFSET UNITYSDK_OFFSET(0x1BFBDAF0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_13_OFFSET UNITYSDK_OFFSET(0x1BFBDB10)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_14_OFFSET UNITYSDK_OFFSET(0x1BFBDBE0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_15_OFFSET UNITYSDK_OFFSET(0x1BFBDC90)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_16_OFFSET UNITYSDK_OFFSET(0x1BFBDD40)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_17_OFFSET UNITYSDK_OFFSET(0x1BFBDDF0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_18_OFFSET UNITYSDK_OFFSET(0x1BFBDEA0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_19_OFFSET UNITYSDK_OFFSET(0x1BFBDF60)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_1_OFFSET UNITYSDK_OFFSET(0x1BFBCAE0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_20_OFFSET UNITYSDK_OFFSET(0x1BFBE010)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_21_OFFSET UNITYSDK_OFFSET(0x1BFBE0B0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_22_OFFSET UNITYSDK_OFFSET(0x1BFBE160)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_23_OFFSET UNITYSDK_OFFSET(0x1BFBE200)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_24_OFFSET UNITYSDK_OFFSET(0x1BFBE2B0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_25_OFFSET UNITYSDK_OFFSET(0x1BFBE380)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_26_OFFSET UNITYSDK_OFFSET(0x1BFBE420)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_27_OFFSET UNITYSDK_OFFSET(0x1BFBE4D0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_28_OFFSET UNITYSDK_OFFSET(0x1BFBE5A0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_29_OFFSET UNITYSDK_OFFSET(0x1BFBE670)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_2_OFFSET UNITYSDK_OFFSET(0x1BFBCCA0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_30_OFFSET UNITYSDK_OFFSET(0x1BFBE710)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_31_OFFSET UNITYSDK_OFFSET(0x1BFBEE20)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_32_OFFSET UNITYSDK_OFFSET(0x1BFBF190)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_33_OFFSET UNITYSDK_OFFSET(0x1BFBF1F0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_34_OFFSET UNITYSDK_OFFSET(0x1BFBF2A0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_35_OFFSET UNITYSDK_OFFSET(0x1BFBF300)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_36_OFFSET UNITYSDK_OFFSET(0x1BFBF360)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_37_OFFSET UNITYSDK_OFFSET(0x1BFBF410)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_38_OFFSET UNITYSDK_OFFSET(0x1BFBF4C0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_39_OFFSET UNITYSDK_OFFSET(0x1BFBF570)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_3_OFFSET UNITYSDK_OFFSET(0x1BFBCE60)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_40_OFFSET UNITYSDK_OFFSET(0x1BFBF5D0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_4_OFFSET UNITYSDK_OFFSET(0x1BFBD020)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_5_OFFSET UNITYSDK_OFFSET(0x1BFBD1E0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_6_OFFSET UNITYSDK_OFFSET(0x1BFBD3A0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_7_OFFSET UNITYSDK_OFFSET(0x1BFBD560)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_8_OFFSET UNITYSDK_OFFSET(0x1BFBD720)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_9_OFFSET UNITYSDK_OFFSET(0x1BFBD8E0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_0_OFFSET UNITYSDK_OFFSET(0x1BFBBB00)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_10_OFFSET UNITYSDK_OFFSET(0x1BFBC2D0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_11_OFFSET UNITYSDK_OFFSET(0x1BFBC350)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_12_OFFSET UNITYSDK_OFFSET(0x1BFBC410)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_13_OFFSET UNITYSDK_OFFSET(0x1BFBC490)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_14_OFFSET UNITYSDK_OFFSET(0x1BFBC510)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_15_OFFSET UNITYSDK_OFFSET(0x1BFBC5D0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_16_OFFSET UNITYSDK_OFFSET(0x1BFBC720)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_17_OFFSET UNITYSDK_OFFSET(0x1BFBC7E0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_18_OFFSET UNITYSDK_OFFSET(0x1BFBC870)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_1_OFFSET UNITYSDK_OFFSET(0x1BFBBBB0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_2_OFFSET UNITYSDK_OFFSET(0x1BFBBC60)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_3_OFFSET UNITYSDK_OFFSET(0x1BFBBD10)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_4_OFFSET UNITYSDK_OFFSET(0x1BFBBDF0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_5_OFFSET UNITYSDK_OFFSET(0x1BFBBE70)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_6_OFFSET UNITYSDK_OFFSET(0x1BFBBEE0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_7_OFFSET UNITYSDK_OFFSET(0x1BFBBFA0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_8_OFFSET UNITYSDK_OFFSET(0x1BFBC070)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_9_OFFSET UNITYSDK_OFFSET(0x1BFBC140)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c_TypeDefinitionIndex = 36652;

	class DelegateRegister___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SDKDelegate_GetNetworkTypeDelegate** StaticGet___9__0_13()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetNetworkTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D20);
		}
		static ::MiHoYo::SDK::WebDelegate_CloseDelegate** StaticGet___9__1_20()
		{
			return (::MiHoYo::SDK::WebDelegate_CloseDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D28);
		}
		static ::MiHoYo::SDK::WebDelegate_ShowDevToolsDelegate** StaticGet___9__1_10()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowDevToolsDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D30);
		}
		static ::MiHoYo::SDK::WebDelegate_SetUrlQueryDelegate** StaticGet___9__1_33()
		{
			return (::MiHoYo::SDK::WebDelegate_SetUrlQueryDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D38);
		}
		static ::MiHoYo::SDK::WebDelegate_SetUserAgentDelegate** StaticGet___9__1_12()
		{
			return (::MiHoYo::SDK::WebDelegate_SetUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D40);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageFinish** StaticGet___9__1_1()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageFinish**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D48);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewPopupBrowserCreate** StaticGet___9__1_8()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPopupBrowserCreate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D50);
		}
		static ::MiHoYo::SDK::WebDelegate_SetCurrentWebviewAnimationEnableDelegate** StaticGet___9__1_17()
		{
			return (::MiHoYo::SDK::WebDelegate_SetCurrentWebviewAnimationEnableDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D58);
		}
		static ::MiHoYo::SDK::WebDelegate_ShowGeetestV4WebDelegate** StaticGet___9__1_40()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowGeetestV4WebDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D60);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewNativeReady** StaticGet___9__1_5()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewNativeReady**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D68);
		}
		static ::MiHoYo::SDK::SDKDelegate_NotificationDelegate** StaticGet___9__0_1()
		{
			return (::MiHoYo::SDK::SDKDelegate_NotificationDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D70);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageError** StaticGet___9__1_2()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageError**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D78);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetNetworkAdapterListDelegate** StaticGet___9__0_12()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetNetworkAdapterListDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D80);
		}
		static ::MiHoYo::SDK::WebDelegate_HideBGDelegate** StaticGet___9__1_26()
		{
			return (::MiHoYo::SDK::WebDelegate_HideBGDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D88);
		}
		static ::MiHoYo::SDK::WebDelegate_SetForwardButtonEnabledDelegate** StaticGet___9__1_15()
		{
			return (::MiHoYo::SDK::WebDelegate_SetForwardButtonEnabledDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D90);
		}
		static ::MiHoYo::SDK::WebDelegate_ShowDelegate** StaticGet___9__1_22()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27D98);
		}
		static ::MiHoYo::SDK::SDKDelegate_SetAPMAgeGateDelegate** StaticGet___9__8_0()
		{
			return (::MiHoYo::SDK::SDKDelegate_SetAPMAgeGateDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DA0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetBackButtonActionDelegate** StaticGet___9__1_16()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBackButtonActionDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DA8);
		}
		static ::MiHoYo::SDK::WebDelegate_ClearCookiesDelegate** StaticGet___9__1_25()
		{
			return (::MiHoYo::SDK::WebDelegate_ClearCookiesDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DB0);
		}
		static ::MiHoYo::SDK::SDKDelegate_ShowTextDelegate** StaticGet___9__0_18()
		{
			return (::MiHoYo::SDK::SDKDelegate_ShowTextDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DB8);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDriveTotalFreeSpaceDelegate** StaticGet___9__0_8()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDriveTotalFreeSpaceDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DC0);
		}
		static ::MiHoYo::SDK::WebDelegate_CallJSFunctionDelegate** StaticGet___9__1_27()
		{
			return (::MiHoYo::SDK::WebDelegate_CallJSFunctionDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DC8);
		}
		static ::MiHoYo::SDK::SDKDelegate_UnLoadAssetDelegate** StaticGet___9__0_4()
		{
			return (::MiHoYo::SDK::SDKDelegate_UnLoadAssetDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DD0);
		}
		static ::MiHoYo::SDK::WebDelegate_HideDelegate** StaticGet___9__1_21()
		{
			return (::MiHoYo::SDK::WebDelegate_HideDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DD8);
		}
		static ::MiHoYo::SDK::WebDelegate_GeetestLoadURLDelegate** StaticGet___9__1_30()
		{
			return (::MiHoYo::SDK::WebDelegate_GeetestLoadURLDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DE0);
		}
		static ::MiHoYo::SDK::WebDelegate_CallJSPublishFunctionDelegate** StaticGet___9__1_28()
		{
			return (::MiHoYo::SDK::WebDelegate_CallJSPublishFunctionDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DE8);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetRamRemainDelegate** StaticGet___9__0_9()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetRamRemainDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DF0);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageClose** StaticGet___9__1_3()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageClose**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27DF8);
		}
		static ::MiHoYo::SDK::WebDelegate_SetCookiesDelegate** StaticGet___9__1_24()
		{
			return (::MiHoYo::SDK::WebDelegate_SetCookiesDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E00);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDriveTotalSpaceDelegate** StaticGet___9__0_7()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDriveTotalSpaceDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E08);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebCookiesDelegate** StaticGet___9__1_34()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebCookiesDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E10);
		}
		static ::MiHoYo::SDK::WebDelegate_SetFrameDelegate** StaticGet___9__1_13()
		{
			return (::MiHoYo::SDK::WebDelegate_SetFrameDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E18);
		}
		static ::MiHoYo::SDK::WebDelegate_ClearBGImgDelegate** StaticGet___9__1_29()
		{
			return (::MiHoYo::SDK::WebDelegate_ClearBGImgDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E20);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate** StaticGet___9__2_0()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E28);
		}
		static ::MiHoYo::SDK::WebDelegate_LoadDelegate** StaticGet___9__1_9()
		{
			return (::MiHoYo::SDK::WebDelegate_LoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E30);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnGameRoleUpdateDelegate** StaticGet___9__0_17()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGameRoleUpdateDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E38);
		}
		static ::MiHoYo::SDK::WebDelegate_QueryIsOffScreenRenderingDelegate** StaticGet___9__1_39()
		{
			return (::MiHoYo::SDK::WebDelegate_QueryIsOffScreenRenderingDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E40);
		}
		static ::MiHoYo::SDK::SDKDelegate_UseRuntimeFontDelegate** StaticGet___9__0_5()
		{
			return (::MiHoYo::SDK::SDKDelegate_UseRuntimeFontDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E48);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewBeforePageHide** StaticGet___9__1_4()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewBeforePageHide**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E50);
		}
		static ::MiHoYo::SDK::WebDelegate_RegisterJSPostMessageDelegate** StaticGet___9__1_37()
		{
			return (::MiHoYo::SDK::WebDelegate_RegisterJSPostMessageDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E58);
		}
		static ::MiHoYo::SDK::SDKDelegate_GeNetworkAdapterDescriptionDelegate** StaticGet___9__0_11()
		{
			return (::MiHoYo::SDK::SDKDelegate_GeNetworkAdapterDescriptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E60);
		}
		static ::MiHoYo::SDK::SDKDelegate_InputFieldDelegate** StaticGet___9__0_2()
		{
			return (::MiHoYo::SDK::SDKDelegate_InputFieldDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E68);
		}
		static ::MiHoYo::SDK::DelegateRegister___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::DelegateRegister___c**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E70);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnGyroEventDelegate** StaticGet___9__0_14()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGyroEventDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E78);
		}
		static ::MiHoYo::SDK::WebDelegate_RegisterGeetestViewDelegate** StaticGet___9__1_31()
		{
			return (::MiHoYo::SDK::WebDelegate_RegisterGeetestViewDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E80);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnGameControlReceiveDelegate** StaticGet___9__0_16()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGameControlReceiveDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E88);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDiskFreeSpaceDelegate** StaticGet___9__0_6()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskFreeSpaceDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E90);
		}
		static ::MiHoYo::SDK::WebDelegate_UpdateJoypadControlDelegate** StaticGet___9__1_35()
		{
			return (::MiHoYo::SDK::WebDelegate_UpdateJoypadControlDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27E98);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewBeforeNavigationMessageDelegate** StaticGet___9__1_7()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewBeforeNavigationMessageDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EA0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetAdjustDPIEnableDelegate** StaticGet___9__1_36()
		{
			return (::MiHoYo::SDK::WebDelegate_SetAdjustDPIEnableDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EA8);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebFeatureDelegate** StaticGet___9__1_38()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebFeatureDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EB0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebLinearDelegate** StaticGet___9__1_32()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebLinearDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EB8);
		}
		static ::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate** StaticGet___9__0_3()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EC0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetBouncesEnabledDelegate** StaticGet___9__1_19()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBouncesEnabledDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EC8);
		}
		static ::MiHoYo::SDK::WebDelegate_OnWebViewInputEnableStatus** StaticGet___9__1_6()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewInputEnableStatus**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27ED0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetNewWindowTypeDelegate** StaticGet___9__1_11()
		{
			return (::MiHoYo::SDK::WebDelegate_SetNewWindowTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27ED8);
		}
		static ::MiHoYo::SDK::WebDelegate_SetZoomEnabledDelegate** StaticGet___9__1_23()
		{
			return (::MiHoYo::SDK::WebDelegate_SetZoomEnabledDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EE0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetBackButtonEnabledDelegate** StaticGet___9__1_14()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBackButtonEnabledDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EE8);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetMacAddressDelegate** StaticGet___9__0_10()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetMacAddressDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EF0);
		}
		static ::MiHoYo::SDK::SDKDelegate_DownloadDelegate** StaticGet___9__0_0()
		{
			return (::MiHoYo::SDK::SDKDelegate_DownloadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27EF8);
		}
		static ::MiHoYo::SDK::WebDelegate_OnUniWebViewMessageDelegate** StaticGet___9__1_0()
		{
			return (::MiHoYo::SDK::WebDelegate_OnUniWebViewMessageDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27F00);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnGyroscopeDelegate** StaticGet___9__0_15()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGyroscopeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27F08);
		}
		static ::MiHoYo::SDK::WebDelegate_HideNavigationBarDelegate** StaticGet___9__1_18()
		{
			return (::MiHoYo::SDK::WebDelegate_HideNavigationBarDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___c_TypeDefinitionIndex)->GetStaticField(0x27F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Register_b__0_0(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_0_OFFSET))(this, message);
		}

		::System::Void _Register_b__0_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_1_OFFSET))(this, message);
		}

		::System::Void _Register_b__0_2(::UnityEngine::UI::InputField* inputField)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_2_OFFSET))(this, inputField);
		}

		::UnityEngine::Object* _Register_b__0_3(::System::String* path, ::System::Type* assetType)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_3_OFFSET))(this, path, assetType);
		}

		::System::Void _Register_b__0_4(::UnityEngine::Object* assetToUnload)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_4_OFFSET))(this, assetToUnload);
		}

		::System::Boolean _Register_b__0_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_5_OFFSET))(this);
		}

		::System::String* _Register_b__0_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_6_OFFSET))(this);
		}

		::System::Double _Register_b__0_7(::System::String* strDriveName)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_7_OFFSET))(this, strDriveName);
		}

		::System::Double _Register_b__0_8(::System::String* strDriveName)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_8_OFFSET))(this, strDriveName);
		}

		::System::Double _Register_b__0_9()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_9_OFFSET))(this);
		}

		::System::String* _Register_b__0_10()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_10_OFFSET))(this);
		}

		::System::String* _Register_b__0_11()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_11_OFFSET))(this);
		}

		::System::String* _Register_b__0_12()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_12_OFFSET))(this);
		}

		::System::String* _Register_b__0_13()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_13_OFFSET))(this);
		}

		::System::Void _Register_b__0_14(::WeLing::SDK::GyroType gyroType, ::Il2CppArray<::System::Single>* data)
		{
			return ((::System::Void(*)(::PVOID, ::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_14_OFFSET))(this, gyroType, data);
		}

		::System::Void _Register_b__0_15(::CloudGame::MailBox::GameControl::Gyroscope gyro)
		{
			return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_15_OFFSET))(this, gyro);
		}

		::System::Void _Register_b__0_16(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_16_OFFSET))(this, data);
		}

		::System::Void _Register_b__0_17(::MiHoYo::SDK::GameRoleModel* role)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GameRoleModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_17_OFFSET))(this, role);
		}

		::System::Void _Register_b__0_18(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_18_OFFSET))(this, message);
		}

		::System::Void _RegisterWebFunc_b__1_0(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_0_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_1(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_1_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_2(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_2_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_3(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_3_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_4(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_4_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_5(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_5_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_6(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_6_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_7(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_7_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_8(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_8_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_9(::System::Object* webView, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_9_OFFSET))(this, webView, url);
		}

		::System::Void _RegisterWebFunc_b__1_10(::System::Object* webView, ::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_10_OFFSET))(this, webView, isShow);
		}

		::System::Void _RegisterWebFunc_b__1_11(::System::Object* webView, ::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_11_OFFSET))(this, webView, type);
		}

		::System::Void _RegisterWebFunc_b__1_12(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_12_OFFSET))(this, content);
		}

		::System::Void _RegisterWebFunc_b__1_13(::System::Object* webView, ::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_13_OFFSET))(this, webView, x, y, width, height);
		}

		::System::Void _RegisterWebFunc_b__1_14(::System::Object* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_14_OFFSET))(this, webView, enabled);
		}

		::System::Void _RegisterWebFunc_b__1_15(::System::Object* webview, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_15_OFFSET))(this, webview, enable);
		}

		::System::Void _RegisterWebFunc_b__1_16(::System::Object* webview, ::System::Func_1<::System::Boolean>* backAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_16_OFFSET))(this, webview, backAction);
		}

		::System::Void _RegisterWebFunc_b__1_17(::System::Object* webview, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_17_OFFSET))(this, webview, enable);
		}

		::System::Void _RegisterWebFunc_b__1_18(::System::Object* webView, ::System::Boolean enabled, ::System::Boolean affectWebsBehindCurrentWebView, ::System::Boolean setFullScreenSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_18_OFFSET))(this, webView, enabled, affectWebsBehindCurrentWebView, setFullScreenSize);
		}

		::System::Void _RegisterWebFunc_b__1_19(::System::Object* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_19_OFFSET))(this, webView, enabled);
		}

		::System::Void _RegisterWebFunc_b__1_20(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_20_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_21(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_21_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_22(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_22_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_23(::System::Object* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_23_OFFSET))(this, webView, enabled);
		}

		::System::Void _RegisterWebFunc_b__1_24(::System::Object* webView, ::System::String* key, ::System::String* content, ::System::String* domain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_24_OFFSET))(this, webView, key, content, domain);
		}

		::System::Void _RegisterWebFunc_b__1_25(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_25_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_26(::System::Object* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_26_OFFSET))(this, webView, enabled);
		}

		::System::Void _RegisterWebFunc_b__1_27(::System::Object* webView, ::System::String* method, ::System::String* jsonString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_27_OFFSET))(this, webView, method, jsonString, isDirectly);
		}

		::System::Void _RegisterWebFunc_b__1_28(::System::Object* webView, ::System::String* typeString, ::System::String* dataString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_28_OFFSET))(this, webView, typeString, dataString, isDirectly);
		}

		::System::Void _RegisterWebFunc_b__1_29(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_29_OFFSET))(this, webView);
		}

		::System::Void _RegisterWebFunc_b__1_30(::MiHoYo::SDK::GeetestView* view, ::System::String* url, ::MiHoYo::SDK::MmtManager_GeetestModel* paramData)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::String*, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_30_OFFSET))(this, view, url, paramData);
		}

		::System::Void _RegisterWebFunc_b__1_31(::MiHoYo::SDK::GeetestView* view)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_31_OFFSET))(this, view);
		}

		::System::Void _RegisterWebFunc_b__1_32(::System::Boolean isLinear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_32_OFFSET))(this, isLinear);
		}

		::System::Void _RegisterWebFunc_b__1_33(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* query)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_33_OFFSET))(this, query);
		}

		::System::Void _RegisterWebFunc_b__1_34(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* cookies)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_34_OFFSET))(this, cookies);
		}

		::System::Void _RegisterWebFunc_b__1_35()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_35_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__1_36(::System::Object* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_36_OFFSET))(this, webView, enabled);
		}

		::System::Void _RegisterWebFunc_b__1_37(::System::Object* webView, ::System::String* typeString, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_37_OFFSET))(this, webView, typeString, callback);
		}

		::System::Void _RegisterWebFunc_b__1_38(::System::Object* webView, ::MiHoYo::SDK::WebFeature feature)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_38_OFFSET))(this, webView, feature);
		}

		::System::Boolean _RegisterWebFunc_b__1_39(::System::Boolean forceOffScreen)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_39_OFFSET))(this, forceOffScreen);
		}

		::System::Void _RegisterWebFunc_b__1_40(::System::Object* webView, ::System::String* url, ::System::Boolean enableScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_40_OFFSET))(this, webView, url, enableScale);
		}

		::System::Void _RegisterHoYoChannels_b__2_0(::MiHoYo::SDK::PC::OS::HoYoChannelCallbackType callbackType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCallbackType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERHOYOCHANNELS_B__2_0_OFFSET))(this, callbackType);
		}

		::System::Void _RegisterAPM_b__8_0(::System::Int32 enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERAPM_B__8_0_OFFSET))(this, enable);
		}
	};
}
