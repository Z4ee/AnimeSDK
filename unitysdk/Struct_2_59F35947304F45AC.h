#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_59F35947304F45AC_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x74690)

inline static constexpr unsigned int Struct_2_59F35947304F45AC_TypeDefinitionIndex = 43525;

struct alignas(8) Struct_2_59F35947304F45AC
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::RPG::GameCore::FixPoint Field_2_2; // 0x18

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_59F35947304F45AC_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
