#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_FanFollowAtkDirType_TypeDefinitionIndex = 90129;

	enum class FanCollisionWithHeightDetect_FanFollowAtkDirType : ::System::Int32
	{
		FollowAtk = 1,
		NormalFan = 0,
		ReverseFollowAtk = 2,
	};
}
