#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JContainer.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JsonMergeSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x1E12F7E0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x1E12F740)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12FE40)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x1E12F240)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E12FC30)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E12F3C0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E12F3E0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x1E12F250)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1E12FEF0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET UNITYSDK_OFFSET(0x1E12FEE0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_MERGEITEM_OFFSET UNITYSDK_OFFSET(0x1E12F330)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E12FD30)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E12F3D0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12F8B0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12F4D0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E12F580)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E12F5B0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E12F5E0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E12F3F0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JConstructor_TypeDefinitionIndex = 7169;

	class JConstructor : public ::Newtonsoft::Json::Linq::JContainer
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* _values; // 0x40
		::System::String* _name; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JConstructor* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JConstructor*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2(::System::String* name, ::Il2CppArray<::System::Object*>* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_2_OFFSET))(this, name, content);
		}

		::System::Void _ctor_3(::System::String* name, ::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_3_OFFSET))(this, name, content);
		}

		::System::Void _ctor_4(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_4_OFFSET))(this, name);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_CHILDRENTOKENS_OFFSET))(this);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_INDEXOFITEM_OFFSET))(this, item);
		}

		::System::Void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_MERGEITEM_OFFSET))(this, content, settings);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_SET_NAME_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_DEEPEQUALS_OFFSET))(this, node);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_CLONETOKEN_OFFSET))(this);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETO_OFFSET))(this, writer, converters);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GETDEEPHASHCODE_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Newtonsoft::Json::Linq::JConstructor*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET))(reader);
		}

		static ::Newtonsoft::Json::Linq::JConstructor* Load_1(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JConstructor*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_1_OFFSET))(reader, settings);
		}
	};
}
