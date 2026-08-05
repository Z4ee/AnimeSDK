#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetInLevelStateGroup_StateGroupEnum_TypeDefinitionIndex = 90385;

	enum class LDSetInLevelStateGroup_StateGroupEnum : ::System::Int32
	{
		StateGroup_Time = 3,
		StateGroup_Chapter = 0,
		StateGroup_GameState = 1,
		StateGroup_Inlevel = 2,
	};
}
