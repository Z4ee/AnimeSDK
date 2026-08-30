#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Product; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SDKPLATFORM_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AF57E40)
#define RPG_CLIENT_SDKPLATFORM_ONGETPRODUCTLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0x1AF58F00)
#define RPG_CLIENT_SDKPLATFORM_ONPAYRESPONSE_OFFSET UNITYSDK_OFFSET(0x1AF586F0)
#define RPG_CLIENT_SDKPLATFORM_PAYORDER_OFFSET UNITYSDK_OFFSET(0x1AF57ED0)
#define RPG_CLIENT_SDKPLATFORM_SHOWPSEMPTYSTOREDIALOG_OFFSET UNITYSDK_OFFSET(0x1AF594F0)
#define RPG_CLIENT_SDKPLATFORM_TRYGETITEMINFO_OFFSET UNITYSDK_OFFSET(0x1AF58A40)
#define RPG_CLIENT_SDKPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF57E30)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKPlatform_TypeDefinitionIndex = 60107;

	class SDKPlatform : public ::System::Object
	{
	public:
		static ::RPG::Client::SDKPlatform** StaticGet__instance()
		{
			return (::RPG::Client::SDKPlatform**)Il2CppClass::FromTypeDefinitionIndex(SDKPlatform_TypeDefinitionIndex)->GetStaticField(0x1E8A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SDKPlatform* Instance()
		{
			return ((::RPG::Client::SDKPlatform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_INSTANCE_OFFSET))();
		}

		::System::Void PayOrder(::System::String* a1, ::System::Action_1<::RPG::Client::PayProductResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_PAYORDER_OFFSET))(this, a1, a2);
		}

		::System::Void OnPayResponse(::System::String* a1, ::System::Action_1<::RPG::Client::PayProductResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::PayProductResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_ONPAYRESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Void TryGetItemInfo(::System::Collections::Generic::List_1<::RPG::Client::Product*>* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Product*>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_TRYGETITEMINFO_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListResponse(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_ONGETPRODUCTLISTRESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Void ShowPSEmptyStoreDialog(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKPLATFORM_SHOWPSEMPTYSTOREDIALOG_OFFSET))(this, a1);
		}
	};
}
