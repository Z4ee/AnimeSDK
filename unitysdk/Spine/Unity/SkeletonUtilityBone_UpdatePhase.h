#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtilityBone_UpdatePhase_TypeDefinitionIndex = 34800;

	enum class SkeletonUtilityBone_UpdatePhase : ::System::Int32
	{
		Local = 0,
		World = 1,
		Complete = 2,
	};
}
