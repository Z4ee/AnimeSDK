#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_MecanimTranslator_MixMode_TypeDefinitionIndex = 42235;

	enum class SkeletonMecanim_MecanimTranslator_MixMode : ::System::Int32
	{
		AlwaysMix = 0,
		MixNext = 1,
		Hard = 2,
	};
}
