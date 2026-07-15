#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialPlayerActionType_TypeDefinitionIndex = 23952;

	enum class TutorialPlayerActionType : ::System::Int32
	{
		None = 0,
		ClickBtn = 1,
		AnyAction = 2,
		ActionPress = 3,
		ShortClick = 4,
		ActionRelease = 5,
		NodePress = 6,
	};
}
