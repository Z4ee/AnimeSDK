#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/KeyedCollection_2.h"
#include "unitysdk/System/StringComparison.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_ADDPROPERTY_OFFSET UNITYSDK_OFFSET(0x172D93B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETCLOSESTMATCHPROPERTY_OFFSET UNITYSDK_OFFSET(0x172D9360)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x172E9390)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x172E93B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x172E9480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x172D9220)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonPropertyCollection_TypeDefinitionIndex = 9672;

	class JsonPropertyCollection : public ::System::Collections::ObjectModel::KeyedCollection_2<::System::String*, ::Newtonsoft::Json::Serialization::JsonProperty*>
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* _list; // 0x38
		::System::Type* _type; // 0x40

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetKeyForItem(::Newtonsoft::Json::Serialization::JsonProperty* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETKEYFORITEM_OFFSET))(this, a1);
		}

		::System::Void AddProperty(::Newtonsoft::Json::Serialization::JsonProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_ADDPROPERTY_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* GetClosestMatchProperty(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETCLOSESTMATCHPROPERTY_OFFSET))(this, a1);
		}

		::System::Boolean TryGetValue(::System::String* a1, ::Newtonsoft::Json::Serialization::JsonProperty*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Serialization::JsonProperty*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* GetProperty(::System::String* a1, ::System::StringComparison a2)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
