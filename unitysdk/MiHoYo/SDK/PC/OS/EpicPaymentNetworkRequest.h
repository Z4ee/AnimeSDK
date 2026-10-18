#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class EpicPayInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_EPICPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x1BF0FDA0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicPaymentNetworkRequest_TypeDefinitionIndex = 8535;

	class EpicPaymentNetworkRequest : public ::System::Object
	{
	public:
		static ::System::Void DetectPay(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::EpicPayInfo* a2, ::System::String* a3, ::System::String* a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::EpicPayInfo*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICPAYMENTNETWORKREQUEST_DETECTPAY_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
