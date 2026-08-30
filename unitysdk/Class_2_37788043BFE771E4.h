#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_37788043BFE771E4_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1BF15100)
#define CLASS_2_37788043BFE771E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF150F0)

inline static constexpr unsigned int Class_2_37788043BFE771E4_TypeDefinitionIndex = 5073;

class Class_2_37788043BFE771E4 : public ::System::Attribute
{
public:
	::System::Boolean _ReturnValue_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_37788043BFE771E4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_ReturnValue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37788043BFE771E4_GET_RETURNVALUE_OFFSET))(this);
	}
};
