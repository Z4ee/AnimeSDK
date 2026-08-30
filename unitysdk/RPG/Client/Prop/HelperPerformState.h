#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int HelperPerformState_TypeDefinitionIndex = 78258;

	enum class HelperPerformState : ::System::Int32
	{
		Unknown = 0,
		MoveTo = 1,
		FadeOut = 2,
		FadeIn = 3,
	};
}
