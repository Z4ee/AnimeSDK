#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int BlockVisibleReason_TypeDefinitionIndex = 73808;

	enum class BlockVisibleReason : ::System::Int32
	{
		Default = 0,
		Hide = 1,
		NotLoad = 2,
		Area = 3,
		Task = 4,
		Region = 5,
		Performance = 6,
		TrainParty = 7,
		GamePlay = 8,
		BattleArea = 9,
		MainCameraHidden = 10,
		Max = 11,
	};
}
