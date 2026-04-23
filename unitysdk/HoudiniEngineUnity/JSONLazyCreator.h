#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace HoudiniEngineUnity { class JSONArray; }
namespace HoudiniEngineUnity { class JSONObject; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x8CD3150)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x8CD3050)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x8CD32C0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8CD2A60)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8CD32E0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x8CD3960)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x8CD3840)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x8CD3550)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x8CD3420)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x8CD32F0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x8CD3680)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x8CD3A40)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8CD2BE0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8CD2A90)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_TAG_OFFSET UNITYSDK_OFFSET(0x8CD2A50)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x8CD3280)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x8CD32A0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x8CD38D0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x8CD35E0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x8CD34B0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x8CD3390)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x8CD3750)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8CD2C10)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8CD2AC0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x8CD3B50)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8CD2A80)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD1A50)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 43734;

	class JSONLazyCreator : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::String* m_Key; // 0x10
		::HoudiniEngineUnity::JSONNode* m_Node; // 0x18

		::System::Void _ctor(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR__CTOR_OFFSET))(this, aNode);
		}

		::System::Void _ctor_1(::HoudiniEngineUnity::JSONNode* aNode, ::System::String* aKey)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, aNode, aKey);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_TAG_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GETENUMERATOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::HoudiniEngineUnity::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::HoudiniEngineUnity::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::HoudiniEngineUnity::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Void Add(::HoudiniEngineUnity::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_ADD_OFFSET))(this, aItem);
		}

		::System::Void Add_1(::System::String* aKey, ::HoudiniEngineUnity::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_ADD_1_OFFSET))(this, aKey, aItem);
		}

		static ::System::Boolean op_Equality(::HoudiniEngineUnity::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::HoudiniEngineUnity::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASLONG_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, value);
		}

		::HoudiniEngineUnity::JSONArray* get_AsArray()
		{
			return ((::HoudiniEngineUnity::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONObject* get_AsObject()
		{
			return ((::HoudiniEngineUnity::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
