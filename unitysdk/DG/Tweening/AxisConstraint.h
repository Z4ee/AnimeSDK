#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int AxisConstraint_TypeDefinitionIndex = 28434;

	enum class AxisConstraint : ::System::Int32
	{
		None = 0,
		X = 2,
		Y = 4,
		Z = 8,
		W = 16,
	};
}
