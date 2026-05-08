#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974_3.h"

class Class_2_112BCAD317CC03C6;
class Class_2_208CC9941471731A_282;

#define CLASS_3_60E1D351EE1DEED8_2_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x10ADCCB0)
#define CLASS_3_60E1D351EE1DEED8_2_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10ADCCA0)
#define CLASS_3_60E1D351EE1DEED8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10ADCBA0)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_2_TypeDefinitionIndex = 79315;

class Class_3_60E1D351EE1DEED8_2 : public ::Class_2_855BB6A8CC9E7974_3
{
public:
	::Class_2_112BCAD317CC03C6* Field_3_0; // 0x30
	::Class_2_208CC9941471731A_282* Field_3_1; // 0x38

	::System::Void _ctor(::Class_2_112BCAD317CC03C6* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_112BCAD317CC03C6*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}
};
