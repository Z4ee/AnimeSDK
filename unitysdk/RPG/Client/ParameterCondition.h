#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParameterCondition_TypeDefinitionIndex = 67434;

	struct alignas(1) ParameterCondition
	{
		::System::Boolean ModifyEmissionRateOverTime; // 0x10
		::System::Boolean ModifyShapeSpread; // 0x11
		::System::Boolean ModifyShapePosition; // 0x12
	};
}
