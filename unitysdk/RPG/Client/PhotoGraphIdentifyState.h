#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphIdentifyState_TypeDefinitionIndex = 58196;

	enum class PhotoGraphIdentifyState : ::System::Int32
	{
		None = 0,
		IdentifyWaitTarget = 1,
		IdentifySearchTarget = 2,
		IdentifyTargetAppear = 3,
		IdentifyPending = 4,
		IdentifySuccess = 5,
		IdentifyFail = 6,
		IdentifyShowResult = 7,
	};
}
