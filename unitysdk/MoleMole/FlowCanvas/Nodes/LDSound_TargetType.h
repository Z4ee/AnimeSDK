#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSound_TargetType_TypeDefinitionIndex = 52134;

	enum class LDSound_TargetType : ::System::Int32
	{
		Anchor = 0,
		Entity = 1,
		Global = 3,
		Key = 2,
	};
}
