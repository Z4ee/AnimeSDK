#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_LightmapOptions_TypeDefinitionIndex = 85026;

	enum class MB2_LightmapOptions : ::System::Int32
	{
		preserve_current_lightmapping = 0,
		ignore_UV2 = 1,
		copy_UV2_unchanged = 2,
		generate_new_UV2_layout = 3,
		copy_UV2_unchanged_to_separate_rects = 4,
	};
}
