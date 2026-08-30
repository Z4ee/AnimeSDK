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
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_AuthTokenDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckEntitlementsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckoutDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ConsumeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_InitDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_LoginDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ProductsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_QueryDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___O_TypeDefinitionIndex = 46722;

	class DelegateRegister___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate** StaticGet__19___AuthToken()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BA0);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKLoginDelegate** StaticGet__38___SDKLogin()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKLoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BA8);
		}
		static ::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate** StaticGet__1___OnGetResourcePath()
		{
			return (::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BB0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate** StaticGet__23___Consume()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BB8);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate** StaticGet__47___ReportToDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BC0);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate** StaticGet__50___ReportToKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BC8);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKInitDelegate** StaticGet__36___SDKInit()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BD0);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKStartHeartbeatDelegate** StaticGet__40___SDKStartHeartbeat()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKStartHeartbeatDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BD8);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate** StaticGet__9___GetDiskType()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BE0);
		}
		static ::MiHoYo::SDK::SDKDelegate_LoadFileDelegate** StaticGet__3___LoadJsonFile()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadFileDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BE8);
		}
		static ::MiHoYo::SDK::SDKDelegate_IsEditorDelegate** StaticGet__2___IsEditor()
		{
			return (::MiHoYo::SDK::SDKDelegate_IsEditorDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BF0);
		}
		static ::MiHoYo::SDK::EOSDelegate_CheckEntitlementsDelegate** StaticGet__32___CheckoutEntitlements()
		{
			return (::MiHoYo::SDK::EOSDelegate_CheckEntitlementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42BF8);
		}
		static ::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate** StaticGet__15___SetWebVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C00);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate** StaticGet__48___StartKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C08);
		}
		static ::MiHoYo::SDK::SDKDelegate_LogDelegate** StaticGet__4___OnMiHoYoSDKLogNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_LogDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C10);
		}
		static ::MiHoYo::SDK::WebDelegate_PreLoadDelegate** StaticGet__11___PreLoad()
		{
			return (::MiHoYo::SDK::WebDelegate_PreLoadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C18);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_GetProcessWndDelegate** StaticGet__42___GetProcessWnd()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_GetProcessWndDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C20);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKPayDelegate** StaticGet__39___SDKPay()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKPayDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C28);
		}
		static ::MiHoYo::SDK::EOSDelegate_InitDelegate** StaticGet__27___InitSDK()
		{
			return (::MiHoYo::SDK::EOSDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C30);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable** StaticGet__7___SetAnimationEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C38);
		}
		static ::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate** StaticGet__13___GetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C40);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate** StaticGet__22___CheckEntitlements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C48);
		}
		static ::MiHoYo::SDK::WebDelegate_InitDelegate** StaticGet__10___Init()
		{
			return (::MiHoYo::SDK::WebDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C50);
		}
		static ::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate** StaticGet__16___SetGameVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C58);
		}
		static ::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate** StaticGet__5___SetLoginResult()
		{
			return (::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C60);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate** StaticGet__26___Query()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C68);
		}
		static ::MiHoYo::SDK::EOSDelegate_QueryEOSProductDelegate** StaticGet__29___QueryProducts()
		{
			return (::MiHoYo::SDK::EOSDelegate_QueryEOSProductDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C70);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate** StaticGet__20___Products()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C78);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate** StaticGet__45___StartDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C80);
		}
		static ::MiHoYo::SDK::EOSDelegate_IsEOSChannelDelegate** StaticGet__34___IsEOSChannel()
		{
			return (::MiHoYo::SDK::EOSDelegate_IsEOSChannelDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C88);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate** StaticGet__17___Init()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C90);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKLogoutDelegate** StaticGet__41___SDKLogout()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKLogoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42C98);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate** StaticGet__46___StopDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CA0);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate** StaticGet__49___StopKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CA8);
		}
		static ::MiHoYo::SDK::EOSDelegate_LoginDelegate** StaticGet__30___Login()
		{
			return (::MiHoYo::SDK::EOSDelegate_LoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CB0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate** StaticGet__21___Checkout()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CB8);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable** StaticGet__8___SetJoypadCloseEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CC0);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate** StaticGet__44___SetConfig()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CC8);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKUnInitDelegate** StaticGet__37___SDKUnInit()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKUnInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CD0);
		}
		static ::MiHoYo::SDK::EOSDelegate_LogReportEpicDelegate** StaticGet__35___LogReportEOS()
		{
			return (::MiHoYo::SDK::EOSDelegate_LogReportEpicDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CD8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate** StaticGet__25___RegisterGameOverlayCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CE0);
		}
		static ::MiHoYo::SDK::EOSDelegate_SetCmdLineDelegate** StaticGet__33___SetCmdLine()
		{
			return (::MiHoYo::SDK::EOSDelegate_SetCmdLineDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CE8);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebEventDelegate** StaticGet__6___OnGetWebEvent()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebEventDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CF0);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_InitDelegate** StaticGet__43___Init()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42CF8);
		}
		static ::MiHoYo::SDK::EOSDelegate_PayDelegate** StaticGet__31___Pay()
		{
			return (::MiHoYo::SDK::EOSDelegate_PayDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42D00);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate** StaticGet__24___RegisterMicroTxnCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42D08);
		}
		static ::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate** StaticGet__12___SetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42D10);
		}
		static ::MiHoYo::SDK::EOSDelegate_GetProductListDelegate** StaticGet__28___GetProductList()
		{
			return (::MiHoYo::SDK::EOSDelegate_GetProductListDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42D18);
		}
		static ::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate** StaticGet__14___GetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42D20);
		}
		static ::MiHoYo::SDK::SDKDelegate_AsbPathDelegate** StaticGet__0___OnGetAsbPath()
		{
			return (::MiHoYo::SDK::SDKDelegate_AsbPathDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42D28);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate** StaticGet__18___Login()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(DelegateRegister___O_TypeDefinitionIndex)->GetStaticField(0x42D30);
		}
	};
}
