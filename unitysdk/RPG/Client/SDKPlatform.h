#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Product; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SDKPLATFORM_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA4143B0)
#define RPG_CLIENT_SDKPLATFORM_ONGETPRODUCTLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xA415080)
#define RPG_CLIENT_SDKPLATFORM_ONPAYRESPONSE_OFFSET UNITYSDK_OFFSET(0xA414AE0)
#define RPG_CLIENT_SDKPLATFORM_PAYORDER_OFFSET UNITYSDK_OFFSET(0xA414440)
#define RPG_CLIENT_SDKPLATFORM_SHOWPSEMPTYSTOREDIALOG_OFFSET UNITYSDK_OFFSET(0xA4153E0)
#define RPG_CLIENT_SDKPLATFORM_TRYGETITEMINFO_OFFSET UNITYSDK_OFFSET(0xA414C70)
#define RPG_CLIENT_SDKPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xA4143A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKPlatform_TypeDefinitionIndex = 48587;

	class SDKPlatform : public ::System::Object
	{
	public:
		static ::RPG::Client::SDKPlatform** StaticGet__instance()
		{
			return (::RPG::Client::SDKPlatform**)Il2CppClass::FromTypeDefinitionIndex(SDKPlatform_TypeDefinitionIndex)->GetStaticField(0x22330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SDKPlatform* Instance()
		{
			return ((::RPG::Client::SDKPlatform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_INSTANCE_OFFSET))();
		}

		::System::Void PayOrder(::System::String* ProductID, ::System::Action_1<::RPG::Client::PayProductResult>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_PAYORDER_OFFSET))(this, ProductID, callback);
		}

		::System::Void OnPayResponse(::System::String* response, ::System::Action_1<::RPG::Client::PayProductResult>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_ONPAYRESPONSE_OFFSET))(this, response, callback);
		}

		::System::Void TryGetItemInfo(::System::Collections::Generic::List_1<::RPG::Client::Product*>* products, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Product*>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_TRYGETITEMINFO_OFFSET))(this, products, callback);
		}

		::System::Void OnGetProductListResponse(::System::String* response, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_ONGETPRODUCTLISTRESPONSE_OFFSET))(this, response, callback);
		}

		::System::Void ShowPSEmptyStoreDialog(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_SHOWPSEMPTYSTOREDIALOG_OFFSET))(this, callback);
		}
	};
}
