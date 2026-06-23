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

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_CHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x1BBCB660)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BBC7A40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETDEFAULTBODY_OFFSET UNITYSDK_OFFSET(0x1BBC7F90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BBC80A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_INIT_OFFSET UNITYSDK_OFFSET(0x1BBC7AF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_LOGIN_OFFSET UNITYSDK_OFFSET(0x1BBCBAA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BBC8600)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1BBCB070)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BBC92D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BBCB370)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PAY_1_OFFSET UNITYSDK_OFFSET(0x1BBC9620)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PAY_OFFSET UNITYSDK_OFFSET(0x1BBC8950)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PROCESSENTITLEMENT_OFFSET UNITYSDK_OFFSET(0x1BBCB980)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_SDKREPORTPAY_OFFSET UNITYSDK_OFFSET(0x1BBC9EC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_SDKVERIFYRECEIPT_OFFSET UNITYSDK_OFFSET(0x1BBC98B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_USEHOYOCHANNEL_OFFSET UNITYSDK_OFFSET(0x1BBC7A50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_VERIFYORDER_OFFSET UNITYSDK_OFFSET(0x1BBC97D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBCBB50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCBAF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay_TypeDefinitionIndex = 20318;

	class HoYoChannelGooglePlay : public ::MiHoYo::SDK::PC::OS::HoYoChannel
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>** StaticGet__productDataMapCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PC::OS::ProductData*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGooglePlay_TypeDefinitionIndex)->GetStaticField(0x9D30);
		}
		::System::Action_1<::System::String*>* _actionPayCallback; // 0x10
		::System::Boolean _isAlertOpened; // 0x18
		::System::Boolean _isChannelDllAvailable; // 0x19
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

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONGETPRODUCTLISTERROR_OFFSET))(this, callback, msg);
		}

		::System::Void Pay(::System::String* jsonPayInfo, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PAY_OFFSET))(this, jsonPayInfo, callback);
		}

		::System::Void Pay_1(::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* gamePayInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PAY_1_OFFSET))(this, gamePayInfo);
		}

		::System::Void VerifyOrder(::MiHoYo::SDK::AccountModel* account, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo, ::System::Boolean isSlient)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_VERIFYORDER_OFFSET))(this, account, payInfo, isSlient);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKFAIL_OFFSET))(this, msg, info);
		}

		::System::Void OnPayCallbackCancel(::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKCANCEL_OFFSET))(this, info);
		}

		::System::Void OnPayCallbackSuccess(::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_ONPAYCALLBACKSUCCESS_OFFSET))(this, info);
		}

		::System::Void CheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_CHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::Void ProcessEntitlement(::MiHoYo::SDK::AccountModel* account, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_PROCESSENTITLEMENT_OFFSET))(this, account, payInfo);
		}

		::System::Void Login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_LOGIN_OFFSET))(this, callback);
		}

		static ::MiHoYo::SDK::JSONObject* GetDefaultBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_GETDEFAULTBODY_OFFSET))();
		}

		static ::System::Void SDKReportPay(::MiHoYo::SDK::ReportStage stage, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* info, ::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_SDKREPORTPAY_OFFSET))(stage, info, response);
		}

		static ::System::Void SDKVerifyReceipt(::MiHoYo::SDK::ReportStage stage, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* info, ::System::Int32 portType)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY_SDKVERIFYRECEIPT_OFFSET))(stage, info, portType);
		}
	};
}
