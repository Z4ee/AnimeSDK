#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CountDownUIOperation_TypeDefinitionIndex = 40120;

	enum class CountDownUIOperation : ::System::Int32
	{
		GRAY = 1,
		RED_LIGHT_BG = 0,
	};
}
