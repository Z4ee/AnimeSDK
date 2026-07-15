#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_MazeBattleShotDataType_TypeDefinitionIndex = 66426;

	enum class CameraDataAndFlags_MazeBattleShotDataType : ::System::Int32
	{
		MonsterNPCUltraLongShot = 0,
		MonsterNPCLongShot = 1,
		MonsterNPCCloseShot = 2,
		LocalPlayerShot = 3,
		LocalPlayerMiddleShot = 4,
		LocalPlayerLongShot = 5,
		Custom = 6,
	};
}
