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

#define MIHOYO_SDK_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D4AB500)
#define MIHOYO_SDK_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x1D4AB360)
#define MIHOYO_SDK_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D4AB610)
#define MIHOYO_SDK_JSONLAZYCREATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D4AAEF0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D4AB630)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x1D4AC170)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1D4ABFB0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D4ABA10)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1D4AB830)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x1D4AB640)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1D4ABBE0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x1D4AC2B0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D4AB200)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D4AAFD0)
#define MIHOYO_SDK_JSONLAZYCREATOR_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1D4AAEE0)
#define MIHOYO_SDK_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D4AB5D0)
#define MIHOYO_SDK_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D4AB5F0)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1D4AC090)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D4ABAF0)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1D4AB910)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x1D4AB720)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1D4ABDA0)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D4AB290)
#define MIHOYO_SDK_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D4AB060)
#define MIHOYO_SDK_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1D4AC340)
#define MIHOYO_SDK_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D4AAF70)
#define MIHOYO_SDK_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AAF10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 20251;

	class JSONLazyCreator : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::String* m_Key; // 0x10
		::MiHoYo::SDK::JSONNode* m_Node; // 0x18

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* aNode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR__CTOR_OFFSET))(this, aNode);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::JSONNode* aNode, ::System::String* aKey)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, aNode, aKey);
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_TAG_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::MiHoYo::SDK::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::MiHoYo::SDK::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::MiHoYo::SDK::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Void Add(::MiHoYo::SDK::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_ADD_OFFSET))(this, aItem);
		}

		::System::Void Add_1(::System::String* aKey, ::MiHoYo::SDK::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_ADD_1_OFFSET))(this, aKey, aItem);
		}

		static ::System::Boolean op_Equality(::MiHoYo::SDK::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::MiHoYo::SDK::JSONLazyCreator* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, value);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASLONG_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, value);
		}

		::MiHoYo::SDK::JSONArray* get_AsArray()
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONObject* get_AsObject()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYo::SDK::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
