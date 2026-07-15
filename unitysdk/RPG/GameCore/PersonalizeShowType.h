#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PersonalizeShowType_TypeDefinitionIndex = 12504;

	enum class PersonalizeShowType : ::System::Int32
	{
		None = 0,
		Always = 1,
		AfterStart = 2,
		InSchedule = 3,
		UnlockedOnly = 4,
	};
}
