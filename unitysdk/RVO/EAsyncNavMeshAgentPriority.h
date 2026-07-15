#pragma once
#include "unitysdk/unitysdk.h"

namespace RVO
{
	inline static constexpr unsigned int EAsyncNavMeshAgentPriority_TypeDefinitionIndex = 42715;

	enum class EAsyncNavMeshAgentPriority : ::System::Int32
	{
		High = 99,
		Medium = 50,
		Low = 0,
	};
}
