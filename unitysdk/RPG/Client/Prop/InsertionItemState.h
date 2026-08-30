#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionItemState_TypeDefinitionIndex = 78160;

	enum class InsertionItemState : ::System::Int32
	{
		Normal = 0,
		Matched = 1,
		UnMatched = 2,
	};
}
