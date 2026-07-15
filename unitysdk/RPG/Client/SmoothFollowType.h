#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SmoothFollowType_TypeDefinitionIndex = 66925;

	enum class SmoothFollowType : ::System::Int32
	{
		Lerp = 0,
		Linear = 1,
		Damp = 2,
		DampExp = 3,
	};
}
