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

#define MIHOYOSDKJSON_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x8DE27C0)
#define MIHOYOSDKJSON_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x8DE37F0)
#define MIHOYOSDKJSON_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8DE46C0)
#define MIHOYOSDKJSON_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x8DE4880)
#define MIHOYOSDKJSON_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8DE46D0)
#define MIHOYOSDKJSON_JSONNODE_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x8DE38F0)
#define MIHOYOSDKJSON_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x8DE3DC0)
#define MIHOYOSDKJSON_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x8DE3C70)
#define MIHOYOSDKJSON_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x8DE3B30)
#define MIHOYOSDKJSON_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x8DE3C30)
#define MIHOYOSDKJSON_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x8DE3BF0)
#define MIHOYOSDKJSON_JSONNODE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x8DE3D30)
#define MIHOYOSDKJSON_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x8DE3E00)
#define MIHOYOSDKJSON_JSONNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x8DE3830)
#define MIHOYOSDKJSON_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x8DE3760)
#define MIHOYOSDKJSON_JSONNODE_GET_DEEPCHILDREN_OFFSET UNITYSDK_OFFSET(0x8DE3880)
#define MIHOYOSDKJSON_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0x8DE46E0)
#define MIHOYOSDKJSON_JSONNODE_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x8DE37D0)
#define MIHOYOSDKJSON_JSONNODE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x8DE37B0)
#define MIHOYOSDKJSON_JSONNODE_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x8DE3790)
#define MIHOYOSDKJSON_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x8DE37A0)
#define MIHOYOSDKJSON_JSONNODE_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x8DE3770)
#define MIHOYOSDKJSON_JSONNODE_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x8DE37C0)
#define MIHOYOSDKJSON_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x8DE3780)
#define MIHOYOSDKJSON_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8DE3720)
#define MIHOYOSDKJSON_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8DE3700)
#define MIHOYOSDKJSON_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x8DE3A90)
#define MIHOYOSDKJSON_JSONNODE_GET_LINQ_OFFSET UNITYSDK_OFFSET(0x8DE3A40)
#define MIHOYOSDKJSON_JSONNODE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x8DE3AE0)
#define MIHOYOSDKJSON_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8DE3740)
#define MIHOYOSDKJSON_JSONNODE_HASKEY_OFFSET UNITYSDK_OFFSET(0x8DE38E0)
#define MIHOYOSDKJSON_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x8DE4460)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x8DE4570)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0x8DE45B0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_12_OFFSET UNITYSDK_OFFSET(0x8DE4670)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x8DE3E80)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x8DE3F40)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x8DE3F90)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x8DE4050)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x8DE40A0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x8DE4160)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x8DE41B0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x8DE4270)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x8DE43A0)
#define MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x8DE3E40)
#define MIHOYOSDKJSON_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x8DE4680)
#define MIHOYOSDKJSON_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x8DE4B10)
#define MIHOYOSDKJSON_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x8DE4EA0)
#define MIHOYOSDKJSON_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x8DE3810)
#define MIHOYOSDKJSON_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x8DE3820)
#define MIHOYOSDKJSON_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x8DE3800)
#define MIHOYOSDKJSON_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x8DE3CF0)
#define MIHOYOSDKJSON_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x8DE3B90)
#define MIHOYOSDKJSON_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x8DE3C50)
#define MIHOYOSDKJSON_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x8DE3C10)
#define MIHOYOSDKJSON_JSONNODE_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x8DE3D80)
#define MIHOYOSDKJSON_JSONNODE_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x8DE37E0)
#define MIHOYOSDKJSON_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8DE3730)
#define MIHOYOSDKJSON_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8DE3710)
#define MIHOYOSDKJSON_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8DE3750)
#define MIHOYOSDKJSON_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x8DE39A0)
#define MIHOYOSDKJSON_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8DE3900)
#define MIHOYOSDKJSON_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DE5BC0)
#define MIHOYOSDKJSON_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE5BB0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 42649;

	class JSONNode : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_allowLineComments()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x10080);
		}
		static ::System::Boolean* StaticGet_forceASCII()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x10081);
		}
		static ::System::Boolean* StaticGet_longAsString()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x10082);
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

		::MiHoYoSDKJSON::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::MiHoYoSDKJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_VALUE_OFFSET))(this, value);
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

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_INLINE_OFFSET))(this, value);
		}

		::System::Void Add(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ADD_OFFSET))(this, aKey, aItem);
		}

		::System::Void Add_1(::MiHoYoSDKJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ADD_1_OFFSET))(this, aItem);
		}

		::MiHoYoSDKJSON::JSONNode* Remove(::System::String* aKey)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_REMOVE_OFFSET))(this, aKey);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_REMOVE_1_OFFSET))(this, aIndex);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_2(::MiHoYoSDKJSON::JSONNode* aNode)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>* get_DeepChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_DEEPCHILDREN_OFFSET))(this);
		}

		::System::Boolean HasKey(::System::String* aKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_HASKEY_OFFSET))(this, aKey);
		}

		::MiHoYoSDKJSON::JSONNode* GetValueOrDefault(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* aDefault)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GETVALUEORDEFAULT_OFFSET))(this, aKey, aDefault);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 aIndent)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_TOSTRING_1_OFFSET))(this, aIndent);
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

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_SET_ASLONG_OFFSET))(this, value);
		}

		::MiHoYoSDKJSON::JSONArray* get_AsArray()
		{
			return ((::MiHoYoSDKJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONObject* get_AsObject()
		{
			return ((::MiHoYoSDKJSON::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit(::System::String* s)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_OFFSET))(s);
		}

		static ::System::String* op_Implicit_1(::MiHoYoSDKJSON::JSONNode* d)
		{
			return ((::System::String*(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_1_OFFSET))(d);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_2(::System::Double n)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_2_OFFSET))(n);
		}

		static ::System::Double op_Implicit_3(::MiHoYoSDKJSON::JSONNode* d)
		{
			return ((::System::Double(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_3_OFFSET))(d);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_4(::System::Single n)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_4_OFFSET))(n);
		}

		static ::System::Single op_Implicit_5(::MiHoYoSDKJSON::JSONNode* d)
		{
			return ((::System::Single(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_5_OFFSET))(d);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_6(::System::Int32 n)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_6_OFFSET))(n);
		}

		static ::System::Int32 op_Implicit_7(::MiHoYoSDKJSON::JSONNode* d)
		{
			return ((::System::Int32(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_7_OFFSET))(d);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_8(::System::Int64 n)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_8_OFFSET))(n);
		}

		static ::System::Int64 op_Implicit_9(::MiHoYoSDKJSON::JSONNode* d)
		{
			return ((::System::Int64(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_9_OFFSET))(d);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_10(::System::Boolean b)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_10_OFFSET))(b);
		}

		static ::System::Boolean op_Implicit_11(::MiHoYoSDKJSON::JSONNode* d)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_11_OFFSET))(d);
		}

		static ::MiHoYoSDKJSON::JSONNode* op_Implicit_12(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*> aKeyValue)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_IMPLICIT_12_OFFSET))(aKeyValue);
		}

		static ::System::Boolean op_Equality(::MiHoYoSDKJSON::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::MiHoYoSDKJSON::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* aText)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_ESCAPE_OFFSET))(aText);
		}

		static ::MiHoYoSDKJSON::JSONNode* ParseElement(::System::String* token, ::System::Boolean quoted)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_PARSEELEMENT_OFFSET))(token, quoted);
		}

		static ::MiHoYoSDKJSON::JSONNode* Parse(::System::String* aJSON)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_PARSE_OFFSET))(aJSON);
		}
	};
}
