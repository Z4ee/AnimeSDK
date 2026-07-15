#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_0_16E4307DCC419505_1243;
class Class_2_D41B3B8D4D2B16E7;

#define CLASS_2_2308CF7EC5CE179A_METHOD_2_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x15F87570)
#define CLASS_2_2308CF7EC5CE179A_METHOD_2_A21BBA85D4EF7B41_OFFSET UNITYSDK_OFFSET(0x15F87E10)
#define CLASS_2_2308CF7EC5CE179A__CTOR_OFFSET UNITYSDK_OFFSET(0x15F87560)

inline static constexpr unsigned int Class_2_2308CF7EC5CE179A_TypeDefinitionIndex = 74283;

class Class_2_2308CF7EC5CE179A : public ::Class_1_FD611945730E269E
{
public:
	::Class_0_16E4307DCC419505_1243* Field_2_0; // 0x18
	::Class_2_D41B3B8D4D2B16E7* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C

	::System::Void _ctor(::Class_2_D41B3B8D4D2B16E7* a1, ::Class_0_16E4307DCC419505_1243* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D41B3B8D4D2B16E7*, ::Class_0_16E4307DCC419505_1243*))((::PBYTE)hIl2Cpp + CLASS_2_2308CF7EC5CE179A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2308CF7EC5CE179A_METHOD_2_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_2_A21BBA85D4EF7B41(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2308CF7EC5CE179A_METHOD_2_A21BBA85D4EF7B41_OFFSET))(this, a1);
	}
};
