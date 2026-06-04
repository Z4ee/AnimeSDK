#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONNUMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0A5440)
#define CODABLE_JSONNUMBER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA0A5290)
#define CODABLE_JSONNUMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0A5590)
#define CODABLE_JSONNUMBER_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA0A5330)
#define CODABLE_JSONNUMBER_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0xA0A5280)
#define CODABLE_JSONNUMBER_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA0A5270)
#define CODABLE_JSONNUMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0A52B0)
#define CODABLE_JSONNUMBER_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0xA0A53C0)
#define CODABLE_JSONNUMBER_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA0A5340)
#define CODABLE_JSONNUMBER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0A52E0)
#define CODABLE_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xA0A53A0)
#define CODABLE_JSONNUMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0A5350)
#define CODABLE_JSONNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A1190)

namespace Codable
{
	inline static constexpr unsigned int JSONNumber_TypeDefinitionIndex = 43487;

	class JSONNumber : public ::Codable::JSONNode
	{
	public:
		::System::Double m_Data; // 0x10

		::System::Void _ctor(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::Codable::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean IsNumeric(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_ISNUMERIC_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNUMBER_GETHASHCODE_OFFSET))(this);
		}
	};
}
