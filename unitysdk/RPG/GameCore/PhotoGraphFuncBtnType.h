#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphFuncBtnType_TypeDefinitionIndex = 23716;

	enum class PhotoGraphFuncBtnType : ::System::Int32
	{
		Identify = 0,
		SingleTakePhoto = 1,
		MultiTakePhoto = 2,
		IdentifyUAV = 3,
		ShotUAV = 4,
		March7thGuessTheSilhouette = 5,
		PhotoUpdateTwoPointFour = 6,
		LongRange = 7,
		TrackPhoto = 8,
	};
}
