#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingBulletTrajectoryType_TypeDefinitionIndex = 41133;

	enum class ChenLingBulletTrajectoryType : ::System::Int32
	{
		Parabolic = 0,
		InPlace = 1,
		Straight = 2,
		Bezier = 3,
	};
}
