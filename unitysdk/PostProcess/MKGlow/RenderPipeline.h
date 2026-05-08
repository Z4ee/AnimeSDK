#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int RenderPipeline_TypeDefinitionIndex = 29645;

	enum class RenderPipeline : ::System::Int32
	{
		Legacy = 0,
		SRP = 1,
	};
}
