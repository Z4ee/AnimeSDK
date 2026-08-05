#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterPickType_TypeDefinitionIndex = 59369;

	enum class MonsterPickType : ::System::Int32
	{
		All = 2,
		Allied = 1,
		Enemy = 0,
	};
}
