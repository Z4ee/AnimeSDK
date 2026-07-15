#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchBubbleType_TypeDefinitionIndex = 60182;

	enum class CakeCatchBubbleType : ::System::Int32
	{
		Invalid = 0,
		Single = 1,
		LeftDialogue = 2,
		RightDialogue = 3,
	};
}
