#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace MiHoYoSDKJSON { class JSONArray; }
namespace MiHoYoSDKJSON { class JSONObject; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x85ADCA0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x85ADB80)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x85ADE20)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85AD4A0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x85ADE40)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x85AE730)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x85AE5D0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x85AE160)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x85ADFF0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x85ADE50)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x85AE2D0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x85AE820)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x85AD690)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x85AD500)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_TAG_OFFSET UNITYSDK_OFFSET(0x85AD490)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x85ADDE0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x85ADE00)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x85AE680)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x85AE210)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x85AE0A0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x85ADF40)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x85AE450)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x85AD6E0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x85AD550)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x85AE940)
#define MIHOYOSDKJSON_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x85AD4C0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x85AC270)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 36840;

	class JSONLazyCreator : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::String* m_Key; // 0x10
		::MiHoYoSDKJSON::JSONNode* m_Node; // 0x18

		::System::Void _ctor(::MiHoYoSDKJSON::JSONNode* aNode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR__CTOR_OFFSET))(this, aNode);
		}

		::System::Void _ctor_1(::MiHoYoSDKJSON::JSONNode* aNode, ::System::String* aKey)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, aNode, aKey);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_TAG_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::MiHoYoSDKJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Void Add(::MiHoYoSDKJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_ADD_OFFSET))(this, aItem);
		}

		::System::Void Add_1(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_ADD_1_OFFSET))(this, aKey, aItem);
		}

		static ::System::Boolean op_Equality(::MiHoYoSDKJSON::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::MiHoYoSDKJSON::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASLONG_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, value);
		}

		::MiHoYoSDKJSON::JSONArray* get_AsArray()
		{
			return ((::MiHoYoSDKJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONObject* get_AsObject()
		{
			return ((::MiHoYoSDKJSON::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYoSDKJSON::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
