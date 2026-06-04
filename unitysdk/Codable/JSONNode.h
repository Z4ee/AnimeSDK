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

#define CODABLE_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0xA0A09A0)
#define CODABLE_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0xA0A18E0)
#define CODABLE_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0A2290)
#define CODABLE_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0xA0A2400)
#define CODABLE_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0A22A0)
#define CODABLE_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0xA0A1EE0)
#define CODABLE_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA0A1E20)
#define CODABLE_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA0A1D00)
#define CODABLE_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xA0A1DE0)
#define CODABLE_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0xA0A1DA0)
#define CODABLE_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0xA0A1F50)
#define CODABLE_JSONNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0xA0A1920)
#define CODABLE_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA0A1850)
#define CODABLE_JSONNODE_GET_DEEPCHILDREN_OFFSET UNITYSDK_OFFSET(0xA0A1990)
#define CODABLE_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0xA0A22B0)
#define CODABLE_JSONNODE_GET_INLINE_OFFSET UNITYSDK_OFFSET(0xA0A18C0)
#define CODABLE_JSONNODE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0xA0A18A0)
#define CODABLE_JSONNODE_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0xA0A1880)
#define CODABLE_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0xA0A1890)
#define CODABLE_JSONNODE_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0xA0A1860)
#define CODABLE_JSONNODE_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0xA0A18B0)
#define CODABLE_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0xA0A1870)
#define CODABLE_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xA0A1810)
#define CODABLE_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0A17F0)
#define CODABLE_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0xA0A1C60)
#define CODABLE_JSONNODE_GET_LINQ_OFFSET UNITYSDK_OFFSET(0xA0A1B50)
#define CODABLE_JSONNODE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0xA0A1CB0)
#define CODABLE_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0A1830)
#define CODABLE_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA09F410)
#define CODABLE_JSONNODE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0xA0A2270)
#define CODABLE_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0xA0A2010)
#define CODABLE_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0xA0A2050)
#define CODABLE_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0xA0A20A0)
#define CODABLE_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0xA0A20E0)
#define CODABLE_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0xA0A2130)
#define CODABLE_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0xA0A2170)
#define CODABLE_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0xA0A21B0)
#define CODABLE_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0xA0A21F0)
#define CODABLE_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0xA0A2230)
#define CODABLE_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA0A1FC0)
#define CODABLE_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA0A2280)
#define CODABLE_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0xA0A27E0)
#define CODABLE_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0xA0A2AA0)
#define CODABLE_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0xA0A1900)
#define CODABLE_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0xA0A1910)
#define CODABLE_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA0A18F0)
#define CODABLE_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA0A1EA0)
#define CODABLE_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA0A1D50)
#define CODABLE_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xA0A1E00)
#define CODABLE_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0xA0A1DC0)
#define CODABLE_JSONNODE_SET_INLINE_OFFSET UNITYSDK_OFFSET(0xA0A18D0)
#define CODABLE_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xA0A1820)
#define CODABLE_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0A1800)
#define CODABLE_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0A1840)
#define CODABLE_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA0A1AB0)
#define CODABLE_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0A1A10)
#define CODABLE_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A02E0)

namespace Codable
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 43473;

	class JSONNode : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_forceASCII()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x138E0);
		}
		static ::System::Text::StringBuilder** StaticGet_m_EscapeBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE__CTOR_OFFSET))(this);
		}

		::Codable::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::Codable::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_VALUE_OFFSET))(this, a1);
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

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_INLINE_OFFSET))(this, a1);
		}

		::System::Void Add(::System::String* a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Add_1(::Codable::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ADD_1_OFFSET))(this, a1);
		}

		::Codable::JSONNode* Remove(::System::String* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_REMOVE_OFFSET))(this, a1);
		}

		::Codable::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_REMOVE_1_OFFSET))(this, a1);
		}

		::Codable::JSONNode* Remove_2(::Codable::JSONNode* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_REMOVE_2_OFFSET))(this, a1);
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

		::System::String* ToString_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_TOSTRING_1_OFFSET))(this, a1);
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

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_SET_ASBOOL_OFFSET))(this, a1);
		}

		::Codable::JSONArray* get_AsArray()
		{
			return ((::Codable::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::Codable::JSONObject* get_AsObject()
		{
			return ((::Codable::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::Codable::JSONNode* op_Implicit(::System::String* a1)
		{
			return ((::Codable::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::String* op_Implicit_1(::Codable::JSONNode* a1)
		{
			return ((::System::String*(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::Codable::JSONNode* op_Implicit_2(::System::Double a1)
		{
			return ((::Codable::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::System::Double op_Implicit_3(::Codable::JSONNode* a1)
		{
			return ((::System::Double(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::Codable::JSONNode* op_Implicit_4(::System::Single a1)
		{
			return ((::Codable::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_5(::Codable::JSONNode* a1)
		{
			return ((::System::Single(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_5_OFFSET))(a1);
		}

		static ::Codable::JSONNode* op_Implicit_6(::System::Int32 a1)
		{
			return ((::Codable::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_6_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_7(::Codable::JSONNode* a1)
		{
			return ((::System::Int32(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_7_OFFSET))(a1);
		}

		static ::Codable::JSONNode* op_Implicit_8(::System::Boolean a1)
		{
			return ((::Codable::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_8_OFFSET))(a1);
		}

		static ::System::Boolean op_Implicit_9(::Codable::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_9_OFFSET))(a1);
		}

		static ::Codable::JSONNode* op_Implicit_10(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*> a1)
		{
			return ((::Codable::JSONNode*(*)(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_IMPLICIT_10_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::Codable::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::Codable::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::Codable::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::Codable::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ESCAPE_OFFSET))(a1);
		}

		static ::System::Void ParseElement(::Codable::JSONNode* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::Codable::JSONNode*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_PARSEELEMENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::Codable::JSONNode* Parse(::System::String* a1)
		{
			return ((::Codable::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_PARSE_OFFSET))(a1);
		}
	};
}
