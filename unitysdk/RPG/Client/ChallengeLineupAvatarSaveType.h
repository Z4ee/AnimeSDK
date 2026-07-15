#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeLineupAvatarSaveType_TypeDefinitionIndex = 60312;

	enum class ChallengeLineupAvatarSaveType : ::System::Int32
	{
		Normal = 0,
		PlayerReturnTrial = 1,
	};
}
