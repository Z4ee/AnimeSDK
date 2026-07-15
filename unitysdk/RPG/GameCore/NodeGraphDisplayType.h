#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NodeGraphDisplayType_TypeDefinitionIndex = 10457;

	enum class NodeGraphDisplayType : ::System::Int32
	{
		NodeBody = 0,
		Sequence = 1,
		Parallel = 2,
		Single = 3,
	};
}
