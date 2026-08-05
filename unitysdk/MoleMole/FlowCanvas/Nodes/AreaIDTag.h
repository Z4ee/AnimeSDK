#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AreaIDTag_TypeDefinitionIndex = 46627;

	enum class AreaIDTag : ::System::Int32
	{
		FLOOR_LAYER_AGENT = 100000003,
		NORMAL = 0,
		FLOOR_LAYER_BOSS = 100000002,
		FINAL_BOSS = 200000001,
		FLOOR_LAYER_START = 100000001,
		FLOOR_AGENT_BEFORE_FINAL_BOSS = 100000004,
	};
}
