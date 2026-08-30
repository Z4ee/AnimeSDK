#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionTalkStyleType_TypeDefinitionIndex = 24500;

	enum class MissionTalkStyleType : ::System::Int32
	{
		Default = 0,
		Communication = 1,
		ToTheStars = 2,
		FateRinBattle = 3,
	};
}
