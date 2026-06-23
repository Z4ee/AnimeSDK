#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

class Class_3_D902FC5F64432838;

#define CLASS_2_07DA189D79FA013B_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x16095950)
#define CLASS_2_07DA189D79FA013B_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x16095850)
#define CLASS_2_07DA189D79FA013B__CTOR_OFFSET UNITYSDK_OFFSET(0x160958E0)

inline static constexpr unsigned int Class_2_07DA189D79FA013B_TypeDefinitionIndex = 64052;

class Class_2_07DA189D79FA013B : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_D902FC5F64432838* Field_2_1; // 0x80
	::System::Single Field_2_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DA189D79FA013B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DA189D79FA013B_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DA189D79FA013B_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
