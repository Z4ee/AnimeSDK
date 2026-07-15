#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CustomLineType_TypeDefinitionIndex = 67241;

	enum class CustomLineType : ::System::Int32
	{
		BrokenLine = 0,
		BezierCurve = 1,
		BSplineCurve = 2,
		Count = 3,
	};
}
