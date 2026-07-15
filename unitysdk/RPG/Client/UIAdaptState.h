#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdaptState_TypeDefinitionIndex = 57413;

	enum class UIAdaptState : ::System::Int32
	{
		None = 0,
		WaitAsyncLoadNode = 1,
		AdaptFinish = 2,
	};
}
