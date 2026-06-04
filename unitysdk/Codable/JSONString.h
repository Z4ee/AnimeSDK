#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0A6DE0)
#define CODABLE_JSONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA0A6C70)
#define CODABLE_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0A6EE0)
#define CODABLE_JSONSTRING_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0xA0A6C60)
#define CODABLE_JSONSTRING_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA0A6C50)
#define CODABLE_JSONSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0A6C90)
#define CODABLE_JSONSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0A6CA0)
#define CODABLE_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xA0A6CB0)
#define CODABLE_JSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A2000)

namespace Codable
{
	inline static constexpr unsigned int JSONString_TypeDefinitionIndex = 43486;

	class JSONString : public ::Codable::JSONNode
	{
	public:
		::System::String* m_Data; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING__CTOR_OFFSET))(this, a1);
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_GET_ISSTRING_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::Codable::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
