#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesHintInfoType_TypeDefinitionIndex = 40534;

	enum class EtherEyesHintInfoType : ::System::Int32
	{
		Empty = 0,
		FixInteractFinish = 9,
		Fix = 6,
		FindHoldInteract = 4,
		FindFocus = 3,
		ShowFocus = 2,
		FindInteractFinish = 5,
		BreakCoreFocus = 1,
		None = -1,
		FixHoldInteract = 8,
		FixFocus = 7,
	};
}
