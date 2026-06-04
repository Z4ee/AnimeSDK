#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TransformScreenAdapter_ScreenAdaptionTarget_TypeDefinitionIndex = 65772;

	enum class TransformScreenAdapter_ScreenAdaptionTarget : ::System::Int32
	{
		None = 0,
		Position = 1,
		Scale = 2,
		Rotation = 4,
	};
}
