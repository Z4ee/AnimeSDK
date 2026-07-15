#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonoEffectLodTemplateName_TypeDefinitionIndex = 10140;

	enum class MonoEffectLodTemplateName : ::System::Int32
	{
		WithoutLod = 0,
		MonoEffect_Test = 1,
		MonoEffect_Default = 2,
	};
}
