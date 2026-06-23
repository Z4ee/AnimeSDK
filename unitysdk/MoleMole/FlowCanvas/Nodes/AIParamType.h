#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AIParamType_TypeDefinitionIndex = 59780;

	enum class AIParamType : ::System::Int32
	{
		Boolean = 3,
		Float = 0,
		Int = 1,
		String = 2,
	};
}
