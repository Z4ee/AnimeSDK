#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAnimatorCullingMode_TypeDefinitionIndex = 17975;

	enum class FiveDimAnimatorCullingMode : ::System::Int32
	{
		AlwaysAnimate = 0,
		CullUpdateTransforms = 1,
		CullCompletely = 2,
	};
}
