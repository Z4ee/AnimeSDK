#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode_LevelEndPerformType_TypeDefinitionIndex = 51723;

	enum class LDLevelEndNode_LevelEndPerformType : ::System::Int32
	{
		Dialog = 2,
		Normal = 0,
		Custom = 5,
		Empty = 10,
		Invalid = -1,
		ShortCut = 4,
		Instant = 1,
		InDirectKill = 3,
	};
}
