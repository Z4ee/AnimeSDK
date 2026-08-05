#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int Optional_1_TypeDefinitionIndex = 47589;

	template <typename T>
	struct Optional_1
	{
		::System::Boolean HasValue; // 0x0
		T value; // 0x0
	};
}
