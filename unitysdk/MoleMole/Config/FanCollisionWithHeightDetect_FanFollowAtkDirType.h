#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_FanFollowAtkDirType_TypeDefinitionIndex = 68755;

	enum class FanCollisionWithHeightDetect_FanFollowAtkDirType : ::System::Int32
	{
		NormalFan = 0,
		FollowAtk = 1,
		ReverseFollowAtk = 2,
	};
}
