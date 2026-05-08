#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Monitor_ReturnStatusMode_TypeDefinitionIndex = 27821;

	enum class Monitor_ReturnStatusMode : ::System::Int32
	{
		NewDecoratorActionStatus = 1,
		OriginalDecoratedChildStatus = 0,
	};
}
