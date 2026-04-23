#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Multithread
{
	inline static constexpr unsigned int NodeState_TypeDefinitionIndex = 39585;

	enum class NodeState : ::System::Int32
	{
		WAITTING = 0,
		SCHEDULED = 1,
	};
}
