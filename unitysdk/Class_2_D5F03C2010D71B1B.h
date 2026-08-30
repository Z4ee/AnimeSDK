#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E23F8C260C60C5BC.h"

#define CLASS_2_D5F03C2010D71B1B_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xC122560)
#define CLASS_2_D5F03C2010D71B1B_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xC1225F0)
#define CLASS_2_D5F03C2010D71B1B__CTOR_OFFSET UNITYSDK_OFFSET(0xC122670)

inline static constexpr unsigned int Class_2_D5F03C2010D71B1B_TypeDefinitionIndex = 53764;

class Class_2_D5F03C2010D71B1B : public ::Class_1_E23F8C260C60C5BC
{
public:
	::System::Single EJKJIMKBCGC; // 0x28
	::System::Single DKJHMPAELJD; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D5F03C2010D71B1B_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}
};
