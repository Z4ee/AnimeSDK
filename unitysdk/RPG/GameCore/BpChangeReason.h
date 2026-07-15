#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BpChangeReason_TypeDefinitionIndex = 54347;

	enum class BpChangeReason : ::System::Int32
	{
		Unknown = 0,
		Init = 1,
		SkillAdd = 2,
		SkillUse = 3,
		Task = 4,
		TaskSilence = 5,
		EntityAdditional = 6,
		SpecialBpConvert = 7,
		AdditionalBPStack = 8,
	};
}
