#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_857FE3C1F40213C4.h"
#include "unitysdk/Class_2_CEBC2AFA24D1B883_Direction.h"

class Class_1_83665B095F1535B5_23;

#define CLASS_2_CEBC2AFA24D1B883_METHOD_2_6361CAB88016569E_OFFSET UNITYSDK_OFFSET(0x8BECD00)
#define CLASS_2_CEBC2AFA24D1B883__CTOR_OFFSET UNITYSDK_OFFSET(0x8BECBF0)

inline static constexpr unsigned int Class_2_CEBC2AFA24D1B883_TypeDefinitionIndex = 59316;

class Class_2_CEBC2AFA24D1B883 : public ::Class_1_857FE3C1F40213C4
{
public:
	::Class_2_CEBC2AFA24D1B883_Direction Field_2_0; // 0x20

	::System::Void _ctor(::Class_2_CEBC2AFA24D1B883_Direction a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CEBC2AFA24D1B883_Direction))((::PBYTE)hIl2Cpp + CLASS_2_CEBC2AFA24D1B883__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_6361CAB88016569E(::Class_1_83665B095F1535B5_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_23*))((::PBYTE)hIl2Cpp + CLASS_2_CEBC2AFA24D1B883_METHOD_2_6361CAB88016569E_OFFSET))(this, a1);
	}
};
