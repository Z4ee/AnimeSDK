#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int DebugView_TypeDefinitionIndex = 26393;

	enum class DebugView : ::System::Int32
	{
		RawGlare = 3,
		Bloom = 4,
		Glare = 6,
		RawBloom = 1,
		Composite = 7,
		LensFlare = 5,
		RawLensFlare = 2,
		None = 0,
	};
}
