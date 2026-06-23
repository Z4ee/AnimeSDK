#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_DisableAction_TypeDefinitionIndex = 30871;

	enum class GraphOwner_DisableAction : ::System::Int32
	{
		DisableBehaviour = 0,
		DoNothing = 2,
		PauseBehaviour = 1,
	};
}
