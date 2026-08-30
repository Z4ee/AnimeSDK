#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIMeta_UIBlurMode_TypeDefinitionIndex = 72994;

	enum class UIMeta_UIBlurMode : ::System::Int32
	{
		None = 0,
		FullScreen = 1,
		PartialArea = 2,
		FullAndPartial = 3,
	};
}
