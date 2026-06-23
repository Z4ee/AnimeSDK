#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSound_TargetType_TypeDefinitionIndex = 62811;

	enum class LDSound_TargetType : ::System::Int32
	{
		Anchor = 0,
		Key = 2,
		Entity = 1,
		Global = 3,
	};
}
