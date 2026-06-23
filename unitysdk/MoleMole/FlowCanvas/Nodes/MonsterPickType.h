#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterPickType_TypeDefinitionIndex = 65781;

	enum class MonsterPickType : ::System::Int32
	{
		Allied = 1,
		Enemy = 0,
		All = 2,
	};
}
