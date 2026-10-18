#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FadeOutLerpType_TypeDefinitionIndex = 70057;

	enum class FadeOutLerpType : ::System::Int32
	{
		Linear = 0,
		Cut = 1,
	};
}
