#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_BatchState_TypeDefinitionIndex = 66940;

	enum class SimpleTextManagerMono_BatchState : ::System::Int32
	{
		Batching = 0,
		Batched = 1,
	};
}
