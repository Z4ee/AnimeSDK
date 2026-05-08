#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterPickType_TypeDefinitionIndex = 82758;

	enum class MonsterPickType : ::System::Int32
	{
		Enemy = 0,
		All = 2,
		Allied = 1,
	};
}
