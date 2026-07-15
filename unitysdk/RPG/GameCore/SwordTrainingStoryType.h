#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryType_TypeDefinitionIndex = 11944;

	enum class SwordTrainingStoryType : ::System::Int32
	{
		None = 0,
		Exam = 1,
		Adventure = 2,
		Ending = 3,
	};
}
