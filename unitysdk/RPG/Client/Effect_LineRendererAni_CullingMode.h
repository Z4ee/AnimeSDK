#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRendererAni_CullingMode_TypeDefinitionIndex = 67343;

	enum class Effect_LineRendererAni_CullingMode : ::System::Int32
	{
		Pause = 0,
		AlwaysUpdate = 1,
		OnlyFirstUpdate = 2,
	};
}
