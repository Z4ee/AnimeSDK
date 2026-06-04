#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_KeyEnumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_ValueEnumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONArray; }
namespace MiHoYoSDKJSON { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0xA22F7E0)
#define MIHOYOSDKJSON_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0xA230BD0)
#define MIHOYOSDKJSON_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA231AF0)
#define MIHOYOSDKJSON_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0xA231CB0)
#define MIHOYOSDKJSON_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA231B00)
#define MIHOYOSDKJSON_JSONNODE_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0xA230D10)
#define MIHOYOSDKJSON_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0xA231310)
#define MIHOYOSDKJSON_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA2311C0)
#define MIHOYOSDKJSON_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA231080)
#define MIHOYOSDKJSON_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xA231180)
#define MIHOYOSDKJSON_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0xA231140)
#define MIHOYOSDKJSON_JSONNODE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0xA231280)
#define MIHOYOSDKJSON_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0xA231350)
#define MIHOYOSDKJSON_JSONNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0xA230C10)
#define MIHOYOSDKJSON_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA230B40)
#define MIHOYOSDKJSON_JSONNODE_GET_DEEPCHILDREN_OFFSET UNITYSDK_OFFSET(0xA230C80)
#define MIHOYOSDKJSON_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0xA231B10)
#define MIHOYOSDKJSON_JSONNODE_GET_INLINE_OFFSET UNITYSDK_OFFSET(0xA230BB0)
#define MIHOYOSDKJSON_JSONNODE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0xA230B90)
#define MIHOYOSDKJSON_JSONNODE_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0xA230B70)
#define MIHOYOSDKJSON_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0xA230B80)
#define MIHOYOSDKJSON_JSONNODE_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0xA230B50)
#define MIHOYOSDKJSON_JSONNODE_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0xA230BA0)
#define MIHOYOSDKJSON_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0xA230B60)
#define MIHOYOSDKJSON_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xA230B00)
#define MIHOYOSDKJSON_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA230AE0)
#define MIHOYOSDKJSON_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0xA230FE0)
#define MIHOYOSDKJSON_JSONNODE_GET_LINQ_OFFSET UNITYSDK_OFFSET(0xA230E60)
#define MIHOYOSDKJSON_JSONNODE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0xA231030)
#define MIHOYOSDKJSON_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA230B20)
#define MIHOYOSDKJSON_JSONNODE_HASKEY_OFFSET UNITYSDK_OFFSET(0xA230D00)
#define MIHOYOSDKJSON_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA22E130)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0xA231990)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0xA2319D0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_12_OFFSET UNITYSDK_OFFSET(0xA231AA0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0xA2313D0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0xA2314A0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0xA2314F0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0xA2315C0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0xA231610)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0xA2316E0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0xA231730)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0xA231800)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0xA2318C0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA231390)
#define MIHOYOSDKJSON_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA231AB0)
#define MIHOYOSDKJSON_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0xA231FB0)
#define MIHOYOSDKJSON_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0xA22C7E0)
#define MIHOYOSDKJSON_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0xA230BF0)
#define MIHOYOSDKJSON_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0xA230C00)
#define MIHOYOSDKJSON_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0xA230BE0)
#define MIHOYOSDKJSON_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA231240)
#define MIHOYOSDKJSON_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA2310E0)
#define MIHOYOSDKJSON_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xA2311A0)
#define MIHOYOSDKJSON_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0xA231160)
#define MIHOYOSDKJSON_JSONNODE_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0xA2312D0)
#define MIHOYOSDKJSON_JSONNODE_SET_INLINE_OFFSET UNITYSDK_OFFSET(0xA230BC0)
#define MIHOYOSDKJSON_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xA230B10)
#define MIHOYOSDKJSON_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA230AF0)
#define MIHOYOSDKJSON_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA230B30)
#define MIHOYOSDKJSON_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA230DC0)
#define MIHOYOSDKJSON_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA230D20)
#define MIHOYOSDKJSON_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2322C0)
#define MIHOYOSDKJSON_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xA22F0E0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 43452;

	class JSONNode : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_longAsString()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x7DB0);
		}
		static ::System::Boolean* StaticGet_allowLineComments()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x7DB1);
		}
		static ::System::Boolean* StaticGet_forceASCII()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x7DB2);
		}
		static ::System::Text::StringBuilder** StaticGet_m_EscapeBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__CCTOR_OFFSET))();
		}

		::MiHoYoSDKJSON::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ISNUMBER_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ISBOOLEAN_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ISOBJECT_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_INLINE_OFFSET))(this, a1);
		}

		::System::Void Add(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Add_1(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ADD_1_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNode* Remove(::System::String* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_REMOVE_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_REMOVE_1_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_2(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>* get_DeepChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_DEEPCHILDREN_OFFSET))(this);
		}

		::System::Boolean HasKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_HASKEY_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNode* GetValueOrDefault(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GETVALUEORDEFAULT_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>>* get_Linq()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_LINQ_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_KeyEnumerator get_Keys()
		{
			return ((::MiHoYoSDKJSON::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_KEYS_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_ValueEnumerator get_Values()
		{
			return ((::MiHoYoSDKJSON::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_VALUES_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASLONG_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONArray* get_AsArray()
		{
			return ((::MiHoYoSDKJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONObject* get_AsObject()
		{
			return ((::MiHoYoSDKJSON::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit(::System::String* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::String* op_Implicit_1(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::String*(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_2(::System::Double a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::System::Double op_Implicit_3(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Double(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_4(::System::Single a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_5(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Single(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_5_OFFSET))(a1);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_6(::System::Int32 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_6_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_7(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Int32(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_7_OFFSET))(a1);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_8(::System::Int64 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_8_OFFSET))(a1);
		}

		static ::System::Int64 op_Implicit_9(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Int64(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_9_OFFSET))(a1);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_10(::System::Boolean a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_10_OFFSET))(a1);
		}

		static ::System::Boolean op_Implicit_11(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_11_OFFSET))(a1);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_12(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*> a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_12_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::MiHoYoSDKJSON::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::MiHoYoSDKJSON::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ESCAPE_OFFSET))(a1);
		}

		static ::MiHoYoSDKJSON::JSONNode* ParseElement(::System::String* a1, ::System::Boolean a2)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_PARSEELEMENT_OFFSET))(a1, a2);
		}

		static ::MiHoYoSDKJSON::JSONNode* Parse(::System::String* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_PARSE_OFFSET))(a1);
		}
	};
}
