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

#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x181623A0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x181624D0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_CONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x18162380)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x18162430)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x18162730)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GETITEM_OFFSET UNITYSDK_OFFSET(0x181621B0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x18161D40)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18161D50)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18162560)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1815DE80)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x18162340)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x18161D60)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_LOAD_OFFSET UNITYSDK_OFFSET(0x18162850)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEMAT_OFFSET UNITYSDK_OFFSET(0x181622B0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x18162220)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_SETITEM_OFFSET UNITYSDK_OFFSET(0x18161EA0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1815FCA0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETO_OFFSET UNITYSDK_OFFSET(0x18162570)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1815DF60)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1815FD50)
#define NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18162140)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JProperty_TypeDefinitionIndex = 9729;

	class JProperty : public ::Newtonsoft::Json::Linq::JContainer
	{
	public:
		::Newtonsoft::Json::Linq::JProperty_JPropertyList* _content; // 0x48
		::System::String* _name; // 0x50

		::System::Void _ctor(::Newtonsoft::Json::Linq::JProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY__CTOR_2_OFFSET))(this, a1, a2);
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

		::System::Void set_Value(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_SET_VALUE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* GetItem(::System::Int32 a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GETITEM_OFFSET))(this, a1);
		}

		::System::Void SetItem(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_SETITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveItem(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void RemoveItemAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_REMOVEITEMAT_OFFSET))(this, a1);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_INDEXOFITEM_OFFSET))(this, a1);
		}

		::System::Void InsertItem(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_INSERTITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ContainsItem(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CONTAINSITEM_OFFSET))(this, a1);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CLEARITEMS_OFFSET))(this);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_DEEPEQUALS_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_CLONETOKEN_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GET_TYPE_OFFSET))(this);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* a1, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_WRITETO_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_GETDEEPHASHCODE_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Linq::JsonLoadSettings* a2)
		{
			return ((::Newtonsoft::Json::Linq::JProperty*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTY_LOAD_OFFSET))(a1, a2);
		}
	};
}
