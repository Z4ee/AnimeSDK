#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryLineType_TypeDefinitionIndex = 11945;

	enum class SwordTrainingStoryLineType : ::System::Int32
	{
		None = 0,
		Default = 1,
		Friend = 2,
	};
}
