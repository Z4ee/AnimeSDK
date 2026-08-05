#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldProduct.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CONVERTTOHANDHELDPRODUCT_OFFSET UNITYSDK_OFFSET(0x1D1C9C70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1C8630)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1D1C65A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET UNITYSDK_OFFSET(0x1D1C9BA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1D1C6920)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET UNITYSDK_OFFSET(0x1D1C70C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1D1C74F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D1C63D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_JOINQUERYPRODUCTARRAY_OFFSET UNITYSDK_OFFSET(0x1D1C7650)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1D1C98D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1D1C6C30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D1C8930)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1D1C8E80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1D1C8290)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1D1C93B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1C9B40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PAY_OFFSET UNITYSDK_OFFSET(0x1D1C76E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1D1C8620)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET UNITYSDK_OFFSET(0x1D1C6630)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1D1C6640)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C9C90)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerBase_TypeDefinitionIndex = 20856;

	class PayManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase**)Il2CppClass::FromTypeDefinitionIndex(PayManagerBase_TypeDefinitionIndex)->GetStaticField(0x9440);
		}
		static ::MiHoYo::SDK::ReportType* StaticGet_HandheldReportType()
		{
			return (::MiHoYo::SDK::ReportType*)Il2CppClass::FromTypeDefinitionIndex(PayManagerBase_TypeDefinitionIndex)->GetStaticField(0x4580);
		}
		::System::Action_1<::System::String*>* priceTierCallback; // 0x10
		::System::String* countryCode; // 0x18
		::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>* cacheProducts; // 0x20
		::System::Action_1<::System::String*>* productsCallback; // 0x28
		::System::String* productId; // 0x30
		::System::String* payLifecycleId; // 0x38
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct purchasingProduct; // 0x40
		::Il2CppArray<::System::String*>* queryProductArray; // 0x70
		::System::String* deliveryURL; // 0x78
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x80
		::System::Action_1<::System::String*>* payCallback; // 0x88
		::System::Boolean isGettingProducts; // 0x90
		::MiHoYo::SDK::EnvType _envType; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GET_INSTANCE_OFFSET))();
		}

		::System::Void RefreshProductsCache(::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>* products)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET))(this, products);
		}

		::System::Void RequestPriceTier(::System::Action_1<::System::String*>* callback, ::System::String* currency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET))(this, callback, currency);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void GetProducts(::Il2CppArray<::System::String*>* idList, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_OFFSET))(this, idList, callback);
		}

		::System::Void GetProducts_1(::MiHoYo::SDK::JSONArray* productArray)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET))(this, productArray);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void PremiumPay(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PREMIUMPAY_OFFSET))(this, callback);
		}

		::System::String* CreateFailPayCallback(::System::String* msg, ::System::String* errMsg)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET))(this, msg, errMsg);
		}

		::System::Void OnGetProductListSuccess(::MiHoYo::SDK::JSONArray* productArray)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, productArray);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback, ::System::Int32 retcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET))(this, callback, retcode);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET))(this, msg, errMsg);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnGetPriceTier(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRICETIER_OFFSET))(this, response);
		}

		::System::Void OnPriceTierCallback(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET))(this, response);
		}

		::System::String* GetCurrentContryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET))(this);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::System::String* JoinQueryProductArray()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_JOINQUERYPRODUCTARRAY_OFFSET))(this);
		}

		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct ConvertToHandheldProduct(::MiHoYo::SDK::PS::PayManager_PSProduct product)
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CONVERTTOHANDHELDPRODUCT_OFFSET))(this, product);
		}
	};
}
