#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_LineRendererAni_DynamicCenterUpdateMode_TypeDefinitionIndex = 67344;

	enum class Effect_LineRendererAni_DynamicCenterUpdateMode : ::System::Int32
	{
		AlwaysUpdate = 0,
		OnlyFirstUpdate = 1,
	};
}
