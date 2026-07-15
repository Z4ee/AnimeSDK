#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtilityBone_Mode_TypeDefinitionIndex = 42260;

	enum class SkeletonUtilityBone_Mode : ::System::Int32
	{
		Follow = 0,
		Override = 1,
	};
}
