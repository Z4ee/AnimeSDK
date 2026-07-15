#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishWayCheckType_TypeDefinitionIndex = 10227;

	enum class FinishWayCheckType : ::System::Int32
	{
		None = 0,
		SubmissionNotFinish = 1,
		QuestNotFinish = 2,
	};
}
