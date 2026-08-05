#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int AutoPlay_TypeDefinitionIndex = 28433;

	enum class AutoPlay : ::System::Int32
	{
		None = 0,
		AutoPlaySequences = 1,
		AutoPlayTweeners = 2,
		All = 3,
	};
}
