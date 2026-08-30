#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x1BA0C950)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_FIRSTPAYMENT_OFFSET UNITYSDK_OFFSET(0x1BA0E6D0)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_VERIFYRECEIPT_OFFSET UNITYSDK_OFFSET(0x1BA0DAD0)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0F2E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GooglePaymentNetworkRequest_TypeDefinitionIndex = 8480;

	class GooglePaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Int32 TimeoutSeconds = 0x14; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST__CTOR_OFFSET))(this);
		}

		static ::System::Void CreateOrder(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void VerifyReceipt(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_VERIFYRECEIPT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FirstPayment(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_FIRSTPAYMENT_OFFSET))(a1, a2, a3);
		}
	};
}
