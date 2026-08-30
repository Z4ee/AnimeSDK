#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleSettleType_TypeDefinitionIndex = 78279;

	enum class PadsPuzzleSettleType : ::System::Int32
	{
		None = 0,
		End = 1,
		Repeat = 2,
		LeaveRegion = 3,
		LeaveRegionWithoutEnter = 4,
		FirstInvalid = 5,
		SwitchChainFail = 6,
	};
}
