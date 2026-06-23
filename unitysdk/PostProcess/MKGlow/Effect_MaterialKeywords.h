#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_MaterialKeywords_TypeDefinitionIndex = 26626;

	enum class Effect_MaterialKeywords : ::System::Int32
	{
		DebugLensFlare = 7,
		Bloom = 0,
		RenderPriorityBalanced = 13,
		Natural = 12,
		DebugBloom = 6,
		LegacyBlit = 10,
		DebugComposite = 9,
		RenderPriorityQuality = 11,
		DebugGlare = 8,
		LensSurface = 1,
		DebugRawGlare = 5,
		LensFlare = 2,
		DebugRawLensFlare = 4,
		HQAntiFlickerFilter = 14,
		DebugRawBloom = 3,
	};
}
