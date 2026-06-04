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

#define MIHOYOSDKJSON_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0xA22FE10)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0xA22FCF0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22FF90)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA22F610)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA22FFB0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0xA2308A0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA230740)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA2302D0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xA230160)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0xA22FFC0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0xA230440)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0xA230990)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xA22F800)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA22F670)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA22F600)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA22FF50)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA22FF70)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA2307F0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA230380)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xA230210)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0xA2300B0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0xA2305C0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xA22F850)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA22F6C0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xA230AB0)
#define MIHOYOSDKJSON_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA22F630)
#define MIHOYOSDKJSON_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA22DE90)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 43469;

	class JSONLazyCreator : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::String* m_Key; // 0x10
		::MiHoYoSDKJSON::JSONNode* m_Node; // 0x18

		::System::Void _ctor(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::MiHoYoSDKJSON::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, a1, a2);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_TAG_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_ADD_OFFSET))(this, a1);
		}

		::System::Void Add_1(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_ADD_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean op_Equality(::MiHoYoSDKJSON::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::MiHoYoSDKJSON::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYoSDKJSON::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASLONG_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONArray* get_AsArray()
		{
			return ((::MiHoYoSDKJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONObject* get_AsObject()
		{
			return ((::MiHoYoSDKJSON::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYoSDKJSON::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
