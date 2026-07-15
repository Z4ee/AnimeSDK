#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PlayerMuteSkillReason_TypeDefinitionIndex = 40826;

	enum class PlayerMuteSkillReason : ::System::Int32
	{
		None = 0,
		Default = 2,
	};
}
