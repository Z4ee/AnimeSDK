#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputRangeType_TypeDefinitionIndex = 38671;

	enum class InputRangeType : ::System::Int32
	{
		None = 0,
		MinusOneToOne = 1,
		OneToMinusOne = 2,
		ZeroToOne = 3,
		ZeroToMinusOne = 4,
		OneToZero = 5,
		MinusOneToZero = 6,
	};
}
