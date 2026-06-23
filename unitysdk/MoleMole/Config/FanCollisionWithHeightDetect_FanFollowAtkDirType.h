#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_FanFollowAtkDirType_TypeDefinitionIndex = 68074;

	enum class FanCollisionWithHeightDetect_FanFollowAtkDirType : ::System::Int32
	{
		NormalFan = 0,
		ReverseFollowAtk = 2,
		FollowAtk = 1,
	};
}
