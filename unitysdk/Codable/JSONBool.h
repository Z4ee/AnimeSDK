#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBC9380)
#define CODABLE_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBC9180)
#define CODABLE_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBC93E0)
#define CODABLE_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DBC9270)
#define CODABLE_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1DBC9170)
#define CODABLE_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1DBC9160)
#define CODABLE_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DBC91A0)
#define CODABLE_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DBC9280)
#define CODABLE_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DBC91F0)
#define CODABLE_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1DBC9320)
#define CODABLE_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBC92A0)
#define CODABLE_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC9290)

namespace Codable
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 37126;

	class JSONBool : public ::Codable::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL__CTOR_1_OFFSET))(this, aData);
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

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::Codable::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
