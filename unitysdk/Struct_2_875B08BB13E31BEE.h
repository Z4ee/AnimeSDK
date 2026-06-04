#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_875B08BB13E31BEE_METHOD_2_678A641D7D5163B2_OFFSET UNITYSDK_OFFSET(0x861F0)

inline static constexpr unsigned int Struct_2_875B08BB13E31BEE_TypeDefinitionIndex = 50127;

struct alignas(8) Struct_2_875B08BB13E31BEE
{
	::RPG::GameCore::FixVec2 Field_2_0; // 0x10

	::System::Void Method_2_678A641D7D5163B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_875B08BB13E31BEE_METHOD_2_678A641D7D5163B2_OFFSET))(this);
	}
};
