#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannel.h"
#include "unitysdk/MiHoYo/SDK/ReportStage.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1BA233E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BA205B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETDEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x1BA20AC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BA20B70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_INIT_OFFSET UNITYSDK_OFFSET(0x1BA20640)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BA236F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BA21150)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1BA23030)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BA21D90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BA23210)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PAY_1_OFFSET UNITYSDK_OFFSET(0x1BA21F90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PAY_OFFSET UNITYSDK_OFFSET(0x1BA21370)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PROCESSENTITLEMENT_OFFSET UNITYSDK_OFFSET(0x1BA235A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_SDKREPORTPAY_OFFSET UNITYSDK_OFFSET(0x1BA22630)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_SDKVERIFYRECEIPT_OFFSET UNITYSDK_OFFSET(0x1BA22270)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BA205C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_VERIFYORDER_OFFSET UNITYSDK_OFFSET(0x1BA22160)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA23770)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA23740)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay_TypeDefinitionIndex = 8512;

	class HoYoChannelGooglePlay : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>** StaticGet__productDataMapCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGooglePlay_TypeDefinitionIndex)->GetStaticField(0x20500);
		}
		::System::Action_1<::System::String*>* _actionPayCallback; // 0x10
		::System::Boolean _isChannelDllAvailable; // 0x18
		::System::Boolean _isAlertOpened; // 0x19
		::System::Boolean _isPaying; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::SubChannelType GetChannel()
		{
			return ((::MiHoYo::SDK::SubChannelType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETCHANNEL_OFFSET))(this);
		}

		::System::Boolean UseHoYoChannel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_USEHOYOCHANNEL_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_INIT_OFFSET))(this);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void Pay_1(::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PAY_1_OFFSET))(this, a1);
		}

		::System::Void VerifyOrder(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_VERIFYORDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackCancel(::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKCANCEL_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackSuccess(::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKSUCCESS_OFFSET))(this, a1);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::Void ProcessEntitlement(::MiHoYo::SDK::AccountModel* a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PROCESSENTITLEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_LOGIN_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::JSONObject* GetDefaultBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETDEFAULTBODY_OFFSET))();
		}

		static ::System::Void SDKReportPay(::MiHoYo::SDK::ReportStage a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::MiHoYo::SDK::NetworkResponseModelEx* a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_SDKREPORTPAY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SDKVerifyReceipt(::MiHoYo::SDK::ReportStage a1, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_SDKVERIFYRECEIPT_OFFSET))(a1, a2, a3);
		}
	};
}
