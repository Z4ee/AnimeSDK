#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class PurchaseData; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x19B51C40)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_FIRSTPAYMENT_OFFSET UNITYSDK_OFFSET(0x19B54470)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_PROCESSRECEIPTTOJSON_OFFSET UNITYSDK_OFFSET(0x19B51540)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_VERIFYRECEIPT_OFFSET UNITYSDK_OFFSET(0x19B53300)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x19B55840)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GooglePaymentNetworkRequest_TypeDefinitionIndex = 19343;

	class GooglePaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Int32 TimeoutSeconds = 0x14; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::JSONObject* ProcessReceiptToJson(::MiHoYo::SDK::PC::OS::PurchaseData* payInfo)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::MiHoYo::SDK::PC::OS::PurchaseData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_PROCESSRECEIPTTOJSON_OFFSET))(payInfo);
		}

		static ::System::Void CreateOrder(::MiHoYo::SDK::AccountModel* accountModel, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onCreateOrder)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET))(accountModel, payInfo, onCreateOrder);
		}

		static ::System::Void VerifyReceipt(::MiHoYo::SDK::AccountModel* accountModel, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onVerifyReceipt)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_VERIFYRECEIPT_OFFSET))(accountModel, payInfo, onVerifyReceipt);
		}

		static ::System::Void FirstPayment(::MiHoYo::SDK::AccountModel* accountModel, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onFirstPayment)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_FIRSTPAYMENT_OFFSET))(accountModel, payInfo, onFirstPayment);
		}
	};
}
