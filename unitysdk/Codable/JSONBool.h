#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0A0780)
#define CODABLE_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA0A0630)
#define CODABLE_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0A07A0)
#define CODABLE_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA0A06C0)
#define CODABLE_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0xA0A0620)
#define CODABLE_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA0A0610)
#define CODABLE_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0A0650)
#define CODABLE_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA0A06D0)
#define CODABLE_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA0A0670)
#define CODABLE_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xA0A0740)
#define CODABLE_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0A06F0)
#define CODABLE_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A06E0)

namespace Codable
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 43488;

	class JSONBool : public ::Codable::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL__CTOR_1_OFFSET))(this, a1);
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_ISBOOLEAN_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::Codable::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
