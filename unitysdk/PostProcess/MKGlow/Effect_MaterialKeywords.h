#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_MaterialKeywords_TypeDefinitionIndex = 27229;

	enum class Effect_MaterialKeywords : ::System::Int32
	{
		RenderPriorityBalanced = 13,
		DebugRawGlare = 5,
		LensFlare = 2,
		LensSurface = 1,
		DebugComposite = 9,
		DebugBloom = 6,
		RenderPriorityQuality = 11,
		DebugLensFlare = 7,
		Natural = 12,
		HQAntiFlickerFilter = 14,
		DebugRawBloom = 3,
		DebugGlare = 8,
		LegacyBlit = 10,
		DebugRawLensFlare = 4,
		Bloom = 0,
	};
}
