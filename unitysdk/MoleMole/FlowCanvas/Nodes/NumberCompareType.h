#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int NumberCompareType_TypeDefinitionIndex = 74256;

	enum class NumberCompareType : ::System::Int32
	{
		Equal = 2,
		Less = 3,
		Greater = 0,
		LessEqual = 4,
		GreaterEqual = 1,
	};
}
