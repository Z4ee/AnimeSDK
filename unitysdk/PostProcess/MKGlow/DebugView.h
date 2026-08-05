#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int DebugView_TypeDefinitionIndex = 27884;

	enum class DebugView : ::System::Int32
	{
		LensFlare = 5,
		Composite = 7,
		RawGlare = 3,
		Glare = 6,
		RawLensFlare = 2,
		RawBloom = 1,
		Bloom = 4,
		None = 0,
	};
}
