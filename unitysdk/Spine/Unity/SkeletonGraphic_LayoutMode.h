#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_LayoutMode_TypeDefinitionIndex = 42225;

	enum class SkeletonGraphic_LayoutMode : ::System::Int32
	{
		None = 0,
		WidthControlsHeight = 1,
		HeightControlsWidth = 2,
		FitInParent = 3,
		EnvelopeParent = 4,
	};
}
