#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesHintInfoType_TypeDefinitionIndex = 46231;

	enum class EtherEyesHintInfoType : ::System::Int32
	{
		FixHoldInteract = 8,
		FindFocus = 3,
		FixFocus = 7,
		None = -1,
		FixInteractFinish = 9,
		FindInteractFinish = 5,
		FindHoldInteract = 4,
		ShowFocus = 2,
		Fix = 6,
		BreakCoreFocus = 1,
		Empty = 0,
	};
}
