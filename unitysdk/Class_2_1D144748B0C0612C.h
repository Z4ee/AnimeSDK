#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2DEE66E87E2572E.h"
#include "unitysdk/Enum_3_CC3BC82D2D2360D0.h"

#define CLASS_2_1D144748B0C0612C_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x126C4330)
#define CLASS_2_1D144748B0C0612C__CTOR_OFFSET UNITYSDK_OFFSET(0x126C4340)

inline static constexpr unsigned int Class_2_1D144748B0C0612C_TypeDefinitionIndex = 44452;

class Class_2_1D144748B0C0612C : public ::Class_1_E2DEE66E87E2572E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D144748B0C0612C__CTOR_OFFSET))(this);
	}

	::Enum_3_CC3BC82D2D2360D0 get_Type()
	{
		return ((::Enum_3_CC3BC82D2D2360D0(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D144748B0C0612C_GET_TYPE_OFFSET))(this);
	}
};
