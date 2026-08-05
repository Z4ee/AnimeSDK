#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/PS/PayManager_PSProduct.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_CONVERTTOCONSOLEPRODUCT_OFFSET UNITYSDK_OFFSET(0x1BDC5340)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BDC3D30)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1BDC1D20)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET UNITYSDK_OFFSET(0x1BDC5290)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1BDC20A0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET UNITYSDK_OFFSET(0x1BDC2830)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1BDC2C60)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BDC19A0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1BDC4FC0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1BDC23B0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BDC4030)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1BDC4580)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1BDC3990)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BDC4AA0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BDC5230)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_PAY_OFFSET UNITYSDK_OFFSET(0x1BDC2DB0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_PREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1BDC3D10)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET UNITYSDK_OFFSET(0x1BDC1DB0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1BDC1DC0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC5360)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PayManagerBase_TypeDefinitionIndex = 21076;

	class PayManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::PayManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::PayManagerBase**)Il2CppClass::FromTypeDefinitionIndex(PayManagerBase_TypeDefinitionIndex)->GetStaticField(0x9940);
		}
		static ::MiHoYo::SDK::ReportType* StaticGet_ConsoleReportType()
		{
			return (::MiHoYo::SDK::ReportType*)Il2CppClass::FromTypeDefinitionIndex(PayManagerBase_TypeDefinitionIndex)->GetStaticField(0x45B0);
		}
		::MiHoYo::SDK::Console::ConsoleProduct purchasingProduct; // 0x10
		::System::String* countryCode; // 0x40
		::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* cacheProducts; // 0x48
		::System::String* payLifecycleId; // 0x50
		::System::String* productId; // 0x58
		::System::Action_1<::System::String*>* productsCallback; // 0x60
		::System::Action_1<::System::String*>* payCallback; // 0x68
		::System::String* deliveryURL; // 0x70
		::System::Action_1<::System::String*>* priceTierCallback; // 0x78
		::Il2CppArray<::System::String*>* queryProductArray; // 0x80
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x88
		::MiHoYo::SDK::EnvType _envType; // 0x90
		::System::Boolean isGettingProducts; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::PayManagerBase* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::PayManagerBase*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GET_INSTANCE_OFFSET))();
		}

		::System::Void RefreshProductsCache(::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* products)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET))(this, products);
		}

		::System::Void RequestPriceTier(::System::Action_1<::System::String*>* callback, ::System::String* currency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET))(this, callback, currency);
		}

		::System::Void GetProductList(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET))(this, jsonString, callback);
		}

		::System::Void GetProducts(::Il2CppArray<::System::String*>* idList, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTS_OFFSET))(this, idList, callback);
		}

		::System::Void GetProducts_1(::MiHoYo::SDK::JSONArray* productArray)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET))(this, productArray);
		}

		::System::Void Pay(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_PAY_OFFSET))(this, jsonString, callback);
		}

		::System::Void PremiumPay(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_PREMIUMPAY_OFFSET))(this, callback);
		}

		::System::String* CreateFailPayCallback(::System::String* msg, ::System::String* errMsg)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET))(this, msg, errMsg);
		}

		::System::Void OnGetProductListSuccess(::MiHoYo::SDK::JSONArray* productArray)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, productArray);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* callback, ::System::Int32 retcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET))(this, callback, retcode);
		}

		::System::Void OnPayCallbackFail(::System::String* msg, ::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET))(this, msg, errMsg);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnGetPriceTier(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRICETIER_OFFSET))(this, response);
		}

		::System::Void OnPriceTierCallback(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET))(this, response);
		}

		::System::String* GetCurrentContryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET))(this);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::MiHoYo::SDK::Console::ConsoleProduct ConvertToConsoleProduct(::MiHoYo::SDK::PS::PayManager_PSProduct product)
		{
			return ((::MiHoYo::SDK::Console::ConsoleProduct(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_CONVERTTOCONSOLEPRODUCT_OFFSET))(this, product);
		}
	};
}
