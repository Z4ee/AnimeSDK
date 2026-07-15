#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamMoodType_TypeDefinitionIndex = 13777;

	enum class PamMoodType : ::System::Int32
	{
		None = 0,
		Happy = 1,
		Normal = 2,
		Sad = 3,
		Confuse = 4,
		Angry = 5,
		Like = 6,
		Pleasure = 7,
	};
}
