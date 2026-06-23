#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Segment_TypeDefinitionIndex = 8260;

	enum class Segment : ::System::Int32
	{
		Invalid = -1,
		Update = 0,
		LateUpdate = 2,
		SlowUpdate = 3,
		FixedUpdate = 1,
	};
}
