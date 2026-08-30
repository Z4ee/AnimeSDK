#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MouseInputController__POINT_TypeDefinitionIndex = 61423;

	struct alignas(4) MouseInputController__POINT
	{
		::System::Int32 X; // 0x10
		::System::Int32 Y; // 0x14
	};
}
