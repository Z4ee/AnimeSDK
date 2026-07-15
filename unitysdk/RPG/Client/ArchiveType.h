#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveType_TypeDefinitionIndex = 59658;

	enum class ArchiveType : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Monster = 2,
		LightCone = 3,
		Relic = 4,
		ProperNoun = 5,
		Aeons = 6,
		Factions = 7,
		Count = 8,
	};
}
