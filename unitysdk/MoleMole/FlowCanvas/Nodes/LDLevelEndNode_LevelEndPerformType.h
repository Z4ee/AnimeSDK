#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode_LevelEndPerformType_TypeDefinitionIndex = 53285;

	enum class LDLevelEndNode_LevelEndPerformType : ::System::Int32
	{
		ShortCut = 4,
		Dialog = 2,
		Empty = 10,
		Instant = 1,
		InDirectKill = 3,
		Normal = 0,
		Invalid = -1,
		Custom = 5,
	};
}
