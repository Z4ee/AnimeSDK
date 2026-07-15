#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarType_TypeDefinitionIndex = 10053;

	enum class SpecialAvatarType : ::System::Int32
	{
		TYPE_NONE = 0,
		TYPE_TRIAL = 1,
		TYPE_MISSION = 2,
		TYPE_FAKE = 3,
		TYPE_PLOT = 4,
		TYPE_ACTIVITY_SUMMON = 5,
		TYPE_ACTIVITY_ELATION = 6,
	};
}
