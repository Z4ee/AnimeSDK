#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEAGEGATEERRORS_OFFSET UNITYSDK_OFFSET(0x194B2C10)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGENERICPAYERRORS_OFFSET UNITYSDK_OFFSET(0x194B2ED0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOODPLATFORMERROR_OFFSET UNITYSDK_OFFSET(0x194B2B00)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLECREATEORDERERRORS_OFFSET UNITYSDK_OFFSET(0x194B2320)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLERISKCONTROLERROR_OFFSET UNITYSDK_OFFSET(0x194B2D90)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLEVERIFYRECEIPTERRORS_OFFSET UNITYSDK_OFFSET(0x194B3120)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYACCOUNTERROR_OFFSET UNITYSDK_OFFSET(0x194B28D0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYRISKERROR_OFFSET UNITYSDK_OFFSET(0x194B2B10)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLESTEAMCREATEORDERERRORS_OFFSET UNITYSDK_OFFSET(0x194B2F50)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x194B3210)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMIT_OFFSET UNITYSDK_OFFSET(0x194B2530)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x194B2310)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__HANDLEPAYRISKERROR_B__9_0_OFFSET UNITYSDK_OFFSET(0x194B3300)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__SHOWPAYAGELIMIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x194B32F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler_TypeDefinitionIndex = 19408;

	class PayErrorHandler : public ::System::Object
	{
	public:
		::System::Action* payCancelHandler; // 0x10
		::System::Action* payFailHandler; // 0x18

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

		::System::Void _ShowPayAgeLimit_b__7_0(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__SHOWPAYAGELIMIT_B__7_0_OFFSET))(this, web);
		}

		::System::Void _HandlePayRiskError_b__9_0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__HANDLEPAYRISKERROR_B__9_0_OFFSET))(this, result);
		}
	};
}
