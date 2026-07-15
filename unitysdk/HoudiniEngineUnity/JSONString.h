#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D2096F0)
#define HOUDINIENGINEUNITY_JSONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D209570)
#define HOUDINIENGINEUNITY_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D2097C0)
#define HOUDINIENGINEUNITY_JSONSTRING_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x1D209560)
#define HOUDINIENGINEUNITY_JSONSTRING_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1D209550)
#define HOUDINIENGINEUNITY_JSONSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D209590)
#define HOUDINIENGINEUNITY_JSONSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D2095A0)
#define HOUDINIENGINEUNITY_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1D2095C0)
#define HOUDINIENGINEUNITY_JSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2095B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONString_TypeDefinitionIndex = 38525;

	class JSONString : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::String* m_Data; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING__CTOR_OFFSET))(this, a1);
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

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
