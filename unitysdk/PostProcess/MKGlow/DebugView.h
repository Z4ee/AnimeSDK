#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int DebugView_TypeDefinitionIndex = 29640;

	enum class DebugView : ::System::Int32
	{
		None = 0,
		RawBloom = 1,
		RawLensFlare = 2,
		RawGlare = 3,
		Bloom = 4,
		LensFlare = 5,
		Glare = 6,
		Composite = 7,
	};
}
