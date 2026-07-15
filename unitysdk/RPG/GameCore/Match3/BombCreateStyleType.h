#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BombCreateStyleType_TypeDefinitionIndex = 23995;

	enum class BombCreateStyleType : ::System::Int32
	{
		NoStyle = 0,
		FollowBreakStyle = 1,
	};
}
