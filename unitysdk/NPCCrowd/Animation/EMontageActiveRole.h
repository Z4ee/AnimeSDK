#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int EMontageActiveRole_TypeDefinitionIndex = 42482;

	enum class EMontageActiveRole : ::System::Int32
	{
		Overlay = 2,
		Fallback = 1,
		External = 3,
		None = 0,
	};
}
