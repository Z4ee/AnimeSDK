#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEAGEGATEERRORS_OFFSET UNITYSDK_OFFSET(0x1B6CB500)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGENERICPAYERRORS_OFFSET UNITYSDK_OFFSET(0x1B6CB7C0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOODPLATFORMERROR_OFFSET UNITYSDK_OFFSET(0x1B6CB3F0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLECREATEORDERERRORS_OFFSET UNITYSDK_OFFSET(0x1B6CAF90)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLERISKCONTROLERROR_OFFSET UNITYSDK_OFFSET(0x1B6CB680)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLEVERIFYRECEIPTERRORS_OFFSET UNITYSDK_OFFSET(0x1B6CB9C0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYACCOUNTERROR_OFFSET UNITYSDK_OFFSET(0x1B6CB260)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYRISKERROR_OFFSET UNITYSDK_OFFSET(0x1B6CB400)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLESTEAMCREATEORDERERRORS_OFFSET UNITYSDK_OFFSET(0x1B6CB840)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B6CC640)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONPAYAGELIMITWEBMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B6CC5D0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_OPENAGELIMITWEBPASSPORT_OFFSET UNITYSDK_OFFSET(0x1B6CC000)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOULDCLOSEPAYAGELIMITNEWFLOW_OFFSET UNITYSDK_OFFSET(0x1B6CC4A0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWLOGININVALIDDIALOG_OFFSET UNITYSDK_OFFSET(0x1B6CC3D0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMITLEGACY_OFFSET UNITYSDK_OFFSET(0x1B6CBC60)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMITNEWFLOW_OFFSET UNITYSDK_OFFSET(0x1B6CBAB0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMIT_OFFSET UNITYSDK_OFFSET(0x1B6CB1A0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CAF80)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__HANDLEPAYRISKERROR_B__15_0_OFFSET UNITYSDK_OFFSET(0x1B6CC730)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__SHOWPAYAGELIMITLEGACY_B__8_0_OFFSET UNITYSDK_OFFSET(0x1B6CC720)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler_TypeDefinitionIndex = 20462;

	class PayErrorHandler : public ::System::Object
	{
	public:
		::System::Action* payFailHandler; // 0x10
		::System::Action* payCancelHandler; // 0x18

		::System::Void _ctor(::System::Action* payCancelHandler, ::System::Action* payFailHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__CTOR_OFFSET))(this, payCancelHandler, payFailHandler);
		}

		::System::Void HandleGoogleCreateOrderErrors(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLECREATEORDERERRORS_OFFSET))(this, response);
		}

		::System::Void HandleSteamCreateOrderErrors(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLESTEAMCREATEORDERERRORS_OFFSET))(this, response);
		}

		::System::Void HandleGoogleVerifyReceiptErrors(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLEVERIFYRECEIPTERRORS_OFFSET))(this, response);
		}

		::System::Void HandlePayAccountError(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYACCOUNTERROR_OFFSET))(this, response);
		}

		::System::Void ShowPayAgeLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMIT_OFFSET))(this);
		}

		::System::Void ShowPayAgeLimitLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMITLEGACY_OFFSET))(this);
		}

		::System::Void ShowPayAgeLimitNewFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMITNEWFLOW_OFFSET))(this);
		}

		::System::Void OpenAgeLimitWebPassport(::System::String* cookieToken, ::System::String* accountId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_OPENAGELIMITWEBPASSPORT_OFFSET))(this, cookieToken, accountId);
		}

		::System::Void ShowLoginInvalidDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWLOGININVALIDDIALOG_OFFSET))(this);
		}

		::System::Boolean ShouldClosePayAgeLimitNewFlow(::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOULDCLOSEPAYAGELIMITNEWFLOW_OFFSET))(this, message);
		}

		::System::Void OnPayAgeLimitWebMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONPAYAGELIMITWEBMESSAGE_OFFSET))(this, webView, message);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, webView, message);
		}

		::System::Void HandlePayRiskError(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYRISKERROR_OFFSET))(this, response);
		}

		::System::Void HandleGoodPlatformError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOODPLATFORMERROR_OFFSET))(this);
		}

		::System::Void HandleAgeGateErrors(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEAGEGATEERRORS_OFFSET))(this, response);
		}

		::System::Void HandleGoogleRiskControlError(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLERISKCONTROLERROR_OFFSET))(this, response);
		}

		::System::Void HandleGenericPayErrors(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGENERICPAYERRORS_OFFSET))(this, response);
		}

		::System::Void _ShowPayAgeLimitLegacy_b__8_0(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__SHOWPAYAGELIMITLEGACY_B__8_0_OFFSET))(this, web);
		}

		::System::Void _HandlePayRiskError_b__15_0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__HANDLEPAYRISKERROR_B__15_0_OFFSET))(this, result);
		}
	};
}
