#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrialAvatarType_TypeDefinitionIndex = 12076;

	enum class TrialAvatarType : ::System::Int32
	{
		TYPE_NONE = 0,
		TYPE_TRIAL = 1,
		TYPE_MISSION = 2,
	};
}
