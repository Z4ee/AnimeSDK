#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_ShaderRenderPass_TypeDefinitionIndex = 29652;

	enum class Effect_ShaderRenderPass : ::System::Int32
	{
		Presample = 0,
		Downsample = 1,
		Upsample = 2,
		Composite = 3,
		Debug = 4,
	};
}
