#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BPChangeValueType_TypeDefinitionIndex = 23819;

	enum class BPChangeValueType : ::System::Int32
	{
		Delta = 0,
		RawDelta = 1,
		TeamBpDelta = 2,
		UnclampedDelta = 3,
		UnclampedRawDelta = 4,
	};
}
