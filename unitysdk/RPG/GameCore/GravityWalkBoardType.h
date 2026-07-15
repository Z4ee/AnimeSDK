#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityWalkBoardType_TypeDefinitionIndex = 17835;

	enum class GravityWalkBoardType : ::System::Int32
	{
		SemiCircle = 0,
		QuarterCircle = 1,
	};
}
