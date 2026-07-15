#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickBase_AffectedAxesAction_TypeDefinitionIndex = 38097;

	enum class QuickBase_AffectedAxesAction : ::System::Int32
	{
		X = 0,
		Y = 1,
		Z = 2,
		XY = 3,
		XZ = 4,
		YZ = 5,
		XYZ = 6,
	};
}
