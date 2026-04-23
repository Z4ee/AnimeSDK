#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x8CD9F60)
#define HOUDINIENGINEUNITY_JSONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8CD9ED0)
#define HOUDINIENGINEUNITY_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8CDA060)
#define HOUDINIENGINEUNITY_JSONSTRING_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x8CD9EC0)
#define HOUDINIENGINEUNITY_JSONSTRING_GET_TAG_OFFSET UNITYSDK_OFFSET(0x8CD9EB0)
#define HOUDINIENGINEUNITY_JSONSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8CD9EF0)
#define HOUDINIENGINEUNITY_JSONSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8CD9F00)
#define HOUDINIENGINEUNITY_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x8CD9F10)
#define HOUDINIENGINEUNITY_JSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD3740)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONString_TypeDefinitionIndex = 43730;

	class JSONString : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::String* m_Data; // 0x10

		::System::Void _ctor(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING__CTOR_OFFSET))(this, aData);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_GET_ISSTRING_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
