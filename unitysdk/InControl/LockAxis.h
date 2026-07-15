#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int LockAxis_TypeDefinitionIndex = 38720;

	enum class LockAxis : ::System::Int32
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
	};
}
