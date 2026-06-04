#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_37788043BFE771E4_2_GET_PARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x18885F20)
#define CLASS_2_37788043BFE771E4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18885F10)

inline static constexpr unsigned int Class_2_37788043BFE771E4_2_TypeDefinitionIndex = 5060;

class Class_2_37788043BFE771E4_2 : public ::System::Attribute
{
public:
	::System::Boolean _ParameterValue_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37788043BFE771E4_2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_ParameterValue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37788043BFE771E4_2_GET_PARAMETERVALUE_OFFSET))(this);
	}
};
