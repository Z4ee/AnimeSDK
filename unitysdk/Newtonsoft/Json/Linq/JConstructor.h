#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JContainer.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x17A85490)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x17A85410)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A859C0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x17A85170)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A85840)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17A85260)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A85270)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x17A85180)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET UNITYSDK_OFFSET(0x17A85A60)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A85500)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A852D0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A85330)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17A85280)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JConstructor_TypeDefinitionIndex = 8518;

	class JConstructor : public ::Newtonsoft::Json::Linq::JContainer
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* _values; // 0x48
		::System::String* _name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JConstructor* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JConstructor*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_2_OFFSET))(this, name);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_CHILDRENTOKENS_OFFSET))(this);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_INDEXOFITEM_OFFSET))(this, item);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_NAME_OFFSET))(this);
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

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GETDEEPHASHCODE_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JConstructor*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET))(reader, settings);
		}
	};
}
