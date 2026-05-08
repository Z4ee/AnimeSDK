#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Effect_MaterialKeywords_TypeDefinitionIndex = 29653;

	enum class Effect_MaterialKeywords : ::System::Int32
	{
		Bloom = 0,
		LensSurface = 1,
		LensFlare = 2,
		DebugRawBloom = 3,
		DebugRawLensFlare = 4,
		DebugRawGlare = 5,
		DebugBloom = 6,
		DebugLensFlare = 7,
		DebugGlare = 8,
		DebugComposite = 9,
		LegacyBlit = 10,
		RenderPriorityQuality = 11,
		Natural = 12,
		RenderPriorityBalanced = 13,
		HQAntiFlickerFilter = 14,
	};
}
