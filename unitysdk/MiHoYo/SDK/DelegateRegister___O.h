#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_GetProcessWndDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKInitDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKLoginDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKLogoutDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKPayDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKStartHeartbeatDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKUnInitDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_CheckEntitlementsDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_GetProductListDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_InitDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_IsEOSChannelDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_LogReportEpicDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_LoginDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_PayDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_QueryEOSProductDelegate; }
namespace MiHoYo::SDK { class EOSDelegate_SetCmdLineDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_AsbPathDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDiskTypeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_IsEditorDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LoadFileDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LogDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_ResourcePathDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_SecuritySetLoginResultDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_WebEventDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_WebViewAnimationEnable; }
namespace MiHoYo::SDK { class SDKDelegate_WebViewJoypadCloseEnable; }
namespace MiHoYo::SDK { class TelemetryDelegate_InitDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_ReportToDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_ReportToKibanaDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_SetConfigDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StartDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StartKibanaDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StopDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StopKibanaDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetGlobalUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_InitDelegate; }
namespace MiHoYo::SDK { class WebDelegate_PreLoadDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetGameVolumeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetGlobalUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebVolumeDelegate; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___O_TypeDefinitionIndex = 37026;

	class DelegateRegister___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate** StaticGet__15___SetWebVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xD9D0);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable** StaticGet__8___SetJoypadCloseEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xD9D8);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate** StaticGet__39___StopKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xD9E0);
		}
		static ::MiHoYo::SDK::EOSDelegate_InitDelegate** StaticGet__17___InitSDK()
		{
			return (::MiHoYo::SDK::EOSDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xD9E8);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable** StaticGet__7___SetAnimationEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xD9F0);
		}
		static ::MiHoYo::SDK::EOSDelegate_QueryEOSProductDelegate** StaticGet__19___QueryProducts()
		{
			return (::MiHoYo::SDK::EOSDelegate_QueryEOSProductDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xD9F8);
		}
		static ::MiHoYo::SDK::EOSDelegate_LoginDelegate** StaticGet__20___Login()
		{
			return (::MiHoYo::SDK::EOSDelegate_LoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA00);
		}
		static ::MiHoYo::SDK::EOSDelegate_CheckEntitlementsDelegate** StaticGet__22___CheckoutEntitlements()
		{
			return (::MiHoYo::SDK::EOSDelegate_CheckEntitlementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA08);
		}
		static ::MiHoYo::SDK::SDKDelegate_LoadFileDelegate** StaticGet__3___LoadJsonFile()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadFileDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA10);
		}
		static ::MiHoYo::SDK::EOSDelegate_SetCmdLineDelegate** StaticGet__23___SetCmdLine()
		{
			return (::MiHoYo::SDK::EOSDelegate_SetCmdLineDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA18);
		}
		static ::MiHoYo::SDK::WebDelegate_InitDelegate** StaticGet__10___Init()
		{
			return (::MiHoYo::SDK::WebDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA20);
		}
		static ::MiHoYo::SDK::WebDelegate_PreLoadDelegate** StaticGet__11___PreLoad()
		{
			return (::MiHoYo::SDK::WebDelegate_PreLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA28);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_GetProcessWndDelegate** StaticGet__32___GetProcessWnd()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_GetProcessWndDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA30);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebEventDelegate** StaticGet__6___OnGetWebEvent()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebEventDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA38);
		}
		static ::MiHoYo::SDK::EOSDelegate_IsEOSChannelDelegate** StaticGet__24___IsEOSChannel()
		{
			return (::MiHoYo::SDK::EOSDelegate_IsEOSChannelDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA40);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKStartHeartbeatDelegate** StaticGet__30___SDKStartHeartbeat()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKStartHeartbeatDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA48);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKInitDelegate** StaticGet__26___SDKInit()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA50);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate** StaticGet__36___StopDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA58);
		}
		static ::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate** StaticGet__12___SetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA60);
		}
		static ::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate** StaticGet__1___OnGetResourcePath()
		{
			return (::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA68);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKLoginDelegate** StaticGet__28___SDKLogin()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKLoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA70);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKPayDelegate** StaticGet__29___SDKPay()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKPayDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA78);
		}
		static ::MiHoYo::SDK::SDKDelegate_IsEditorDelegate** StaticGet__2___IsEditor()
		{
			return (::MiHoYo::SDK::SDKDelegate_IsEditorDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA80);
		}
		static ::MiHoYo::SDK::SDKDelegate_LogDelegate** StaticGet__4___OnMiHoYoSDKLogNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_LogDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA88);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKUnInitDelegate** StaticGet__27___SDKUnInit()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKUnInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA90);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate** StaticGet__40___ReportToKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDA98);
		}
		static ::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate** StaticGet__13___GetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAA0);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate** StaticGet__37___ReportToDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAA8);
		}
		static ::MiHoYo::SDK::EOSDelegate_GetProductListDelegate** StaticGet__18___GetProductList()
		{
			return (::MiHoYo::SDK::EOSDelegate_GetProductListDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAB0);
		}
		static ::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate** StaticGet__16___SetGameVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAB8);
		}
		static ::MiHoYo::SDK::EOSDelegate_PayDelegate** StaticGet__21___Pay()
		{
			return (::MiHoYo::SDK::EOSDelegate_PayDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAC0);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate** StaticGet__34___SetConfig()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAC8);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKLogoutDelegate** StaticGet__31___SDKLogout()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKLogoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAD0);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate** StaticGet__9___GetDiskType()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAD8);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate** StaticGet__38___StartKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAE0);
		}
		static ::MiHoYo::SDK::SDKDelegate_AsbPathDelegate** StaticGet__0___OnGetAsbPath()
		{
			return (::MiHoYo::SDK::SDKDelegate_AsbPathDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAE8);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate** StaticGet__35___StartDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAF0);
		}
		static ::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate** StaticGet__5___SetLoginResult()
		{
			return (::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDAF8);
		}
		static ::MiHoYo::SDK::EOSDelegate_LogReportEpicDelegate** StaticGet__25___LogReportEOS()
		{
			return (::MiHoYo::SDK::EOSDelegate_LogReportEpicDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDB00);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_InitDelegate** StaticGet__33___Init()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDB08);
		}
		static ::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate** StaticGet__14___GetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0xDB10);
		}
	};
}
