#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int DragAxis_TypeDefinitionIndex = 39580;

	enum class DragAxis : ::System::Int32
	{
		Both = 0,
		Horizontal = 1,
		Vertical = 2,
	};
}
