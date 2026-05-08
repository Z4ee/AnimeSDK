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

#define MIHOYO_SDK_PS_PAYMANAGER_CHECKPRICE_OFFSET UNITYSDK_OFFSET(0x18DC4D00)
#define MIHOYO_SDK_PS_PAYMANAGER_CHECKPSPAY_OFFSET UNITYSDK_OFFSET(0x18DC3630)
#define MIHOYO_SDK_PS_PAYMANAGER_CHECKPURCHASE_OFFSET UNITYSDK_OFFSET(0x18DC4DE0)
#define MIHOYO_SDK_PS_PAYMANAGER_COMMERCECHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18DC67D0)
#define MIHOYO_SDK_PS_PAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x18DC75C0)
#define MIHOYO_SDK_PS_PAYMANAGER_DETECTPSPAY_OFFSET UNITYSDK_OFFSET(0x18DC7DA0)
#define MIHOYO_SDK_PS_PAYMANAGER_DLCCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18DC7010)
#define MIHOYO_SDK_PS_PAYMANAGER_DLCPAY_OFFSET UNITYSDK_OFFSET(0x18DC7080)
#define MIHOYO_SDK_PS_PAYMANAGER_GETCURRENTPSNCONTRYCODE_OFFSET UNITYSDK_OFFSET(0x18DC8A60)
#define MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x18DC3C50)
#define MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTS_1_OFFSET UNITYSDK_OFFSET(0x18DC8B10)
#define MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x18DC41E0)
#define MIHOYO_SDK_PS_PAYMANAGER_GETPURCHASEJSON_OFFSET UNITYSDK_OFFSET(0x18DC51F0)
#define MIHOYO_SDK_PS_PAYMANAGER_GETSAVEPURCHASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x18DC50A0)
#define MIHOYO_SDK_PS_PAYMANAGER_LAUNCHPSPAY_OFFSET UNITYSDK_OFFSET(0x18DC4F70)
#define MIHOYO_SDK_PS_PAYMANAGER_ONCHECKPAY_OFFSET UNITYSDK_OFFSET(0x18DC6240)
#define MIHOYO_SDK_PS_PAYMANAGER_ONGETPRICETIER_OFFSET UNITYSDK_OFFSET(0x18DC7AD0)
#define MIHOYO_SDK_PS_PAYMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x18DC3F50)
#define MIHOYO_SDK_PS_PAYMANAGER_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x18DC7800)
#define MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x18DC6C80)
#define MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x18DC4C10)
#define MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x18DC69F0)
#define MIHOYO_SDK_PS_PAYMANAGER_ONPRICETIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x18DC7D40)
#define MIHOYO_SDK_PS_PAYMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x18DC44C0)
#define MIHOYO_SDK_PS_PAYMANAGER_PREMIUMCHECKOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18DC6F20)
#define MIHOYO_SDK_PS_PAYMANAGER_PREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x18DC6F90)
#define MIHOYO_SDK_PS_PAYMANAGER_REFRESHPRODUCTCACHE_OFFSET UNITYSDK_OFFSET(0x18DC3500)
#define MIHOYO_SDK_PS_PAYMANAGER_REQUESTCHECKPAY_OFFSET UNITYSDK_OFFSET(0x18DC5D40)
#define MIHOYO_SDK_PS_PAYMANAGER_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x18DC3970)
#define MIHOYO_SDK_PS_PAYMANAGER_SAVEPURCHASE_OFFSET UNITYSDK_OFFSET(0x18DC64C0)
#define MIHOYO_SDK_PS_PAYMANAGER_TRYGETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x18DC4410)
#define MIHOYO_SDK_PS_PAYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DC8C30)
#define MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_0_OFFSET UNITYSDK_OFFSET(0x18DC8C80)
#define MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_1_OFFSET UNITYSDK_OFFSET(0x18DC8C90)
#define MIHOYO_SDK_PS_PAYMANAGER__COMMERCECHECKOUTCALLBACK_B__30_2_OFFSET UNITYSDK_OFFSET(0x18DC8CA0)
#define MIHOYO_SDK_PS_PAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC8C20)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PayManager_TypeDefinitionIndex = 19497;

	class PayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::PayManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PayManager**)Il2CppClass::FromTypeDefinitionIndex(PayManager_TypeDefinitionIndex)->GetStaticField(0x9B10);
		}
		// static const ::System::String* RMB_AMOUNT; // 0x0
		// static const ::System::String* SINGLE_RMB_AMOUNT; // 0x0
		// static const ::System::String* MONTH_RMB_AMOUNT; // 0x0
		// static const ::System::String* DAY_RMB_AMOUNT; // 0x0
		// static const ::System::String* DATE; // 0x0
		// static const ::System::String* AMOUNT; // 0x0
		::System::Action_1<::System::String*>* productsCallback; // 0x10
		::MiHoYo::SDK::PS::PayManager_PSProduct purchasingProduct; // 0x18
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x48
		::System::Action_1<::System::String*>* priceTierCallback; // 0x50
		::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* cacheProducts; // 0x58
		::System::String* psnCountryCode; // 0x60
		::System::Action_1<::System::String*>* payCallback; // 0x68
		::System::String* deliveryURL; // 0x70
		::System::Boolean isGettingProducts; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void RefreshProductCache(::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>* p)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_REFRESHPRODUCTCACHE_OFFSET))(this, p);
		}

		::System::Boolean CheckPSPay(::System::String* delivery_url)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_CHECKPSPAY_OFFSET))(this, delivery_url);
		}

		::System::Void RequestPriceTier(::System::Action_1<::System::String*>* callback, ::System::String* currency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_REQUESTPRICETIER_OFFSET))(this, callback, currency);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void GetProducts(::MiHoYo::SDK::JSONArray* productArray)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTS_OFFSET))(this, productArray);
		}

		::System::Void TryGetProducts(::Il2CppArray<::System::String*>* productLabels)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_TRYGETPRODUCTS_OFFSET))(this, productLabels);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void LaunchPSPay(::MiHoYo::SDK::PS::PayManager_PSProduct product)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_LAUNCHPSPAY_OFFSET))(this, product);
		}

		::System::Boolean CheckPrice(::System::String* showPrice)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_CHECKPRICE_OFFSET))(this, showPrice);
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

		::System::Void OnCheckPay(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONCHECKPAY_OFFSET))(this, response);
		}

		::System::Void SavePurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_SAVEPURCHASE_OFFSET))(this);
		}

		::System::Void CommerceCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult result, ::System::Int32 error)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_COMMERCECHECKOUTCALLBACK_OFFSET))(this, result, error);
		}

		::System::Void PremiumCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult result, ::System::Int32 error)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_PREMIUMCHECKOUTCALLBACK_OFFSET))(this, result, error);
		}

		::System::Void PremiumPay(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_PREMIUMPAY_OFFSET))(this, callback);
		}

		::System::Void DLCCheckoutCallback(::MiHoYo::SDK::PSCommerceDialogCheckoutResult result, ::System::Int32 error)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PSCommerceDialogCheckoutResult, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_DLCCHECKOUTCALLBACK_OFFSET))(this, result, error);
		}

		::System::Void DLCPay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_DLCPAY_OFFSET))(this, jsonString, callback);
		}

		::System::String* CreateFailPayCallback(::System::String* msg)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_CREATEFAILPAYCALLBACK_OFFSET))(this, msg);
		}

		::System::Void OnGetProductListSuccess(::MiHoYo::SDK::JSONArray* productArray)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, productArray);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, callback);
		}

		::System::Void OnPayCallbackFail(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, msg);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnGetPriceTier(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONGETPRICETIER_OFFSET))(this, response);
		}

		::System::Void OnPriceTierCallback(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_ONPRICETIERCALLBACK_OFFSET))(this, response);
		}

		::System::Void DetectPSPay(::System::String* aid, ::System::String* token, ::System::String* game, ::System::String* region, ::System::String* uid, ::System::String* device, ::System::String* delivery_url, ::System::String* client_id, ::System::String* auth_code, ::System::Int32 issuerId, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_DETECTPSPAY_OFFSET))(this, aid, token, game, region, uid, device, delivery_url, client_id, auth_code, issuerId, callback);
		}

		::System::Void RequestCheckPay(::MiHoYo::SDK::JSONNode* amountJson, ::System::String* app_id, ::System::String* combo_token, ::System::String* open_id, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_REQUESTCHECKPAY_OFFSET))(this, amountJson, app_id, combo_token, open_id, callback);
		}

		::System::String* GetCurrentPSNContryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETCURRENTPSNCONTRYCODE_OFFSET))(this);
		}

		::System::Void GetProducts_1(::Il2CppArray<::System::String*>* idList, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PS::PayManager_PSProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PAYMANAGER_GETPRODUCTS_1_OFFSET))(this, idList, callback);
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
