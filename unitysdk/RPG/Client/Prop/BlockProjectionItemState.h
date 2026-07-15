#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionItemState_TypeDefinitionIndex = 74258;

	enum class BlockProjectionItemState : ::System::Int32
	{
		Empty = 0,
		Normal = 1,
		Success = 2,
		Wrong = 3,
	};
}
