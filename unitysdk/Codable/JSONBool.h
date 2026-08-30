#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB57080)
#define CODABLE_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB56F30)
#define CODABLE_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB570A0)
#define CODABLE_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DB56FC0)
#define CODABLE_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1DB56F20)
#define CODABLE_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1DB56F10)
#define CODABLE_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DB56F50)
#define CODABLE_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DB56FD0)
#define CODABLE_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DB56F70)
#define CODABLE_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1DB57040)
#define CODABLE_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB56FF0)
#define CODABLE_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB56FE0)

namespace Codable
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 46531;

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
