#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCueBindingType_TypeDefinitionIndex = 18081;

	enum class FiveDimCueBindingType : ::System::Int32
	{
		BindBeat = 0,
		BindMusicCue = 1,
	};
}
