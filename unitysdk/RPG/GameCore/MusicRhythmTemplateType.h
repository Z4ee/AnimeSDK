#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmTemplateType_TypeDefinitionIndex = 16267;

	enum class MusicRhythmTemplateType : ::System::Int32
	{
		Unknown = 0,
		PeppyTranslation = 1,
		OrigamiBird = 2,
		RanMadeCake = 3,
		JunkRap = 4,
		WolfBroStandStill = 5,
		TrotterPhoto = 6,
		SoulGladBottles = 7,
		WolfBroGun = 8,
		TVStacks = 9,
	};
}
