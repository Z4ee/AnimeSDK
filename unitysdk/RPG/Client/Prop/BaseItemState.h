#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BaseItemState_TypeDefinitionIndex = 72129;

	enum class BaseItemState : ::System::Int32
	{
		Normal = 0,
		Yellow = 1,
		Red = 2,
		White = 3,
		Hit = 4,
	};
}
