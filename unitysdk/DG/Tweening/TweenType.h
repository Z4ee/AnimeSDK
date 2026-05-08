#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int TweenType_TypeDefinitionIndex = 25443;

	enum class TweenType : ::System::Int32
	{
		Tweener = 0,
		Sequence = 1,
		Callback = 2,
	};
}
