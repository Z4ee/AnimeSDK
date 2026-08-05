#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_LocalAxisType_TypeDefinitionIndex = 79212;

	enum class AnimatorZoneRotateBone_LocalAxisType : ::System::Int32
	{
		WorldY = 8,
		LocalY = 2,
		EntityZ = 3,
		LocalZ = 0,
		WorldX = 7,
		LocalX = 1,
		EntityX = 4,
		EntityY = 5,
		WorldZ = 6,
	};
}
