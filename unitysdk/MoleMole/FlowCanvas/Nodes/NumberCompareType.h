#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int NumberCompareType_TypeDefinitionIndex = 84356;

	enum class NumberCompareType : ::System::Int32
	{
		GreaterEqual = 1,
		Equal = 2,
		LessEqual = 4,
		Less = 3,
		Greater = 0,
	};
}
