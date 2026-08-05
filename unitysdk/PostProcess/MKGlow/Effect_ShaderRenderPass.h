#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_ShaderRenderPass_TypeDefinitionIndex = 27231;

	enum class Effect_ShaderRenderPass : ::System::Int32
	{
		Composite = 3,
		Downsample = 1,
		Presample = 0,
		Debug = 4,
		Upsample = 2,
	};
}
