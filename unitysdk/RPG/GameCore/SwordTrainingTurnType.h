#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingTurnType_TypeDefinitionIndex = 12421;

	enum class SwordTrainingTurnType : ::System::Int32
	{
		None = 0,
		Action = 1,
		Exam = 2,
	};
}
