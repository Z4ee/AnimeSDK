#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Segment_TypeDefinitionIndex = 8293;

	enum class Segment : ::System::Int32
	{
		LateUpdate = 2,
		Invalid = -1,
		SlowUpdate = 3,
		Update = 0,
		FixedUpdate = 1,
	};
}
