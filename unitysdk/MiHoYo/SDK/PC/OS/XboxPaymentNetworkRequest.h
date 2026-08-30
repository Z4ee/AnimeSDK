#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x1BA34C70)
#define MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_RETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1BA31720)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxPaymentNetworkRequest_TypeDefinitionIndex = 8634;

	class XboxPaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Int32 TimeoutSeconds = 0x14; // 0x0

		static ::System::Void RetrieveToken(::MiHoYo::SDK::AccountModel* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_RETRIEVETOKEN_OFFSET))(a1, a2);
		}

		static ::System::Void DetectPay(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::XboxPayInfo* a2, ::System::String* a3, ::System::String* a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::XboxPayInfo*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
