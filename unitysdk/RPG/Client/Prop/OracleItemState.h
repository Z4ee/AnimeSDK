#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OracleItemState_TypeDefinitionIndex = 73246;

	enum class OracleItemState : ::System::Int32
	{
		Normal = 0,
		Selected = 1,
		Pinned = 2,
	};
}
