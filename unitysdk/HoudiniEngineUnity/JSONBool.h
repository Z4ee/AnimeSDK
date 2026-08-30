#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B49FB30)
#define HOUDINIENGINEUNITY_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B49F9E0)
#define HOUDINIENGINEUNITY_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B49FB50)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1B49FA70)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B49F9D0)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B49F9C0)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B49FA00)
#define HOUDINIENGINEUNITY_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1B49FA80)
#define HOUDINIENGINEUNITY_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B49FA20)
#define HOUDINIENGINEUNITY_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1B49FAF0)
#define HOUDINIENGINEUNITY_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B49FAA0)
#define HOUDINIENGINEUNITY_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49FA90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 39386;

	class JSONBool : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL__CTOR_1_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_ISBOOLEAN_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
