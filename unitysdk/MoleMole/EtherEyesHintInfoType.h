#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesHintInfoType_TypeDefinitionIndex = 61117;

	enum class EtherEyesHintInfoType : ::System::Int32
	{
		Fix = 6,
		FindFocus = 3,
		FixFocus = 7,
		FindHoldInteract = 4,
		FixHoldInteract = 8,
		BreakCoreFocus = 1,
		ShowFocus = 2,
		Empty = 0,
		None = -1,
		FixInteractFinish = 9,
		FindInteractFinish = 5,
	};
}
