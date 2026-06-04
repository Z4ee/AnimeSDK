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

#define MIHOYO_SDK_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x18332CE0)
#define MIHOYO_SDK_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x18349DF0)
#define MIHOYO_SDK_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1834ABD0)
#define MIHOYO_SDK_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1834AD90)
#define MIHOYO_SDK_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1834ABE0)
#define MIHOYO_SDK_JSONNODE_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1834A160)
#define MIHOYO_SDK_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x1834A720)
#define MIHOYO_SDK_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1834A5D0)
#define MIHOYO_SDK_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1834A490)
#define MIHOYO_SDK_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1834A590)
#define MIHOYO_SDK_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x1834A550)
#define MIHOYO_SDK_JSONNODE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1834A690)
#define MIHOYO_SDK_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x1834A760)
#define MIHOYO_SDK_JSONNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x18349E30)
#define MIHOYO_SDK_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18349D60)
#define MIHOYO_SDK_JSONNODE_GET_DEEPCHILDREN_OFFSET UNITYSDK_OFFSET(0x18349FC0)
#define MIHOYO_SDK_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0x1834ABF0)
#define MIHOYO_SDK_JSONNODE_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x18349DD0)
#define MIHOYO_SDK_JSONNODE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x18349DB0)
#define MIHOYO_SDK_JSONNODE_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18349D90)
#define MIHOYO_SDK_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x18349DA0)
#define MIHOYO_SDK_JSONNODE_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x18349D70)
#define MIHOYO_SDK_JSONNODE_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x18349DC0)
#define MIHOYO_SDK_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x18349D80)
#define MIHOYO_SDK_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18349D20)
#define MIHOYO_SDK_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18349D00)
#define MIHOYO_SDK_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1834A390)
#define MIHOYO_SDK_JSONNODE_GET_LINQ_OFFSET UNITYSDK_OFFSET(0x1834A210)
#define MIHOYO_SDK_JSONNODE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1834A410)
#define MIHOYO_SDK_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18349D40)
#define MIHOYO_SDK_JSONNODE_HASKEY_OFFSET UNITYSDK_OFFSET(0x1834A150)
#define MIHOYO_SDK_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18314EC0)
#define MIHOYO_SDK_JSONNODE_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1834A910)
#define MIHOYO_SDK_JSONNODE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1834A8C0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x18333110)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0x1834A9E0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x18310B60)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1834A7A0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1834A7F0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x18331C20)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x183125F0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x18331C70)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x18332ED0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x18331BE0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x18332FA0)
#define MIHOYO_SDK_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x183115F0)
#define MIHOYO_SDK_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x183125B0)
#define MIHOYO_SDK_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1834B090)
#define MIHOYO_SDK_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x18345BB0)
#define MIHOYO_SDK_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x18349E10)
#define MIHOYO_SDK_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x18349E20)
#define MIHOYO_SDK_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x18349E00)
#define MIHOYO_SDK_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1834A650)
#define MIHOYO_SDK_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1834A4F0)
#define MIHOYO_SDK_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1834A5B0)
#define MIHOYO_SDK_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x1834A570)
#define MIHOYO_SDK_JSONNODE_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1834A6E0)
#define MIHOYO_SDK_JSONNODE_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x18349DE0)
#define MIHOYO_SDK_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18349D30)
#define MIHOYO_SDK_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18349D10)
#define MIHOYO_SDK_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18349D50)
#define MIHOYO_SDK_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1834A170)
#define MIHOYO_SDK_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18321130)
#define MIHOYO_SDK_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1834B3A0)
#define MIHOYO_SDK_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18348320)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 8066;

	class JSONNode : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_forceASCII()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x7C70);
		}
		static ::System::Boolean* StaticGet_allowLineComments()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x7C71);
		}
		static ::System::Boolean* StaticGet_longAsString()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x7C72);
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

		::MiHoYo::SDK::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_VALUE_OFFSET))(this, a1);
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

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_INLINE_OFFSET))(this, a1);
		}

		::System::Void Add(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Add_1(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ADD_1_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* Remove(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_REMOVE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_REMOVE_1_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* Remove_2(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>* get_DeepChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_DEEPCHILDREN_OFFSET))(this);
		}

		::System::Boolean HasKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_HASKEY_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetValueOrDefault(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GETVALUEORDEFAULT_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_TOSTRING_1_OFFSET))(this, a1);
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

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_SET_ASLONG_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONArray* get_AsArray()
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* get_AsObject()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::String* op_Implicit_1(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_2(::System::Double a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::System::Double op_Implicit_3(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Double(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONNode* op_Explicit(::System::Single a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::Single op_Explicit_1(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Single(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_EXPLICIT_1_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_4(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_5(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_5_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_6(::System::Int64 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_6_OFFSET))(a1);
		}

		static ::System::Int64 op_Implicit_7(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Int64(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_7_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_8(::System::Boolean a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_8_OFFSET))(a1);
		}

		static ::System::Boolean op_Implicit_9(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_9_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_10(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*> a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_10_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::MiHoYo::SDK::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::MiHoYo::SDK::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::JSONNode* op_Implicit_11(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_OP_IMPLICIT_11_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_ESCAPE_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::JSONNode* ParseElement(::System::String* a1, ::System::Boolean a2)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_PARSEELEMENT_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::JSONNode* Parse(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNODE_PARSE_OFFSET))(a1);
		}
	};
}
