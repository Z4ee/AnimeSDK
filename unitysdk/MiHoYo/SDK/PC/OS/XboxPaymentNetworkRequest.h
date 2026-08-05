#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x1CEACDB0)
#define MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_RETRIEVETOKEN_OFFSET UNITYSDK_OFFSET(0x1CEAB260)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxPaymentNetworkRequest_TypeDefinitionIndex = 20787;

	class XboxPaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Int32 TimeoutSeconds = 0x14; // 0x0

		static ::System::Void RetrieveToken(::MiHoYo::SDK::AccountModel* accountModel, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_RETRIEVETOKEN_OFFSET))(accountModel, callback);
		}

		static ::System::Void DetectPay(::MiHoYo::SDK::AccountModel* accountModel, ::MiHoYo::SDK::PC::OS::XboxPayInfo* payInfo, ::System::String* accessToken, ::System::String* sandboxId, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::XboxPayInfo*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET))(accountModel, payInfo, accessToken, sandboxId, callback);
		}
	};
}
