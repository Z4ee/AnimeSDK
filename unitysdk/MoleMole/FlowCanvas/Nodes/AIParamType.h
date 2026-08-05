#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AIParamType_TypeDefinitionIndex = 73796;

	enum class AIParamType : ::System::Int32
	{
		String = 2,
		Int = 1,
		Boolean = 3,
		Float = 0,
	};
}
