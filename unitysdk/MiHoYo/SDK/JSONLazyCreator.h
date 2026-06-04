#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x18349020)
#define MIHOYO_SDK_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x18348F20)
#define MIHOYO_SDK_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x183491B0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18348900)
#define MIHOYO_SDK_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x183491D0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x18349AC0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x18349960)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x183494F0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x18349380)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x183491E0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x18349660)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x18349BA0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18348AB0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18348960)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_TAG_OFFSET UNITYSDK_OFFSET(0x183488F0)
#define MIHOYO_SDK_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18349170)
#define MIHOYO_SDK_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18349190)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x18349A10)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x183495A0)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x18349430)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x183492D0)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x183497E0)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18348B00)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x183489B0)
#define MIHOYO_SDK_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x18349CD0)
#define MIHOYO_SDK_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18348920)
#define MIHOYO_SDK_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18347210)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 8083;

	class JSONLazyCreator : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::MiHoYo::SDK::JSONNode* m_Node; // 0x10
		::System::String* m_Key; // 0x18

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_TAG_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_ADD_OFFSET))(this, a1);
		}

		::System::Void Add_1(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_ADD_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean op_Equality(::MiHoYo::SDK::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::MiHoYo::SDK::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASLONG_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONArray* get_AsArray()
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* get_AsObject()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYo::SDK::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
