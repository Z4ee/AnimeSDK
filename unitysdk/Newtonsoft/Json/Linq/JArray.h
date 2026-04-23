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
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x17A84260)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A84270)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x17A82700)
#define NEWTONSOFT_JSON_LINQ_JARRAY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x17A84700)
#define NEWTONSOFT_JSON_LINQ_JARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x17A84740)
#define NEWTONSOFT_JSON_LINQ_JARRAY_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x17A82340)
#define NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_1_OFFSET UNITYSDK_OFFSET(0x17A82A40)
#define NEWTONSOFT_JSON_LINQ_JARRAY_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x17A82A20)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A84E60)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A84130)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x17A81DC0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x17A84DD0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x17A59200)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A82C50)
#define NEWTONSOFT_JSON_LINQ_JARRAY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A81DD0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x17A83520)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x17A83600)
#define NEWTONSOFT_JSON_LINQ_JARRAY_INSERT_OFFSET UNITYSDK_OFFSET(0x17A836E0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_1_OFFSET UNITYSDK_OFFSET(0x17A82760)
#define NEWTONSOFT_JSON_LINQ_JARRAY_LOAD_OFFSET UNITYSDK_OFFSET(0x17A591F0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x17A83BF0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x17A84DE0)
#define NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A82E80)
#define NEWTONSOFT_JSON_LINQ_JARRAY_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A82B70)
#define NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A81E50)
#define NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A82210)
#define NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x17A81DE0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JArray_TypeDefinitionIndex = 8525;

	class JArray : public ::Newtonsoft::Json::Linq::JContainer
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* _values; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JArray* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JArray*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY__CTOR_2_OFFSET))(this, content);
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

		::Newtonsoft::Json::Linq::JToken* get_Item_1(::System::Int32 index)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_GET_ITEM_1_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JARRAY_INDEXOFITEM_OFFSET))(this, item);
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
