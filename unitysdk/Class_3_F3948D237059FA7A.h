#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;

#define CLASS_3_F3948D237059FA7A_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16539F70)
#define CLASS_3_F3948D237059FA7A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1653A100)
#define CLASS_3_F3948D237059FA7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1653A060)

inline static constexpr unsigned int Class_3_F3948D237059FA7A_TypeDefinitionIndex = 63912;

class Class_3_F3948D237059FA7A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3948D237059FA7A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3948D237059FA7A_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3948D237059FA7A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
