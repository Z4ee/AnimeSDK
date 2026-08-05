#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_DisableAction_TypeDefinitionIndex = 31207;

	enum class GraphOwner_DisableAction : ::System::Int32
	{
		PauseBehaviour = 1,
		DoNothing = 2,
		DisableBehaviour = 0,
	};
}
