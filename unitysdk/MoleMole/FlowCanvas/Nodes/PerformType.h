#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int PerformType_TypeDefinitionIndex = 52661;

	enum class PerformType : ::System::Int32
	{
		Custom = 2,
		Begin = 0,
		End = 1,
	};
}
