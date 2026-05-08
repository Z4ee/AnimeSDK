#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONNUMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9CF480)
#define CODABLE_JSONNUMBER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A9CF260)
#define CODABLE_JSONNUMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9CF600)
#define CODABLE_JSONNUMBER_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1A9CF300)
#define CODABLE_JSONNUMBER_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x1A9CF250)
#define CODABLE_JSONNUMBER_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A9CF240)
#define CODABLE_JSONNUMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A9CF280)
#define CODABLE_JSONNUMBER_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x1A9CF3D0)
#define CODABLE_JSONNUMBER_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1A9CF310)
#define CODABLE_JSONNUMBER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A9CF2B0)
#define CODABLE_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1A9CF380)
#define CODABLE_JSONNUMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9CF330)
#define CODABLE_JSONNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9CF320)

namespace Codable
{
	inline static constexpr unsigned int JSONNumber_TypeDefinitionIndex = 34903;

	class JSONNumber : public ::Codable::JSONNode
	{
	public:
		::System::Double m_Data; // 0x10

		::System::Void _ctor(::System::Double aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER__CTOR_1_OFFSET))(this, aData);
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_GET_ISNUMBER_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::Codable::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		static ::System::Boolean IsNumeric(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_ISNUMERIC_OFFSET))(value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_GETHASHCODE_OFFSET))(this);
		}
	};
}
