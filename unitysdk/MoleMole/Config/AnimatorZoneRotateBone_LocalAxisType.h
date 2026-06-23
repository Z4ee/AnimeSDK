#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_LocalAxisType_TypeDefinitionIndex = 41456;

	enum class AnimatorZoneRotateBone_LocalAxisType : ::System::Int32
	{
		EntityX = 4,
		WorldY = 8,
		WorldX = 7,
		LocalY = 2,
		WorldZ = 6,
		LocalX = 1,
		LocalZ = 0,
		EntityZ = 3,
		EntityY = 5,
	};
}
