#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEAGEGATEERRORS_OFFSET UNITYSDK_OFFSET(0x1839B990)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGENERICPAYERRORS_OFFSET UNITYSDK_OFFSET(0x1839BC80)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOODPLATFORMERROR_OFFSET UNITYSDK_OFFSET(0x1839B840)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLECREATEORDERERRORS_OFFSET UNITYSDK_OFFSET(0x18390FE0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLERISKCONTROLERROR_OFFSET UNITYSDK_OFFSET(0x1839BB30)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLEVERIFYRECEIPTERRORS_OFFSET UNITYSDK_OFFSET(0x18392420)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYACCOUNTERROR_OFFSET UNITYSDK_OFFSET(0x1839B5C0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYRISKERROR_OFFSET UNITYSDK_OFFSET(0x1839B860)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLESTEAMCREATEORDERERRORS_OFFSET UNITYSDK_OFFSET(0x183979E0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1839BCF0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMIT_OFFSET UNITYSDK_OFFSET(0x1839B210)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18390FD0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__HANDLEPAYRISKERROR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1839BE10)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER__SHOWPAYAGELIMIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1839BDF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler_TypeDefinitionIndex = 8484;

	class PayErrorHandler : public ::System::Object
	{
	public:
		::System::Action* payCancelHandler; // 0x10
		::System::Action* payFailHandler; // 0x18

		::System::Void _ctor(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HandleGoogleCreateOrderErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLECREATEORDERERRORS_OFFSET))(this, a1);
		}

		::System::Void HandleSteamCreateOrderErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLESTEAMCREATEORDERERRORS_OFFSET))(this, a1);
		}

		::System::Void HandleGoogleVerifyReceiptErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLEVERIFYRECEIPTERRORS_OFFSET))(this, a1);
		}

		::System::Void HandlePayAccountError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYACCOUNTERROR_OFFSET))(this, a1);
		}

		::System::Void ShowPayAgeLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_SHOWPAYAGELIMIT_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void HandlePayRiskError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEPAYRISKERROR_OFFSET))(this, a1);
		}

		::System::Void HandleGoodPlatformError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOODPLATFORMERROR_OFFSET))(this);
		}

		::System::Void HandleAgeGateErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEAGEGATEERRORS_OFFSET))(this, a1);
		}

		::System::Void HandleGoogleRiskControlError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGOOGLERISKCONTROLERROR_OFFSET))(this, a1);
		}

		::System::Void HandleGenericPayErrors(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER_HANDLEGENERICPAYERRORS_OFFSET))(this, a1);
		}

		::System::Void _ShowPayAgeLimit_b__7_0(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__SHOWPAYAGELIMIT_B__7_0_OFFSET))(this, a1);
		}

		::System::Void _HandlePayRiskError_b__9_0(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER__HANDLEPAYRISKERROR_B__9_0_OFFSET))(this, a1);
		}
	};
}
