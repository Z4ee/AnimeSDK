#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_KeyEnumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_ValueEnumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x19C78BB0)
#define MIHOYO_SDK_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x19C78BA0)
#define MIHOYO_SDK_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C79AD0)
#define MIHOYO_SDK_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x19C79CE0)
#define MIHOYO_SDK_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C79AE0)
#define MIHOYO_SDK_JSONNODE_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x19C78D00)
#define MIHOYO_SDK_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x19C79180)
#define MIHOYO_SDK_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19C78FF0)
#define MIHOYO_SDK_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x19C78EA0)
#define MIHOYO_SDK_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19C78FB0)
#define MIHOYO_SDK_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x19C78F70)
#define MIHOYO_SDK_JSONNODE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x19C790F0)
#define MIHOYO_SDK_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x19C791F0)
#define MIHOYO_SDK_JSONNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x19C78C30)
#define MIHOYO_SDK_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19C78B10)
#define MIHOYO_SDK_JSONNODE_GET_DEEPCHILDREN_OFFSET UNITYSDK_OFFSET(0x19C78C90)
#define MIHOYO_SDK_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0x19C79AF0)
#define MIHOYO_SDK_JSONNODE_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x19C78B80)
#define MIHOYO_SDK_JSONNODE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x19C78B60)
#define MIHOYO_SDK_JSONNODE_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19C78B40)
#define MIHOYO_SDK_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x19C78B50)
#define MIHOYO_SDK_JSONNODE_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x19C78B20)
#define MIHOYO_SDK_JSONNODE_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x19C78B70)
#define MIHOYO_SDK_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x19C78B30)
#define MIHOYO_SDK_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x19C78AA0)
#define MIHOYO_SDK_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19C78A80)
#define MIHOYO_SDK_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19C78E00)
#define MIHOYO_SDK_JSONNODE_GET_LINQ_OFFSET UNITYSDK_OFFSET(0x19C78DB0)
#define MIHOYO_SDK_JSONNODE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x19C78E50)
#define MIHOYO_SDK_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19C78AC0)
#define MIHOYO_SDK_JSONNODE_HASKEY_OFFSET UNITYSDK_OFFSET(0x19C78CF0)
#define MIHOYO_SDK_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19C6C800)
#define MIHOYO_SDK_JSONNODE_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19C79510)
#define MIHOYO_SDK_JSONNODE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x19C79470)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x19C775F0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0x19C79900)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19C672D0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x19C792C0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x19C79350)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x19C67480)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x19C6C940)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x19C67180)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x19C79630)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x19C79750)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x19C797E0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19C673F0)
#define MIHOYO_SDK_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19C67110)
#define MIHOYO_SDK_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x19C7A020)
#define MIHOYO_SDK_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x19C7A430)
#define MIHOYO_SDK_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x19C78C10)
#define MIHOYO_SDK_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x19C78C20)
#define MIHOYO_SDK_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x19C78C00)
#define MIHOYO_SDK_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19C79080)
#define MIHOYO_SDK_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x19C78F20)
#define MIHOYO_SDK_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19C78FD0)
#define MIHOYO_SDK_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x19C78F90)
#define MIHOYO_SDK_JSONNODE_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x19C79140)
#define MIHOYO_SDK_JSONNODE_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x19C78B90)
#define MIHOYO_SDK_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x19C78AB0)
#define MIHOYO_SDK_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19C78A90)
#define MIHOYO_SDK_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19C78B00)
#define MIHOYO_SDK_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x19C78D10)
#define MIHOYO_SDK_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C67510)
#define MIHOYO_SDK_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C7B820)
#define MIHOYO_SDK_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7B810)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 18989;

	class JSONNode : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_forceASCII()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x4590);
		}
		static ::System::Boolean* StaticGet_allowLineComments()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x4591);
		}
		static ::System::Boolean* StaticGet_longAsString()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x4592);
		}
		static ::System::Text::StringBuilder** StaticGet_m_EscapeBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::MiHoYo::SDK::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::MiHoYo::SDK::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::MiHoYo::SDK::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ISNUMBER_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ISBOOLEAN_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ISOBJECT_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_INLINE_OFFSET))(this, value);
		}

		::System::Void Add(::System::String* aKey, ::MiHoYo::SDK::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ADD_OFFSET))(this, aKey, aItem);
		}

		::System::Void Add_1(::MiHoYo::SDK::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ADD_1_OFFSET))(this, aItem);
		}

		::MiHoYo::SDK::JSONNode* Remove(::System::String* aKey)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_REMOVE_OFFSET))(this, aKey);
		}

		::MiHoYo::SDK::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_REMOVE_1_OFFSET))(this, aIndex);
		}

		::MiHoYo::SDK::JSONNode* Remove_2(::MiHoYo::SDK::JSONNode* aNode)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>* get_DeepChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_DEEPCHILDREN_OFFSET))(this);
		}

		::System::Boolean HasKey(::System::String* aKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_HASKEY_OFFSET))(this, aKey);
		}

		::MiHoYo::SDK::JSONNode* GetValueOrDefault(::System::String* aKey, ::MiHoYo::SDK::JSONNode* aDefault)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GETVALUEORDEFAULT_OFFSET))(this, aKey, aDefault);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 aIndent)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_TOSTRING_1_OFFSET))(this, aIndent);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>>* get_Linq()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_LINQ_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_KeyEnumerator get_Keys()
		{
			return ((::MiHoYo::SDK::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_KEYS_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_ValueEnumerator get_Values()
		{
			return ((::MiHoYo::SDK::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_VALUES_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASLONG_OFFSET))(this, value);
		}

		::MiHoYo::SDK::JSONArray* get_AsArray()
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* get_AsObject()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit(::System::String* s)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_OFFSET))(s);
		}

		static ::System::String* op_Implicit_1(::MiHoYo::SDK::JSONNode* d)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_1_OFFSET))(d);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_2(::System::Double n)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_2_OFFSET))(n);
		}

		static ::System::Double op_Implicit_3(::MiHoYo::SDK::JSONNode* d)
		{
			return ((::System::Double(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_3_OFFSET))(d);
		}

		static ::MiHoYo::SDK::JSONNode* op_Explicit(::System::Single n)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_EXPLICIT_OFFSET))(n);
		}

		static ::System::Single op_Explicit_1(::MiHoYo::SDK::JSONNode* d)
		{
			return ((::System::Single(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_EXPLICIT_1_OFFSET))(d);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_4(::System::Int32 n)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_4_OFFSET))(n);
		}

		static ::System::Int32 op_Implicit_5(::MiHoYo::SDK::JSONNode* d)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_5_OFFSET))(d);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_6(::System::Int64 n)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_6_OFFSET))(n);
		}

		static ::System::Int64 op_Implicit_7(::MiHoYo::SDK::JSONNode* d)
		{
			return ((::System::Int64(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_7_OFFSET))(d);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_8(::System::Boolean b)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_8_OFFSET))(b);
		}

		static ::System::Boolean op_Implicit_9(::MiHoYo::SDK::JSONNode* d)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_9_OFFSET))(d);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_10(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*> aKeyValue)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_10_OFFSET))(aKeyValue);
		}

		static ::System::Boolean op_Equality(::MiHoYo::SDK::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::MiHoYo::SDK::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_11(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dict)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_11_OFFSET))(dict);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* aText)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ESCAPE_OFFSET))(aText);
		}

		static ::MiHoYo::SDK::JSONNode* ParseElement(::System::String* token, ::System::Boolean quoted)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_PARSEELEMENT_OFFSET))(token, quoted);
		}

		static ::MiHoYo::SDK::JSONNode* Parse(::System::String* aJSON)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_PARSE_OFFSET))(aJSON);
		}
	};
}
