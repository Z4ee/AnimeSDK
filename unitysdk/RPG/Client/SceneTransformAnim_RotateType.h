#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SceneTransformAnim_RotateType_TypeDefinitionIndex = 67746;

	enum class SceneTransformAnim_RotateType : ::System::Int32
	{
		None = 0,
		RotateAroundAxis = 1,
		Wobbly = 2,
	};
}
