#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::UI::FlowerShop
{
	inline static constexpr unsigned int EFinishJudge_TypeDefinitionIndex = 87193;

	enum class EFinishJudge : ::System::Int32
	{
		Success = 2,
		MaxInCome = 4,
		ExtraChallenge = 8,
		None = 0,
	};
}
