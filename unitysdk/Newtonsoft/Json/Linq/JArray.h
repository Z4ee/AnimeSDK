#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JContainer.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JsonMergeSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1EF06D90)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EF06DA0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x1EF05F60)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1EF06DB0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1EF06DD0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x1EF05EF0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1EF06550)
#define NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1EF06530)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EF06E30)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EF06CB0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x1EF05BA0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1EF06DE0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1EF06960)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EF06750)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EF05BB0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x1EF06980)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1EF06BB0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INSERT_OFFSET UNITYSDK_OFFSET(0x1EF06C90)
#define NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1EF06030)
#define NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_OFFSET UNITYSDK_OFFSET(0x1EF06020)
#define NEWTONSOFT_JSON_LINQ_JARRAY_MERGEITEM_OFFSET UNITYSDK_OFFSET(0x1EF06A60)
#define NEWTONSOFT_JSON_LINQ_JARRAY_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1EF062A0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_PARSE_OFFSET UNITYSDK_OFFSET(0x1EF06290)
#define NEWTONSOFT_JSON_LINQ_JARRAY_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1EF06CA0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1EF06DF0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1EF06970)
#define NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EF06850)
#define NEWTONSOFT_JSON_LINQ_JARRAY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EF06670)
#define NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF05CA0)
#define NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EF05D30)
#define NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1EF05E10)
#define NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF05BC0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JArray_TypeDefinitionIndex = 7172;

	class JArray : public ::Newtonsoft::Json::Linq::JContainer
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* _values; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JArray* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JArray*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Object*>* content)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_2_OFFSET))(this, content);
		}

		::System::Void _ctor_3(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_3_OFFSET))(this, content);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_CHILDRENTOKENS_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_DEEPEQUALS_OFFSET))(this, node);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_CLONETOKEN_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Newtonsoft::Json::Linq::JArray*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_OFFSET))(reader);
		}

		static ::Newtonsoft::Json::Linq::JArray* Load_1(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JArray*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_1_OFFSET))(reader, settings);
		}

		static ::Newtonsoft::Json::Linq::JArray* Parse(::System::String* json)
		{
			return ((::Newtonsoft::Json::Linq::JArray*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_PARSE_OFFSET))(json);
		}

		static ::Newtonsoft::Json::Linq::JArray* Parse_1(::System::String* json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JArray*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_PARSE_1_OFFSET))(json, settings);
		}

		static ::Newtonsoft::Json::Linq::JArray* FromObject(::System::Object* o)
		{
			return ((::Newtonsoft::Json::Linq::JArray*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_OFFSET))(o);
		}

		static ::Newtonsoft::Json::Linq::JArray* FromObject_1(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::Newtonsoft::Json::Linq::JArray*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_1_OFFSET))(o, jsonSerializer);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_WRITETO_OFFSET))(this, writer, converters);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_OFFSET))(this, key, value);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item_1(::System::Int32 index)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_1_OFFSET))(this, index);
		}

		::System::Void set_Item_1(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_1_OFFSET))(this, index, value);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOFITEM_OFFSET))(this, item);
		}

		::System::Void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_MERGEITEM_OFFSET))(this, content, settings);
		}

		::System::Int32 IndexOf(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOF_OFFSET))(this, item);
		}

		::System::Void Insert(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_INSERT_OFFSET))(this, index, item);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_REMOVEAT_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_ADD_OFFSET))(this, item);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_CONTAINS_OFFSET))(this, item);
		}

		::System::Void CopyTo(::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean Remove(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_REMOVE_OFFSET))(this, item);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GETDEEPHASHCODE_OFFSET))(this);
		}
	};
}
