#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_3C72212260A8C076_METHOD_2_7D90263CF3A3B469_OFFSET UNITYSDK_OFFSET(0x159600)

inline static constexpr unsigned int Struct_2_3C72212260A8C076_TypeDefinitionIndex = 57118;

struct alignas(4) Struct_2_3C72212260A8C076
{
	::RPG::MVector3 LJCENKGKELP; // 0x10
	::System::Single HJLOCBLHNLD; // 0x1C
	::System::Single GNPIPAADIFK; // 0x20
	::RPG::MVector3 AIPNOJPDPCM; // 0x24

	::RPG::MVector3 Method_2_7D90263CF3A3B469(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + STRUCT_2_3C72212260A8C076_METHOD_2_7D90263CF3A3B469_OFFSET))(this, a1);
	}
};
