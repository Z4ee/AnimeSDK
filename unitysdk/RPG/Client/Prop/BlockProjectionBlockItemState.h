#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionBlockItemState_TypeDefinitionIndex = 71708;

	enum class BlockProjectionBlockItemState : ::System::Int32
	{
		Empty = 0,
		Normal = 1,
		Selected = 2,
		Availiable = 3,
	};
}
