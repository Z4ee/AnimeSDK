#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_222.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_200.h"
#include "unitysdk/System/DateTime.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_B44EC4F98156481D__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEA280)

inline static constexpr unsigned int Class_2_B44EC4F98156481D_TypeDefinitionIndex = 16152;

class Class_2_B44EC4F98156481D : public ::Class_1_EBCA2A4357C4C8BF_222
{
public:
	::System::DateTime Field_2_1; // 0x58
	::System::DateTime Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_200 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_200, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_B44EC4F98156481D__CTOR_OFFSET))(this, a1, a2);
	}
};
