#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2DEE66E87E2572E.h"
#include "unitysdk/Enum_3_7287219DC64CD06D.h"

#define CLASS_2_1D144748B0C0612C_7_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xF27E2D0)
#define CLASS_2_1D144748B0C0612C_7__CTOR_OFFSET UNITYSDK_OFFSET(0xF27E2E0)

inline static constexpr unsigned int Class_2_1D144748B0C0612C_7_TypeDefinitionIndex = 66337;

class Class_2_1D144748B0C0612C_7 : public ::Class_1_E2DEE66E87E2572E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D144748B0C0612C_7__CTOR_OFFSET))(this);
	}

	::Enum_3_7287219DC64CD06D get_Type()
	{
		return ((::Enum_3_7287219DC64CD06D(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D144748B0C0612C_7_GET_TYPE_OFFSET))(this);
	}
};
