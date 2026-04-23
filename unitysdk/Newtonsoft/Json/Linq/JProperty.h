#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JContainer.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JProperty_JPropertyList; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x17A8A2A0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x17A8A3B0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x17A8A280)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x17A8A330)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A8A4B0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GETITEM_OFFSET UNITYSDK_OFFSET(0x17A8A0B0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x17A89D90)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17A89DA0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A8A420)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17A87100)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x17A8A240)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x17A89DB0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_LOAD_OFFSET UNITYSDK_OFFSET(0x17A8A570)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEMAT_OFFSET UNITYSDK_OFFSET(0x17A8A1B0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x17A8A120)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_SETITEM_OFFSET UNITYSDK_OFFSET(0x17A89E90)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17A881C0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A8A430)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A871C0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A882A0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8A040)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JProperty_TypeDefinitionIndex = 8535;

	class JProperty : public ::Newtonsoft::Json::Linq::JContainer
	{
	public:
		::System::String* _name; // 0x48
		::Newtonsoft::Json::Linq::JProperty_JPropertyList* _content; // 0x50

		::System::Void _ctor(::Newtonsoft::Json::Linq::JProperty* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_OFFSET))(this, other);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_2_OFFSET))(this, name, content);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_CHILDRENTOKENS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_NAME_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Value()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_SET_VALUE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Linq::JToken* GetItem(::System::Int32 index)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GETITEM_OFFSET))(this, index);
		}

		::System::Void SetItem(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_SETITEM_OFFSET))(this, index, item);
		}

		::System::Boolean RemoveItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEM_OFFSET))(this, item);
		}

		::System::Void RemoveItemAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEMAT_OFFSET))(this, index);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_INDEXOFITEM_OFFSET))(this, item);
		}

		::System::Void InsertItem(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item, ::System::Boolean skipParentCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_INSERTITEM_OFFSET))(this, index, item, skipParentCheck);
		}

		::System::Boolean ContainsItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CONTAINSITEM_OFFSET))(this, item);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CLEARITEMS_OFFSET))(this);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_DEEPEQUALS_OFFSET))(this, node);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CLONETOKEN_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_TYPE_OFFSET))(this);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETO_OFFSET))(this, writer, converters);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GETDEEPHASHCODE_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JProperty*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_LOAD_OFFSET))(reader, settings);
		}
	};
}
