#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastType_TypeDefinitionIndex = 23631;

	enum class ToastType : ::System::Int32
	{
		ChallengeMission = 0,
		AreaChange = 1,
		ChallengeMazeHint = 2,
		ChallengeEnviromentHint = 3,
		PhotoGraphIdentifySuccess = 4,
		PhotoGraphIdentifyFail = 5,
		MazeEnvBuffToast = 6,
	};
}
