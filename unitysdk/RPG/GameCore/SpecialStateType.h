#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialStateType_TypeDefinitionIndex = 23620;

	enum class SpecialStateType : ::System::Int32
	{
		Enter = 0,
		FadeOut = 1,
		None = 2,
	};
}
