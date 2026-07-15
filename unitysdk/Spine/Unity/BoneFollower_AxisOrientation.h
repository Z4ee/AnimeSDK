#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int BoneFollower_AxisOrientation_TypeDefinitionIndex = 42211;

	enum class BoneFollower_AxisOrientation : ::System::Int32
	{
		XAxis = 1,
		YAxis = 2,
	};
}
