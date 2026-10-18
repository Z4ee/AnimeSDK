#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtilityBone_Mode_TypeDefinitionIndex = 45063;

	enum class SkeletonUtilityBone_Mode : ::System::Int32
	{
		Follow = 0,
		Override = 1,
	};
}
