#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int TransformMode_TypeDefinitionIndex = 37510;

	enum class TransformMode : ::System::Int32
	{
		Normal = 0,
		OnlyTranslation = 7,
		NoRotationOrReflection = 1,
		NoScale = 2,
		NoScaleOrReflection = 6,
	};
}
