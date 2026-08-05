#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::UI::FlowerShop
{
	inline static constexpr unsigned int EFinishJudge_TypeDefinitionIndex = 77116;

	enum class EFinishJudge : ::System::Int32
	{
		ExtraChallenge = 8,
		Success = 2,
		MaxInCome = 4,
		None = 0,
	};
}
