#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ToastHintItem_Status_TypeDefinitionIndex = 67201;

	enum class ToastHintItem_Status : ::System::Int32
	{
		Hiding = 0,
		FadeIn = 1,
		Showing = 2,
		FadeOut = 3,
	};
}
