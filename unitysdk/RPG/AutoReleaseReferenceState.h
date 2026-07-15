#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	inline static constexpr unsigned int AutoReleaseReferenceState_TypeDefinitionIndex = 5623;

	enum class AutoReleaseReferenceState : ::System::Int32
	{
		Allocated = 0,
		Recycled = 1,
		ManualRelease = 2,
	};
}
