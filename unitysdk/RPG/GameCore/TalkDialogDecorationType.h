#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkDialogDecorationType_TypeDefinitionIndex = 23683;

	enum class TalkDialogDecorationType : ::System::Int32
	{
		None = 0,
		IdleLive = 1,
		StoryDanmu = 2,
	};
}
