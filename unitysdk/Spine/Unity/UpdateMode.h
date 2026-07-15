#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 42263;

	enum class UpdateMode : ::System::Int32
	{
		Nothing = 0,
		OnlyAnimationStatus = 1,
		OnlyEventTimelines = 4,
		EverythingExceptMesh = 2,
		FullUpdate = 3,
	};
}
