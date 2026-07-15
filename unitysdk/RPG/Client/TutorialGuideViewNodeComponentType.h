#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideViewNodeComponentType_TypeDefinitionIndex = 65195;

	enum class TutorialGuideViewNodeComponentType : ::System::Int32
	{
		Text = 0,
		Image = 1,
		MonoIncontrolTip = 2,
		Recttransform = 3,
	};
}
