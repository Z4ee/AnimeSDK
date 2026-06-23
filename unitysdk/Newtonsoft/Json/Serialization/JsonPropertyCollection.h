#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/KeyedCollection_2.h"
#include "unitysdk/System/StringComparison.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_ADDPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D62EBF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETCLOSESTMATCHPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D62EEE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x1D62EBD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D62EF20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D62F0C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62E180)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonPropertyCollection_TypeDefinitionIndex = 7134;

	class JsonPropertyCollection : public ::System::Collections::ObjectModel::KeyedCollection_2<::System::String*, ::Newtonsoft::Json::Serialization::JsonProperty*>
	{
	public:
		::System::Type* _type; // 0x38
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonProperty*>* _list; // 0x40

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION__CTOR_OFFSET))(this, type);
		}

		::System::String* GetKeyForItem(::Newtonsoft::Json::Serialization::JsonProperty* item)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETKEYFORITEM_OFFSET))(this, item);
		}

		::System::Void AddProperty(::Newtonsoft::Json::Serialization::JsonProperty* property)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_ADDPROPERTY_OFFSET))(this, property);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* GetClosestMatchProperty(::System::String* propertyName)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETCLOSESTMATCHPROPERTY_OFFSET))(this, propertyName);
		}

		::System::Boolean TryGetValue(::System::String* key, ::Newtonsoft::Json::Serialization::JsonProperty*& item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Serialization::JsonProperty*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_TRYGETVALUE_OFFSET))(this, key, item);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* GetProperty(::System::String* propertyName, ::System::StringComparison comparisonType)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETPROPERTY_OFFSET))(this, propertyName, comparisonType);
		}
	};
}
