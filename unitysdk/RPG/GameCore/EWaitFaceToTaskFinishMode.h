#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EWaitFaceToTaskFinishMode_TypeDefinitionIndex = 10165;

	enum class EWaitFaceToTaskFinishMode : ::System::Int32
	{
		Default = 0,
		WaitAnimFinish = 1,
		WaitFaceAngle = 2,
	};
}
