#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D72C8878059D4DFF.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_171;
class Class_1_A312CF7E24F3D126;

#define STRUCT_2_6659645E143D6266_METHOD_2_FA290394C46B1A04_OFFSET UNITYSDK_OFFSET(0x7FF920)
#define STRUCT_2_6659645E143D6266__CTOR_OFFSET UNITYSDK_OFFSET(0x7FF8F0)

inline static constexpr unsigned int Struct_2_6659645E143D6266_TypeDefinitionIndex = 84298;

struct alignas(8) Struct_2_6659645E143D6266
{
	::Struct_2_D72C8878059D4DFF Field_2_0; // 0x10

	::System::Void _ctor(::Class_1_A312CF7E24F3D126* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A312CF7E24F3D126*))((::PBYTE)hIl2Cpp + STRUCT_2_6659645E143D6266__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_171* Method_2_FA290394C46B1A04()
	{
		return ((::Class_0_16E4307DCC419505_171*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6659645E143D6266_METHOD_2_FA290394C46B1A04_OFFSET))(this);
	}
};
