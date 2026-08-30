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

#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x1815ADB0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x1815AD10)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x1815B540)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x1815AA80)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1815B460)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1815AB20)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1815AB30)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x1815AA90)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET UNITYSDK_OFFSET(0x1815B5E0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1815AE50)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1815ABB0)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1815AC30)
#define NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1815AB40)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JConstructor_TypeDefinitionIndex = 9712;

	class JConstructor : public ::Newtonsoft::Json::Linq::JContainer
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* _values; // 0x48
		::System::String* _name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JConstructor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JConstructor*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR__CTOR_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_CHILDRENTOKENS_OFFSET))(this);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_INDEXOFITEM_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_NAME_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_DEEPEQUALS_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_CLONETOKEN_OFFSET))(this);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* a1, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_WRITETO_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_GETDEEPHASHCODE_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Linq::JsonLoadSettings* a2)
		{
			return ((::Newtonsoft::Json::Linq::JConstructor*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONSTRUCTOR_LOAD_OFFSET))(a1, a2);
		}
	};
}
