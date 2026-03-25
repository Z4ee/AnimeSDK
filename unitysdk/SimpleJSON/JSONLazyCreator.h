#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SimpleJSON/JSONNode.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace System { class Object; }
namespace System { class String; }

#define SIMPLEJSON_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x18358520)
#define SIMPLEJSON_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x18358470)
#define SIMPLEJSON_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x18358660)
#define SIMPLEJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18358680)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x18358B90)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x18358A60)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x18358920)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x183587E0)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x183586C0)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x18358C20)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18358340)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18358240)
#define SIMPLEJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18358620)
#define SIMPLEJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18358640)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x18358AF0)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x183589C0)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x18358880)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x18358750)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18358370)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18358270)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_OFFSET UNITYSDK_OFFSET(0x183581E0)
#define SIMPLEJSON_JSONLAZYCREATOR_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x183586B0)
#define SIMPLEJSON_JSONLAZYCREATOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183586A0)
#define SIMPLEJSON_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18354D20)
#define SIMPLEJSON_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18353B70)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 9655;

	class JSONLazyCreator : public ::SimpleJSON::JSONNode
	{
	public:
		::System::String* m_Key; // 0x28
		::SimpleJSON::JSONNode* m_Node; // 0x30

		::System::Void _ctor(::SimpleJSON::JSONNode* aNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR__CTOR_OFFSET))(this, aNode);
		}

		::System::Void _ctor_1(::SimpleJSON::JSONNode* aNode, ::System::String* aKey)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, aNode, aKey);
		}

		::System::Void Set(::SimpleJSON::JSONNode* aVal)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_OFFSET))(this, aVal);
		}

		::SimpleJSON::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::SimpleJSON::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Void Add(::SimpleJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_ADD_OFFSET))(this, aItem);
		}

		::System::Void Add_1(::System::String* aKey, ::SimpleJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_ADD_1_OFFSET))(this, aKey, aItem);
		}

		static ::System::Boolean op_Equality(::SimpleJSON::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::SimpleJSON::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* aPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_TOSTRING_1_OFFSET))(this, aPrefix);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, value);
		}

		::SimpleJSON::JSONArray* get_AsArray()
		{
			return ((::SimpleJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::SimpleJSON::JSONClass* get_AsObject()
		{
			return ((::SimpleJSON::JSONClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}
	};
}
