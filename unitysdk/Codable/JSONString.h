#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBCA7B0)
#define CODABLE_JSONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CBCA680)
#define CODABLE_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBCA8B0)
#define CODABLE_JSONSTRING_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1CBCA670)
#define CODABLE_JSONSTRING_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1CBCA660)
#define CODABLE_JSONSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CBCA6A0)
#define CODABLE_JSONSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CBCA6B0)
#define CODABLE_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1CBCA6D0)
#define CODABLE_JSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCA6C0)

namespace Codable
{
	inline static constexpr unsigned int JSONString_TypeDefinitionIndex = 36465;

	class JSONString : public ::Codable::JSONNode
	{
	public:
		::System::String* m_Data; // 0x10

		::System::Void _ctor(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING__CTOR_OFFSET))(this, aData);
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

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::Codable::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
