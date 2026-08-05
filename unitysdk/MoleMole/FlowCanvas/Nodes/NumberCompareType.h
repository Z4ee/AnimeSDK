#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int NumberCompareType_TypeDefinitionIndex = 82381;

	enum class NumberCompareType : ::System::Int32
	{
		GreaterEqual = 1,
		Greater = 0,
		Less = 3,
		LessEqual = 4,
		Equal = 2,
	};
}
