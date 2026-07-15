#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReflectionRenderPass_TypeDefinitionIndex = 36090;

	enum class ReflectionRenderPass : ::System::Int32
	{
		GBuffer = 0,
		Forward = 1,
	};
}
