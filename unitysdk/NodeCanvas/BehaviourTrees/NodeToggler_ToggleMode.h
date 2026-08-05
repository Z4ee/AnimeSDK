#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int NodeToggler_ToggleMode_TypeDefinitionIndex = 30171;

	enum class NodeToggler_ToggleMode : ::System::Int32
	{
		Toggle = 2,
		Disable = 1,
		Enable = 0,
	};
}
