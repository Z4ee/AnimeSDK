#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Monitor_ReturnStatusMode_TypeDefinitionIndex = 30107;

	enum class Monitor_ReturnStatusMode : ::System::Int32
	{
		OriginalDecoratedChildStatus = 0,
		NewDecoratorActionStatus = 1,
	};
}
