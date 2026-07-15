#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ECurveAudioType_TypeDefinitionIndex = 65488;

	enum class ECurveAudioType : ::System::Int32
	{
		Unknown = 0,
		Idle = 1,
		DrivingStart = 2,
		DrivingLoop = 3,
		DrivingLoopStop = 4,
		DrivingStop = 5,
		DrivingArrived = 6,
		TriggerLoadLogic = 7,
		TriggerUnloadLogic = 8,
		SwitchConnection = 9,
	};
}
