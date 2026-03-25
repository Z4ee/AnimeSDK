#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONContainerType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_KeyEnumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_ValueEnumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace HoudiniEngineUnity { class JSONArray; }
namespace HoudiniEngineUnity { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class RectOffset; }

#define HOUDINIENGINEUNITY_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x84AA750)
#define HOUDINIENGINEUNITY_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x84AB800)
#define HOUDINIENGINEUNITY_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x84AC4C0)
#define HOUDINIENGINEUNITY_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x84AC610)
#define HOUDINIENGINEUNITY_JSONNODE_GETCONTAINER_OFFSET UNITYSDK_OFFSET(0x84ACBA0)
#define HOUDINIENGINEUNITY_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x84AC4D0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x84ABF90)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x84ABE40)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x84ABD00)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x84ABE00)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x84ABDC0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x84ABF00)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x84AC000)
#define HOUDINIENGINEUNITY_JSONNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x84AB840)
#define HOUDINIENGINEUNITY_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x84AB770)
#define HOUDINIENGINEUNITY_JSONNODE_GET_DEEPCHILDREN_OFFSET UNITYSDK_OFFSET(0x84AB8B0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0x84AC4E0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x84AB7E0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x84AB7C0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x84AB7A0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x84AB7B0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x84AB780)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x84AB7D0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x84AB790)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x84AB730)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x84AB710)
#define HOUDINIENGINEUNITY_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x84ABC60)
#define HOUDINIENGINEUNITY_JSONNODE_GET_LINQ_OFFSET UNITYSDK_OFFSET(0x84ABA70)
#define HOUDINIENGINEUNITY_JSONNODE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x84ABCB0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x84AB750)
#define HOUDINIENGINEUNITY_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x84A97A0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x84AC3D0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0x84AC410)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_12_OFFSET UNITYSDK_OFFSET(0x84AC4B0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_13_OFFSET UNITYSDK_OFFSET(0x84ACCA0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_14_OFFSET UNITYSDK_OFFSET(0x84ACE00)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_15_OFFSET UNITYSDK_OFFSET(0x84AD010)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_16_OFFSET UNITYSDK_OFFSET(0x84AD260)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_17_OFFSET UNITYSDK_OFFSET(0x84AD4B0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_18_OFFSET UNITYSDK_OFFSET(0x84AD700)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_19_OFFSET UNITYSDK_OFFSET(0x84AD9C0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x8494370)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_20_OFFSET UNITYSDK_OFFSET(0x84AD9F0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_21_OFFSET UNITYSDK_OFFSET(0x84ADA90)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_22_OFFSET UNITYSDK_OFFSET(0x84ADB10)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_23_OFFSET UNITYSDK_OFFSET(0x84ADB90)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_24_OFFSET UNITYSDK_OFFSET(0x84ADC00)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x84AC060)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x84AC090)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x84AC130)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x84AC160)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x84AC200)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x84AC230)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x84AC2D0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x84AC330)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x84AC040)
#define HOUDINIENGINEUNITY_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x8494360)
#define HOUDINIENGINEUNITY_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x84AC970)
#define HOUDINIENGINEUNITY_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x84A8A70)
#define HOUDINIENGINEUNITY_JSONNODE_READMATRIX_OFFSET UNITYSDK_OFFSET(0x84AE9A0)
#define HOUDINIENGINEUNITY_JSONNODE_READQUATERNION_1_OFFSET UNITYSDK_OFFSET(0x84ADB50)
#define HOUDINIENGINEUNITY_JSONNODE_READQUATERNION_OFFSET UNITYSDK_OFFSET(0x84AE310)
#define HOUDINIENGINEUNITY_JSONNODE_READRECTOFFSET_1_OFFSET UNITYSDK_OFFSET(0x84ADC40)
#define HOUDINIENGINEUNITY_JSONNODE_READRECTOFFSET_OFFSET UNITYSDK_OFFSET(0x84AE730)
#define HOUDINIENGINEUNITY_JSONNODE_READRECT_1_OFFSET UNITYSDK_OFFSET(0x84ADBD0)
#define HOUDINIENGINEUNITY_JSONNODE_READRECT_OFFSET UNITYSDK_OFFSET(0x84AE520)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_1_OFFSET UNITYSDK_OFFSET(0x84ADD90)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_2_OFFSET UNITYSDK_OFFSET(0x84AD9E0)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_OFFSET UNITYSDK_OFFSET(0x84ADC80)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_1_OFFSET UNITYSDK_OFFSET(0x84ADFE0)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_2_OFFSET UNITYSDK_OFFSET(0x84ADA40)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_OFFSET UNITYSDK_OFFSET(0x84ADE40)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR4_1_OFFSET UNITYSDK_OFFSET(0x84ADAD0)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR4_OFFSET UNITYSDK_OFFSET(0x84AE100)
#define HOUDINIENGINEUNITY_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x84AB820)
#define HOUDINIENGINEUNITY_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x84AB830)
#define HOUDINIENGINEUNITY_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x84AB810)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x84ABEC0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x84ABD60)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x84ABE20)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x84ABDE0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x84ABF50)
#define HOUDINIENGINEUNITY_JSONNODE_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x84AB7F0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x84AB740)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x84AB720)
#define HOUDINIENGINEUNITY_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x84AB760)
#define HOUDINIENGINEUNITY_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x84AB9D0)
#define HOUDINIENGINEUNITY_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x84AB930)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEMATRIX_OFFSET UNITYSDK_OFFSET(0x84AF010)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEQUATERNION_OFFSET UNITYSDK_OFFSET(0x84AD2B0)
#define HOUDINIENGINEUNITY_JSONNODE_WRITERECTOFFSET_OFFSET UNITYSDK_OFFSET(0x84AD730)
#define HOUDINIENGINEUNITY_JSONNODE_WRITERECT_OFFSET UNITYSDK_OFFSET(0x84AD500)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR2_OFFSET UNITYSDK_OFFSET(0x84ACCE0)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR3_OFFSET UNITYSDK_OFFSET(0x84ACE70)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR4_OFFSET UNITYSDK_OFFSET(0x84AD060)
#define HOUDINIENGINEUNITY_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x84AA140)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 37840;

	class JSONNode : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_forceASCII()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x4110);
		}
		static ::System::Boolean* StaticGet_longAsString()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x4111);
		}
		static ::HoudiniEngineUnity::JSONContainerType* StaticGet_QuaternionContainerType()
		{
			return (::HoudiniEngineUnity::JSONContainerType*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x4114);
		}
		static ::HoudiniEngineUnity::JSONContainerType* StaticGet_VectorContainerType()
		{
			return (::HoudiniEngineUnity::JSONContainerType*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x4118);
		}
		static ::HoudiniEngineUnity::JSONContainerType* StaticGet_RectContainerType()
		{
			return (::HoudiniEngineUnity::JSONContainerType*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x411C);
		}
		static ::System::Text::StringBuilder** StaticGet_m_EscapeBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::HoudiniEngineUnity::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::HoudiniEngineUnity::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::HoudiniEngineUnity::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISNUMBER_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISBOOLEAN_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISOBJECT_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_INLINE_OFFSET))(this, value);
		}

		::System::Void Add(::System::String* aKey, ::HoudiniEngineUnity::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_ADD_OFFSET))(this, aKey, aItem);
		}

		::System::Void Add_1(::HoudiniEngineUnity::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_ADD_1_OFFSET))(this, aItem);
		}

		::HoudiniEngineUnity::JSONNode* Remove(::System::String* aKey)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_REMOVE_OFFSET))(this, aKey);
		}

		::HoudiniEngineUnity::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_REMOVE_1_OFFSET))(this, aIndex);
		}

		::HoudiniEngineUnity::JSONNode* Remove_2(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_DeepChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_DEEPCHILDREN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 aIndent)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_TOSTRING_1_OFFSET))(this, aIndent);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*>>* get_Linq()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_LINQ_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_KeyEnumerator get_Keys()
		{
			return ((::HoudiniEngineUnity::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_KEYS_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_ValueEnumerator get_Values()
		{
			return ((::HoudiniEngineUnity::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_VALUES_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASLONG_OFFSET))(this, value);
		}

		::HoudiniEngineUnity::JSONArray* get_AsArray()
		{
			return ((::HoudiniEngineUnity::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONObject* get_AsObject()
		{
			return ((::HoudiniEngineUnity::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit(::System::String* s)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_OFFSET))(s);
		}

		static ::System::String* op_Implicit_1(::HoudiniEngineUnity::JSONNode* d)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_1_OFFSET))(d);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_2(::System::Double n)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_2_OFFSET))(n);
		}

		static ::System::Double op_Implicit_3(::HoudiniEngineUnity::JSONNode* d)
		{
			return ((::System::Double(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_3_OFFSET))(d);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_4(::System::Single n)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_4_OFFSET))(n);
		}

		static ::System::Single op_Implicit_5(::HoudiniEngineUnity::JSONNode* d)
		{
			return ((::System::Single(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_5_OFFSET))(d);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_6(::System::Int32 n)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_6_OFFSET))(n);
		}

		static ::System::Int32 op_Implicit_7(::HoudiniEngineUnity::JSONNode* d)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_7_OFFSET))(d);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_8(::System::Int64 n)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_8_OFFSET))(n);
		}

		static ::System::Int64 op_Implicit_9(::HoudiniEngineUnity::JSONNode* d)
		{
			return ((::System::Int64(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_9_OFFSET))(d);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_10(::System::Boolean b)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_10_OFFSET))(b);
		}

		static ::System::Boolean op_Implicit_11(::HoudiniEngineUnity::JSONNode* d)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_11_OFFSET))(d);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_12(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*> aKeyValue)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*>))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_12_OFFSET))(aKeyValue);
		}

		static ::System::Boolean op_Equality(::HoudiniEngineUnity::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::HoudiniEngineUnity::JSONNode* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* aText)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_ESCAPE_OFFSET))(aText);
		}

		static ::HoudiniEngineUnity::JSONNode* ParseElement(::System::String* token, ::System::Boolean quoted)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_PARSEELEMENT_OFFSET))(token, quoted);
		}

		static ::HoudiniEngineUnity::JSONNode* Parse(::System::String* aJSON)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_PARSE_OFFSET))(aJSON);
		}

		static ::HoudiniEngineUnity::JSONNode* GetContainer(::HoudiniEngineUnity::JSONContainerType aType)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::HoudiniEngineUnity::JSONContainerType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GETCONTAINER_OFFSET))(aType);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_13(::UnityEngine::Vector2 aVec)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_13_OFFSET))(aVec);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_14(::UnityEngine::Vector3 aVec)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_14_OFFSET))(aVec);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_15(::UnityEngine::Vector4 aVec)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_15_OFFSET))(aVec);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_16(::UnityEngine::Quaternion aRot)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_16_OFFSET))(aRot);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_17(::UnityEngine::Rect aRect)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_17_OFFSET))(aRect);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_18(::UnityEngine::RectOffset* aRect)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_18_OFFSET))(aRect);
		}

		static ::UnityEngine::Vector2 op_Implicit_19(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::UnityEngine::Vector2(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_19_OFFSET))(aNode);
		}

		static ::UnityEngine::Vector3 op_Implicit_20(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::UnityEngine::Vector3(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_20_OFFSET))(aNode);
		}

		static ::UnityEngine::Vector4 op_Implicit_21(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::UnityEngine::Vector4(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_21_OFFSET))(aNode);
		}

		static ::UnityEngine::Quaternion op_Implicit_22(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::UnityEngine::Quaternion(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_22_OFFSET))(aNode);
		}

		static ::UnityEngine::Rect op_Implicit_23(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::UnityEngine::Rect(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_23_OFFSET))(aNode);
		}

		static ::UnityEngine::RectOffset* op_Implicit_24(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::UnityEngine::RectOffset*(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_24_OFFSET))(aNode);
		}

		::UnityEngine::Vector2 ReadVector2(::UnityEngine::Vector2 aDefault)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_OFFSET))(this, aDefault);
		}

		::UnityEngine::Vector2 ReadVector2_1(::System::String* aXName, ::System::String* aYName)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_1_OFFSET))(this, aXName, aYName);
		}

		::UnityEngine::Vector2 ReadVector2_2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_2_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteVector2(::UnityEngine::Vector2 aVec, ::System::String* aXName, ::System::String* aYName)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Vector2, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR2_OFFSET))(this, aVec, aXName, aYName);
		}

		::UnityEngine::Vector3 ReadVector3(::UnityEngine::Vector3 aDefault)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_OFFSET))(this, aDefault);
		}

		::UnityEngine::Vector3 ReadVector3_1(::System::String* aXName, ::System::String* aYName, ::System::String* aZName)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_1_OFFSET))(this, aXName, aYName, aZName);
		}

		::UnityEngine::Vector3 ReadVector3_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_2_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteVector3(::UnityEngine::Vector3 aVec, ::System::String* aXName, ::System::String* aYName, ::System::String* aZName)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR3_OFFSET))(this, aVec, aXName, aYName, aZName);
		}

		::UnityEngine::Vector4 ReadVector4(::UnityEngine::Vector4 aDefault)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR4_OFFSET))(this, aDefault);
		}

		::UnityEngine::Vector4 ReadVector4_1()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR4_1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteVector4(::UnityEngine::Vector4 aVec)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR4_OFFSET))(this, aVec);
		}

		::UnityEngine::Quaternion ReadQuaternion(::UnityEngine::Quaternion aDefault)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READQUATERNION_OFFSET))(this, aDefault);
		}

		::UnityEngine::Quaternion ReadQuaternion_1()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READQUATERNION_1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteQuaternion(::UnityEngine::Quaternion aRot)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEQUATERNION_OFFSET))(this, aRot);
		}

		::UnityEngine::Rect ReadRect(::UnityEngine::Rect aDefault)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READRECT_OFFSET))(this, aDefault);
		}

		::UnityEngine::Rect ReadRect_1()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READRECT_1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteRect(::UnityEngine::Rect aRect)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITERECT_OFFSET))(this, aRect);
		}

		::UnityEngine::RectOffset* ReadRectOffset(::UnityEngine::RectOffset* aDefault)
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READRECTOFFSET_OFFSET))(this, aDefault);
		}

		::UnityEngine::RectOffset* ReadRectOffset_1()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READRECTOFFSET_1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteRectOffset(::UnityEngine::RectOffset* aRect)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITERECTOFFSET_OFFSET))(this, aRect);
		}

		::UnityEngine::Matrix4x4 ReadMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READMATRIX_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteMatrix(::UnityEngine::Matrix4x4 aMatrix)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEMATRIX_OFFSET))(this, aMatrix);
		}
	};
}
