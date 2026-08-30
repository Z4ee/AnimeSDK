#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/MiHoYo/SDK/PSCommerceDialogCheckoutResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_PAYMANAGER_CHECKPRICE_OFFSET UNITYSDK_OFFSET(0x1BA64ED0)
#define MIHOYO_SDK_PS_PAYMANAGER_CHECKPSPAY_OFFSET UNITYSDK_OFFSET(0x1BA4EEF0)
#define MIHOYO_SDK_PS_PAYMANAGER_CHECKPURCHASE_OFFSET UNITYSDK_OFFSET(0x1BA64FA0)
#define MIHOYO_SDK_PS_PAYMANAGER_COMMERCECHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA67890)
#define MIHOYO_SDK_PS_PAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA68080)
#define MIHOYO_SDK_PS_PAYMANAGER_DETECTPSPAY_OFFSET UNITYSDK_OFFSET(0x1BA68570)
#define MIHOYO_SDK_PS_PAYMANAGER_DLCCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA68060)
#define MIHOYO_SDK_PS_PAYMANAGER_DLCPAY_OFFSET UNITYSDK_OFFSET(0x1BA54130)
#define MIHOYO_SDK_PS_PAYMANAGER_GETCURRENTPSNCONTRYCODE_OFFSET UNITYSDK_OFFSET(0x1BA68D60)
#define MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BA51EA0)
#define MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTS_1_OFFSET UNITYSDK_OFFSET(0x1BA68E70)
#define MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1BA64A20)
#define MIHOYO_SDK_PS_PAYMANAGER_GETPURCHASEJSON_OFFSET UNITYSDK_OFFSET(0x1BA65480)
#define MIHOYO_SDK_PS_PAYMANAGER_GETSAVEPURCHASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BA65310)
#define MIHOYO_SDK_PS_PAYMANAGER_LAUNCHPSPAY_OFFSET UNITYSDK_OFFSET(0x1BA65150)
#define MIHOYO_SDK_PS_PAYMANAGER_ONCHECKPAY_OFFSET UNITYSDK_OFFSET(0x1BA66C80)
#define MIHOYO_SDK_PS_PAYMANAGER_ONGETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1BA683E0)
#define MIHOYO_SDK_PS_PAYMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BA64840)
#define MIHOYO_SDK_PS_PAYMANAGER_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BA681D0)
#define MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1BA67E60)
#define MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BA64DF0)
#define MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BA67C80)
#define MIHOYO_SDK_PS_PAYMANAGER_ONPRICETIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA68540)
#define MIHOYO_SDK_PS_PAYMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x1BA52490)
#define MIHOYO_SDK_PS_PAYMANAGER_PREMIUMCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA68040)
#define MIHOYO_SDK_PS_PAYMANAGER_PREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1BA54000)
#define MIHOYO_SDK_PS_PAYMANAGER_REFRESHPRODUCTCACHE_OFFSET UNITYSDK_OFFSET(0x1BA646E0)
#define MIHOYO_SDK_PS_PAYMANAGER_REQUESTCHECKPAY_OFFSET UNITYSDK_OFFSET(0x1BA66690)
#define MIHOYO_SDK_PS_PAYMANAGER_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1BA51BA0)
#define MIHOYO_SDK_PS_PAYMANAGER_SAVEPURCHASE_OFFSET UNITYSDK_OFFSET(0x1BA67010)
#define MIHOYO_SDK_PS_PAYMANAGER_TRYGETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1BA64D10)
#define MIHOYO_SDK_PS_PAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA69020)
#define MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_0_OFFSET UNITYSDK_OFFSET(0x1BA69070)
#define MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_1_OFFSET UNITYSDK_OFFSET(0x1BA69080)
#define MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_2_OFFSET UNITYSDK_OFFSET(0x1BA69090)
#define MIHOYO_SDK_PS_PAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA69010)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager_TypeDefinitionIndex = 8852;

	class PayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::PayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PayManager**)Il2CppClass::FromTypeDefinitionIndex(PayManager_TypeDefinitionIndex)->GetStaticField(0xBE40);
		}
		// static const ::System::String* RMB_AMOUNT; // 0x0
		// static const ::System::String* SINGLE_RMB_AMOUNT; // 0x0
		// static const ::System::String* MONTH_RMB_AMOUNT; // 0x0
		// static const ::System::String* DAY_RMB_AMOUNT; // 0x0
		// static const ::System::String* DATE; // 0x0
		// static const ::System::String* AMOUNT; // 0x0
		::System::Action_1<::System::String*>* productsCallback; // 0x10
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x18
		::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* cacheProducts; // 0x20
		::System::Action_1<::System::String*>* priceTierCallback; // 0x28
		::System::Action_1<::System::String*>* payCallback; // 0x30
		::System::String* psnCountryCode; // 0x38
		::System::String* deliveryURL; // 0x40
		::MiHoYo::SDK::PS::PayManager_PSProduct purchasingProduct; // 0x48
		::System::Boolean isGettingProducts; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void RefreshProductCache(::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_REFRESHPRODUCTCACHE_OFFSET))(this, a1);
		}

		::System::Boolean CheckPSPay(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_CHECKPSPAY_OFFSET))(this, a1);
		}

		::System::Void RequestPriceTier(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_REQUESTPRICETIER_OFFSET))(this, a1, a2);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void GetProducts(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTS_OFFSET))(this, a1);
		}

		::System::Void TryGetProducts(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_TRYGETPRODUCTS_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void LaunchPSPay(::MiHoYo::SDK::PS::PayManager_PSProduct a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_LAUNCHPSPAY_OFFSET))(this, a1);
		}

		::System::Boolean CheckPrice(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_CHECKPRICE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetSavePurchaseAmount()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETSAVEPURCHASEAMOUNT_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* GetPurchaseJson()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETPURCHASEJSON_OFFSET))(this);
		}

		::System::Void CheckPurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_CHECKPURCHASE_OFFSET))(this);
		}

		::System::Void OnCheckPay(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONCHECKPAY_OFFSET))(this, a1);
		}

		::System::Void SavePurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_SAVEPURCHASE_OFFSET))(this);
		}

		::System::Void CommerceCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_COMMERCECHECKOUTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void PremiumCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_PREMIUMCHECKOUTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void PremiumPay(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_PREMIUMPAY_OFFSET))(this, a1);
		}

		::System::Void DLCCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_DLCCHECKOUTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void DLCPay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_DLCPAY_OFFSET))(this, a1, a2);
		}

		::System::String* CreateFailPayCallback(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListSuccess(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackFail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnGetPriceTier(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONGETPRICETIER_OFFSET))(this, a1);
		}

		::System::Void OnPriceTierCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONPRICETIERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void DetectPSPay(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::String* a9, ::System::Int32 a10, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_DETECTPSPAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void RequestCheckPay(::MiHoYo::SDK::JSONNode* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_REQUESTCHECKPAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* GetCurrentPSNContryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETCURRENTPSNCONTRYCODE_OFFSET))(this);
		}

		::System::Void GetProducts_1(::Il2CppArray<::System::String*>* a1, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTS_1_OFFSET))(this, a1, a2);
		}

		::System::Void _CommerceCheckoutCallback_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_0_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__30_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_1_OFFSET))(this);
		}

		::System::Void _CommerceCheckoutCallback_b__30_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_2_OFFSET))(this);
		}
	};
}
