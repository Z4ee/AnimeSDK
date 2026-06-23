#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DA7C9B2D7841637.h"

#define CLASS_3_92BB1817BDDFE456__CTOR_OFFSET UNITYSDK_OFFSET(0x13BC6C60)

inline static constexpr unsigned int Class_3_92BB1817BDDFE456_TypeDefinitionIndex = 86202;

class Class_3_92BB1817BDDFE456 : public ::Class_2_3DA7C9B2D7841637
{
public:
	::System::Int32 Field_3_0; // 0x38
	::System::Boolean Field_3_1; // 0x3C

	::System::Void _ctor(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_92BB1817BDDFE456__CTOR_OFFSET))(this, a1, a2);
	}
};
