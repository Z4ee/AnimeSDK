#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int TargetArrowUIKind_TypeDefinitionIndex = 64036;

	enum class TargetArrowUIKind : ::System::Int32
	{
		TargetEntity = 1,
		TargetArea = 0,
	};
}
