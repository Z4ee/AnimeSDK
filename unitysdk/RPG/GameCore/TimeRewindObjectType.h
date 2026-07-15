#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindObjectType_TypeDefinitionIndex = 16856;

	enum class TimeRewindObjectType : ::System::Int32
	{
		None = 0,
		Pillar = 1,
		Bridge = 2,
		FoundationBall = 3,
		Carving = 4,
		Chandelier = 5,
		Fan = 6,
	};
}
