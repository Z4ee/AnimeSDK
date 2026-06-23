#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int PositionDampingAxis_TypeDefinitionIndex = 37649;

	enum class PositionDampingAxis : ::System::Int32
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 4,
		Vertical = 2,
		Horizontal = 5,
		All = 7,
	};
}
