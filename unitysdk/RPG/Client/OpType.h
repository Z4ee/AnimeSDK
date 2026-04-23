#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int OpType_TypeDefinitionIndex = 37673;

	enum class OpType : ::System::Int32
	{
		Sync = 0,
		Async = 1,
	};
}
