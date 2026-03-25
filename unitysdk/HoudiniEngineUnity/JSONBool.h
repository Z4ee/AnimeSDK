#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x84AA5B0)
#define HOUDINIENGINEUNITY_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x84AA460)
#define HOUDINIENGINEUNITY_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x84AA5D0)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x84AA4F0)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x84AA450)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x84AA440)
#define HOUDINIENGINEUNITY_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x84AA480)
#define HOUDINIENGINEUNITY_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x84AA500)
#define HOUDINIENGINEUNITY_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x84AA4A0)
#define HOUDINIENGINEUNITY_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x84AA570)
#define HOUDINIENGINEUNITY_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x84AA520)
#define HOUDINIENGINEUNITY_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x84AA510)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 37855;

	class JSONBool : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL__CTOR_1_OFFSET))(this, aData);
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

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
