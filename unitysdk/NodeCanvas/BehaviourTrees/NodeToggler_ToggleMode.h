#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int NodeToggler_ToggleMode_TypeDefinitionIndex = 27450;

	enum class NodeToggler_ToggleMode : ::System::Int32
	{
		Disable = 1,
		Toggle = 2,
		Enable = 0,
	};
}
