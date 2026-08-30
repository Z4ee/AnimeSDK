#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int PlayAnimationActionEndStrategy_TypeDefinitionIndex = 73954;

	enum class PlayAnimationActionEndStrategy : ::System::Int32
	{
		PlayToEnd = 0,
		KeepPlaying = 1,
	};
}
