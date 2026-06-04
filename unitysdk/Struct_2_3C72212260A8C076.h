#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_3C72212260A8C076_METHOD_2_7D90263CF3A3B469_OFFSET UNITYSDK_OFFSET(0x145220)

inline static constexpr unsigned int Struct_2_3C72212260A8C076_TypeDefinitionIndex = 53182;

struct alignas(4) Struct_2_3C72212260A8C076
{
	::RPG::MVector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x20
	::RPG::MVector3 Field_2_3; // 0x24

	::RPG::MVector3 Method_2_7D90263CF3A3B469(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_3C72212260A8C076_METHOD_2_7D90263CF3A3B469_OFFSET))(this, a1);
	}
};
