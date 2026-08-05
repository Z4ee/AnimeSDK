#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_EnableAction_TypeDefinitionIndex = 31205;

	enum class GraphOwner_EnableAction : ::System::Int32
	{
		DoNothing = 1,
		EnableBehaviour = 0,
	};
}
