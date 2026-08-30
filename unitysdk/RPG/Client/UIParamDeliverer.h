#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIParamDeliverer_UIParamDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UIPARAMDELIVERER_HASKEY_OFFSET UNITYSDK_OFFSET(0xE3A20F0)
#define RPG_CLIENT_UIPARAMDELIVERER_TRYGETFLOATVALUE_OFFSET UNITYSDK_OFFSET(0xE3A2460)
#define RPG_CLIENT_UIPARAMDELIVERER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0xE3A22C0)
#define RPG_CLIENT_UIPARAMDELIVERER__CTOR_OFFSET UNITYSDK_OFFSET(0xE3A24E0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIParamDeliverer_TypeDefinitionIndex = 69074;

	class UIParamDeliverer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UIParamDeliverer_UIParamDataItem*>* _UIParamDataItemList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER__CTOR_OFFSET))(this);
		}

		::System::Boolean HasKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER_HASKEY_OFFSET))(this, a1);
		}

		::System::String* TryGetValue(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER_TRYGETVALUE_OFFSET))(this, a1);
		}

		::System::Single TryGetFloatValue(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARAMDELIVERER_TRYGETFLOATVALUE_OFFSET))(this, a1);
		}
	};
}
