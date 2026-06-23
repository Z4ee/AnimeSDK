#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING_OPTBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D52E9E0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING_OPTBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D52E9C0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING_OPTBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D52E9F0)
#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING_OPTBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52E920)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int Graph_BinarySerializer_Setting_OptBool_TypeDefinitionIndex = 29333;

	class Graph_BinarySerializer_Setting_OptBool : public ::System::Object
	{
	public:
		::System::String* _key; // 0x10
		::System::Boolean _value_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING_OPTBOOL__CTOR_OFFSET))(this, key);
		}

		static ::System::Boolean op_Implicit(::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool* optBool)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING_OPTBOOL_OP_IMPLICIT_OFFSET))(optBool);
		}

		::System::Boolean get_value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING_OPTBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING_OPTBOOL_SET_VALUE_OFFSET))(this, value);
		}
	};
}
