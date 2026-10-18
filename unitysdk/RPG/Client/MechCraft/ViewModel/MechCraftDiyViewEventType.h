#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyViewEventType_TypeDefinitionIndex = 79616;

	enum class MechCraftDiyViewEventType : ::System::Int32
	{
		RequestConfirmExit = 0,
		RequestClose = 1,
		PlayLeftListFadeIn = 2,
		PlayRightListFadeIn = 3,
	};
}
