#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode_LevelEndPerformType_TypeDefinitionIndex = 54400;

	enum class LDLevelEndNode_LevelEndPerformType : ::System::Int32
	{
		ShortCut = 4,
		Instant = 1,
		Custom = 5,
		Normal = 0,
		InDirectKill = 3,
		Dialog = 2,
		Empty = 10,
		Invalid = -1,
	};
}
