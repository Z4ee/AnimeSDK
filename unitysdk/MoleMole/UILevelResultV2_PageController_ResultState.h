#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_PageController_ResultState_TypeDefinitionIndex = 81826;

	enum class UILevelResultV2_PageController_ResultState : ::System::Int32
	{
		Early_Out_Loop = 3,
		None = 0,
		Prepare_FadeIn = 1,
		Out_Waiting_Loop = 4,
		Normal_Fadein = 5,
		Short_FadeIn = 6,
		In_Waiting_Loop = 2,
	};
}
