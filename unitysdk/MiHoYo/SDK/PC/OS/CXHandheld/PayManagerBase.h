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

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CONVERTTOHANDHELDPRODUCT_OFFSET UNITYSDK_OFFSET(0x1BA06910)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA05960)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1BA037C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET UNITYSDK_OFFSET(0x1BA06780)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BA03AE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET UNITYSDK_OFFSET(0x1BA042F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1BA04730)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA03650)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_JOINQUERYPRODUCTARRAY_OFFSET UNITYSDK_OFFSET(0x1BA04970)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1BA065F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BA03DB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BA05B30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1BA05F00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BA055D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BA06280)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA06750)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PAY_OFFSET UNITYSDK_OFFSET(0x1BA04B10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1BA05940)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET UNITYSDK_OFFSET(0x1BA03860)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1BA03870)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA06930)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerBase_TypeDefinitionIndex = 8703;

	class PayManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerBase**)Il2CppClass::FromTypeDefinitionIndex(PayManagerBase_TypeDefinitionIndex)->GetStaticField(0x1CA50);
		}
		static ::MiHoYo::SDK::ReportType* StaticGet_HandheldReportType()
		{
			return (::MiHoYo::SDK::ReportType*)Il2CppClass::FromTypeDefinitionIndex(PayManagerBase_TypeDefinitionIndex)->GetStaticField(0x9C70);
		}
		::System::Action_1<::System::String*>* priceTierCallback; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct purchasingProduct; // 0x18
		::System::String* countryCode; // 0x48
		::System::Action_1<::System::String*>* productsCallback; // 0x50
		::System::String* deliveryURL; // 0x58
		::System::Action_1<::System::String*>* payCallback; // 0x60
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x68
		::System::String* payLifecycleId; // 0x70
		::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>* cacheProducts; // 0x78
		::System::String* productId; // 0x80
		::Il2CppArray<::System::String*>* queryProductArray; // 0x88
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

		::System::Void RefreshProductsCache(::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET))(this, a1);
		}

		::System::Void RequestPriceTier(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET))(this, a1, a2);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void GetProducts(::Il2CppArray<::System::String*>* a1, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_OFFSET))(this, a1, a2);
		}

		::System::Void GetProducts_1(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void PremiumPay(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_PREMIUMPAY_OFFSET))(this, a1);
		}

		::System::String* CreateFailPayCallback(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListSuccess(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnGetPriceTier(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONGETPRICETIER_OFFSET))(this, a1);
		}

		::System::Void OnPriceTierCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET))(this, a1);
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

		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct ConvertToHandheldProduct(::MiHoYo::SDK::PS::PayManager_PSProduct a1)
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::HandheldProduct(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERBASE_CONVERTTOHANDHELDPRODUCT_OFFSET))(this, a1);
		}
	};
}
