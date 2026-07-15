#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_EFinalIKLockFootMode_TypeDefinitionIndex = 42684;

	enum class Grounding_EFinalIKLockFootMode : ::System::Int32
	{
		Default = 0,
		IncludeRootMotion = 1,
		UseLocalCoord = 2,
		UseInitiatedTransform = 4,
	};
}
