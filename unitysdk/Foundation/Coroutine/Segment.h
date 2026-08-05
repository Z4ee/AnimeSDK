#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Segment_TypeDefinitionIndex = 8087;

	enum class Segment : ::System::Int32
	{
		Update = 0,
		LateUpdate = 2,
		Invalid = -1,
		FixedUpdate = 1,
		SlowUpdate = 3,
	};
}
