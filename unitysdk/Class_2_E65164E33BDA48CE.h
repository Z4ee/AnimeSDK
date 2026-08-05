#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

class Class_3_D902FC5F64432838;

#define CLASS_2_E65164E33BDA48CE_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x193AA380)
#define CLASS_2_E65164E33BDA48CE_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x193AA480)
#define CLASS_2_E65164E33BDA48CE__CTOR_OFFSET UNITYSDK_OFFSET(0x193AA410)

inline static constexpr unsigned int Class_2_E65164E33BDA48CE_TypeDefinitionIndex = 61253;

class Class_2_E65164E33BDA48CE : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_D902FC5F64432838* Field_2_0; // 0x80
	::System::Single Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E65164E33BDA48CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E65164E33BDA48CE_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E65164E33BDA48CE_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
