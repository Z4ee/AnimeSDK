#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AIParamType_TypeDefinitionIndex = 70546;

	enum class AIParamType : ::System::Int32
	{
		Int = 1,
		Boolean = 3,
		Float = 0,
		String = 2,
	};
}
