#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_LocalAxisType_TypeDefinitionIndex = 49260;

	enum class AnimatorZoneRotateBone_LocalAxisType : ::System::Int32
	{
		EntityY = 5,
		EntityX = 4,
		LocalY = 2,
		LocalZ = 0,
		LocalX = 1,
		WorldZ = 6,
		WorldY = 8,
		EntityZ = 3,
		WorldX = 7,
	};
}
