#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_25472B60E7185850;

#define CLASS_2_AD95DD998F7AF291_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x18A8E340)
#define CLASS_2_AD95DD998F7AF291__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8E330)

inline static constexpr unsigned int Class_2_AD95DD998F7AF291_TypeDefinitionIndex = 34394;

class Class_2_AD95DD998F7AF291 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_25472B60E7185850* Field_2_0; // 0x18

	::System::Void _ctor(::Class_2_25472B60E7185850* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_25472B60E7185850*))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD95DD998F7AF291_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}
};
