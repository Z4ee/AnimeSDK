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

#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_CONVERTTOCONSOLEPRODUCT_OFFSET UNITYSDK_OFFSET(0x1B91D0E0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B91C180)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1B91A2C0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET UNITYSDK_OFFSET(0x1B91CFC0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x1B91A5A0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET UNITYSDK_OFFSET(0x1B91AC00)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1B91B0C0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B919F30)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRICETIER_OFFSET UNITYSDK_OFFSET(0x1B91CE30)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x1B91A8D0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1B91C350)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x1B91C740)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x1B91BE70)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x1B91CAC0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B91CF90)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_PAY_OFFSET UNITYSDK_OFFSET(0x1B91B340)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_PREMIUMPAY_OFFSET UNITYSDK_OFFSET(0x1B91C0F0)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET UNITYSDK_OFFSET(0x1B91A320)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET UNITYSDK_OFFSET(0x1B91A330)
#define MIHOYO_SDK_CONSOLE_PAYMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91D100)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PayManagerBase_TypeDefinitionIndex = 8923;

	class PayManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::PayManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::PayManagerBase**)Il2CppClass::FromTypeDefinitionIndex(PayManagerBase_TypeDefinitionIndex)->GetStaticField(0x9CF0);
		}
		static ::MiHoYo::SDK::ReportType* StaticGet_ConsoleReportType()
		{
			return (::MiHoYo::SDK::ReportType*)Il2CppClass::FromTypeDefinitionIndex(PayManagerBase_TypeDefinitionIndex)->GetStaticField(0x2280);
		}
		::MiHoYo::SDK::Console::ConsoleProduct purchasingProduct; // 0x10
		::System::Action_1<::System::String*>* payCallback; // 0x40
		::System::Action_1<::System::String*>* priceTierCallback; // 0x48
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x50
		::System::Action_1<::System::String*>* productsCallback; // 0x58
		::System::String* productId; // 0x60
		::System::String* countryCode; // 0x68
		::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* cacheProducts; // 0x70
		::System::String* deliveryURL; // 0x78
		::Il2CppArray<::System::String*>* queryProductArray; // 0x80
		::System::String* payLifecycleId; // 0x88
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

		::System::Void RefreshProductsCache(::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_REFRESHPRODUCTSCACHE_OFFSET))(this, a1);
		}

		::System::Void RequestPriceTier(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_REQUESTPRICETIER_OFFSET))(this, a1, a2);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void GetProducts(::Il2CppArray<::System::String*>* a1, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_2<::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTS_OFFSET))(this, a1, a2);
		}

		::System::Void GetProducts_1(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETPRODUCTS_1_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void PremiumPay(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_PREMIUMPAY_OFFSET))(this, a1);
		}

		::System::String* CreateFailPayCallback(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_CREATEFAILPAYCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListSuccess(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRODUCTLISTSUCCESS_OFFSET))(this, a1);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackFail(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKFAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void OnGetPriceTier(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONGETPRICETIER_OFFSET))(this, a1);
		}

		::System::Void OnPriceTierCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ONPRICETIERCALLBACK_OFFSET))(this, a1);
		}

		::System::String* GetCurrentContryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_GETCURRENTCONTRYCODE_OFFSET))(this);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::MiHoYo::SDK::Console::ConsoleProduct ConvertToConsoleProduct(::MiHoYo::SDK::PS::PayManager_PSProduct a1)
		{
			return ((::MiHoYo::SDK::Console::ConsoleProduct(*)(::PVOID, ::MiHoYo::SDK::PS::PayManager_PSProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PAYMANAGERBASE_CONVERTTOCONSOLEPRODUCT_OFFSET))(this, a1);
		}
	};
}
