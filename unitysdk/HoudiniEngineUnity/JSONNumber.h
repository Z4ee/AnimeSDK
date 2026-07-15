#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONNUMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D207B40)
#define HOUDINIENGINEUNITY_JSONNUMBER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2078F0)
#define HOUDINIENGINEUNITY_JSONNUMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D207C50)
#define HOUDINIENGINEUNITY_JSONNUMBER_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D2079B0)
#define HOUDINIENGINEUNITY_JSONNUMBER_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1D2079D0)
#define HOUDINIENGINEUNITY_JSONNUMBER_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x1D2078E0)
#define HOUDINIENGINEUNITY_JSONNUMBER_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1D2078D0)
#define HOUDINIENGINEUNITY_JSONNUMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D207910)
#define HOUDINIENGINEUNITY_JSONNUMBER_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x1D207AC0)
#define HOUDINIENGINEUNITY_JSONNUMBER_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1D2079C0)
#define HOUDINIENGINEUNITY_JSONNUMBER_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x1D2079E0)
#define HOUDINIENGINEUNITY_JSONNUMBER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D207950)
#define HOUDINIENGINEUNITY_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1D207A60)
#define HOUDINIENGINEUNITY_JSONNUMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D207A00)
#define HOUDINIENGINEUNITY_JSONNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2079F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNumber_TypeDefinitionIndex = 38526;

	class JSONNumber : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::Double m_Data; // 0x10

		::System::Void _ctor(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER__CTOR_1_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_GET_ISNUMBER_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_SET_ASLONG_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean IsNumeric(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_ISNUMERIC_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNUMBER_GETHASHCODE_OFFSET))(this);
		}
	};
}
