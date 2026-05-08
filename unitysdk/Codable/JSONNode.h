#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONNode_KeyEnumerator.h"
#include "unitysdk/Codable/JSONNode_ValueEnumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Codable { class JSONArray; }
namespace Codable { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1A1C9270)
#define CODABLE_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x1A1C9260)
#define CODABLE_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1C9F70)
#define CODABLE_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1A1CA100)
#define CODABLE_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1C9F80)
#define CODABLE_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x1A1C9810)
#define CODABLE_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1A1C9710)
#define CODABLE_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1A1C95F0)
#define CODABLE_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1A1C96D0)
#define CODABLE_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x1A1C9690)
#define CODABLE_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x1A1C9880)
#define CODABLE_JSONNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1A1C92F0)
#define CODABLE_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A1C91D0)
#define CODABLE_JSONNODE_GET_DEEPCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A1C9360)
#define CODABLE_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0x1A1C9F90)
#define CODABLE_JSONNODE_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1A1C9240)
#define CODABLE_JSONNODE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1A1C9220)
#define CODABLE_JSONNODE_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1A1C9200)
#define CODABLE_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1A1C9210)
#define CODABLE_JSONNODE_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x1A1C91E0)
#define CODABLE_JSONNODE_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1A1C9230)
#define CODABLE_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1A1C91F0)
#define CODABLE_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1A1C9160)
#define CODABLE_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A1C9140)
#define CODABLE_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1A1C9550)
#define CODABLE_JSONNODE_GET_LINQ_OFFSET UNITYSDK_OFFSET(0x1A1C9500)
#define CODABLE_JSONNODE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1A1C95A0)
#define CODABLE_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A1C9180)
#define CODABLE_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A1C99F0)
#define CODABLE_JSONNODE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x1A1C9F50)
#define CODABLE_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A1C9930)
#define CODABLE_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1A1C9B30)
#define CODABLE_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1A1C9B80)
#define CODABLE_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1A1C9C40)
#define CODABLE_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1A1C9C90)
#define CODABLE_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1A1C9D50)
#define CODABLE_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1A1C9D90)
#define CODABLE_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1A1C9E50)
#define CODABLE_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1A1C9E90)
#define CODABLE_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A1C98F0)
#define CODABLE_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A1C9F60)
#define CODABLE_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1A1CA3F0)
#define CODABLE_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x1A1CA6F0)
#define CODABLE_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1A1C92D0)
#define CODABLE_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1A1C92E0)
#define CODABLE_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A1C92C0)
#define CODABLE_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1A1C97A0)
#define CODABLE_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1A1C9640)
#define CODABLE_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1A1C96F0)
#define CODABLE_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x1A1C96B0)
#define CODABLE_JSONNODE_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1A1C9250)
#define CODABLE_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1A1C9170)
#define CODABLE_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A1C9150)
#define CODABLE_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A1C91C0)
#define CODABLE_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A1C9460)
#define CODABLE_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1C93C0)
#define CODABLE_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1CB6E0)
#define CODABLE_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CB6D0)

namespace Codable
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 34889;

	class JSONNode : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_forceASCII()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x81F0);
		}
		static ::System::Text::StringBuilder** StaticGet_m_EscapeBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__CCTOR_OFFSET))();
		}

		::Codable::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::Codable::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::Codable::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::Codable::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ISNUMBER_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ISBOOLEAN_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ISOBJECT_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_INLINE_OFFSET))(this, value);
		}

		::System::Void Add(::System::String* aKey, ::Codable::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ADD_OFFSET))(this, aKey, aItem);
		}

		::System::Void Add_1(::Codable::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ADD_1_OFFSET))(this, aItem);
		}

		::Codable::JSONNode* Remove(::System::String* aKey)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_REMOVE_OFFSET))(this, aKey);
		}

		::Codable::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_REMOVE_1_OFFSET))(this, aIndex);
		}

		::Codable::JSONNode* Remove_2(::Codable::JSONNode* aNode)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>* get_DeepChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_DEEPCHILDREN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 aIndent)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_TOSTRING_1_OFFSET))(this, aIndent);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>>* get_Linq()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_LINQ_OFFSET))(this);
		}

		::Codable::JSONNode_KeyEnumerator get_Keys()
		{
			return ((::Codable::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_KEYS_OFFSET))(this);
		}

		::Codable::JSONNode_ValueEnumerator get_Values()
		{
			return ((::Codable::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_VALUES_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ASBOOL_OFFSET))(this, value);
		}

		::Codable::JSONArray* get_AsArray()
		{
			return ((::Codable::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::Codable::JSONObject* get_AsObject()
		{
			return ((::Codable::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::Codable::JSONNode* op_Implicit(::System::String* s)
		{
			return ((::Codable::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_OFFSET))(s);
		}

		static ::System::String* op_Implicit_1(::Codable::JSONNode* d)
		{
			return ((::System::String*(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_1_OFFSET))(d);
		}

		static ::Codable::JSONNode* op_Implicit_2(::System::Double n)
		{
			return ((::Codable::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_2_OFFSET))(n);
		}

		static ::System::Double op_Implicit_3(::Codable::JSONNode* d)
		{
			return ((::System::Double(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_3_OFFSET))(d);
		}

		static ::Codable::JSONNode* op_Implicit_4(::System::Single n)
		{
			return ((::Codable::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_4_OFFSET))(n);
		}

		static ::System::Single op_Implicit_5(::Codable::JSONNode* d)
		{
			return ((::System::Single(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_5_OFFSET))(d);
		}

		static ::Codable::JSONNode* op_Implicit_6(::System::Int32 n)
		{
			return ((::Codable::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_6_OFFSET))(n);
		}

		static ::System::Int32 op_Implicit_7(::Codable::JSONNode* d)
		{
			return ((::System::Int32(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_7_OFFSET))(d);
		}

		static ::Codable::JSONNode* op_Implicit_8(::System::Boolean b)
		{
			return ((::Codable::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_8_OFFSET))(b);
		}

		static ::System::Boolean op_Implicit_9(::Codable::JSONNode* d)
		{
			return ((::System::Boolean(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_9_OFFSET))(d);
		}

		static ::Codable::JSONNode* op_Implicit_10(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*> aKeyValue)
		{
			return ((::Codable::JSONNode*(*)(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_10_OFFSET))(aKeyValue);
		}

		static ::System::Boolean op_Equality(::Codable::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::Codable::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Codable::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::Codable::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* aText)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ESCAPE_OFFSET))(aText);
		}

		static ::System::Void ParseElement(::Codable::JSONNode* ctx, ::System::String* token, ::System::String* tokenName, ::System::Boolean quoted)
		{
			return ((::System::Void(*)(::Codable::JSONNode*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_PARSEELEMENT_OFFSET))(ctx, token, tokenName, quoted);
		}

		static ::Codable::JSONNode* Parse(::System::String* aJSON)
		{
			return ((::Codable::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_PARSE_OFFSET))(aJSON);
		}
	};
}
