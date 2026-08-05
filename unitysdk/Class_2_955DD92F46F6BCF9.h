#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_378.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_149.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_955DD92F46F6BCF9_METHOD_2_3571B588CA4A4CCD_OFFSET UNITYSDK_OFFSET(0x1D28BD20)
#define CLASS_2_955DD92F46F6BCF9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28BD10)

inline static constexpr unsigned int Class_2_955DD92F46F6BCF9_TypeDefinitionIndex = 92529;

class Class_2_955DD92F46F6BCF9 : public ::Class_1_5DA2E7556103D5A3_378
{
public:
	::System::Nullable_1<::System::Single> Field_2_0; // 0x70

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_149 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_149, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_955DD92F46F6BCF9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_3571B588CA4A4CCD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_955DD92F46F6BCF9_METHOD_2_3571B588CA4A4CCD_OFFSET))(this);
	}
};
