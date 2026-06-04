#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class PurchaseData; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_CREATEORDER_OFFSET UNITYSDK_OFFSET(0x18388CB0)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_FIRSTPAYMENT_OFFSET UNITYSDK_OFFSET(0x1838A900)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_PROCESSRECEIPTTOJSON_OFFSET UNITYSDK_OFFSET(0x18388810)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_VERIFYRECEIPT_OFFSET UNITYSDK_OFFSET(0x18389E30)
#define MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1838B4B0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GooglePaymentNetworkRequest_TypeDefinitionIndex = 8419;

	class GooglePaymentNetworkRequest : public ::System::Object
	{
	public:
		// static const ::System::Int32 TimeoutSeconds = 0x14; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::JSONObject* ProcessReceiptToJson(::MiHoYo::SDK::PC::OS::PurchaseData* a1)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::MiHoYo::SDK::PC::OS::PurchaseData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPAYMENTNETWORKREQUEST_PROCESSRECEIPTTOJSON_OFFSET))(a1);
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
