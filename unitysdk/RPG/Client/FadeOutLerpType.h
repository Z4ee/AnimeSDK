#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FadeOutLerpType_TypeDefinitionIndex = 66917;

	enum class FadeOutLerpType : ::System::Int32
	{
		Linear = 0,
		Cut = 1,
	};
}
