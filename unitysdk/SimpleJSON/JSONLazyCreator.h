#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SimpleJSON/JSONNode.h"

namespace SimpleJSON { class JSONArray; }
namespace SimpleJSON { class JSONClass; }
namespace System { class Object; }
namespace System { class String; }

#define SIMPLEJSON_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x1AC26840)
#define SIMPLEJSON_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x1AC26790)
#define SIMPLEJSON_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AC26980)
#define SIMPLEJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AC269A0)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x1AC26EB0)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1AC26D80)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1AC26C40)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1AC26B00)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x1AC269E0)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x1AC26F40)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1AC26660)
#define SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AC26560)
#define SIMPLEJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AC26940)
#define SIMPLEJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AC26960)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1AC26E10)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1AC26CE0)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1AC26BA0)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x1AC26A70)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1AC26690)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AC26590)
#define SIMPLEJSON_JSONLAZYCREATOR_SET_OFFSET UNITYSDK_OFFSET(0x1AC26500)
#define SIMPLEJSON_JSONLAZYCREATOR_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AC269D0)
#define SIMPLEJSON_JSONLAZYCREATOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC269C0)
#define SIMPLEJSON_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC23360)
#define SIMPLEJSON_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC21FA0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 9615;

	class JSONLazyCreator : public ::SimpleJSON::JSONNode
	{
	public:
		::SimpleJSON::JSONNode* m_Node; // 0x28
		::System::String* m_Key; // 0x30

		::System::Void _ctor(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::SimpleJSON::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::SimpleJSON::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_ADD_OFFSET))(this, a1);
		}

		::System::Void Add_1(::System::String* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_ADD_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean op_Equality(::SimpleJSON::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::SimpleJSON::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::SimpleJSON::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, a1);
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
