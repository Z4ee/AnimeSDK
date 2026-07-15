#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenPPEffectType_TypeDefinitionIndex = 23910;

	enum class ScreenPPEffectType : ::System::Int32
	{
		Unknown = 0,
		MotionBlur = 1,
	};
}
