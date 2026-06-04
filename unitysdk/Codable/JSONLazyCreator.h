#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace Codable { class JSONArray; }
namespace Codable { class JSONObject; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0xA0A0F40)
#define CODABLE_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0xA0A0E40)
#define CODABLE_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0A10D0)
#define CODABLE_JSONLAZYCREATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA0A07C0)
#define CODABLE_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0A10F0)
#define CODABLE_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0xA0A15B0)
#define CODABLE_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA0A1490)
#define CODABLE_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA0A1360)
#define CODABLE_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xA0A1230)
#define CODABLE_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0xA0A1100)
#define CODABLE_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0xA0A1690)
#define CODABLE_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xA0A09C0)
#define CODABLE_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0A0850)
#define CODABLE_JSONLAZYCREATOR_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA0A07B0)
#define CODABLE_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA0A1090)
#define CODABLE_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA0A10B0)
#define CODABLE_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA0A1520)
#define CODABLE_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA0A13F0)
#define CODABLE_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0xA0A12C0)
#define CODABLE_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0xA0A11A0)
#define CODABLE_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xA0A0A10)
#define CODABLE_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0A08A0)
#define CODABLE_JSONLAZYCREATOR_SET_OFFSET UNITYSDK_OFFSET(0xA0A07F0)
#define CODABLE_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xA0A17C0)
#define CODABLE_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0A07E0)
#define CODABLE_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA09F220)

namespace Codable
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 43490;

	class JSONLazyCreator : public ::Codable::JSONNode
	{
	public:
		::System::String* m_Key; // 0x10
		::Codable::JSONNode* m_Node; // 0x18

		::System::Void _ctor(::Codable::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Codable::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, a1, a2);
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_TAG_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Set(::Codable::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_OFFSET))(this, a1);
		}

		::Codable::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::Codable::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::Codable::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_ADD_OFFSET))(this, a1);
		}

		::System::Void Add_1(::System::String* a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_ADD_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean op_Equality(::Codable::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::Codable::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::Codable::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::Codable::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, a1);
		}

		::Codable::JSONArray* get_AsArray()
		{
			return ((::Codable::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::Codable::JSONObject* get_AsObject()
		{
			return ((::Codable::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::Codable::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
