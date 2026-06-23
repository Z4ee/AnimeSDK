#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int TweenManager_CapacityIncreaseMode_TypeDefinitionIndex = 27993;

	enum class TweenManager_CapacityIncreaseMode : ::System::Int32
	{
		TweenersAndSequences = 0,
		TweenersOnly = 1,
		SequencesOnly = 2,
	};
}
