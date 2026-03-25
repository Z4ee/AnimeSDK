#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int IRIItemStatus_TypeDefinitionIndex = 60585;

	enum class IRIItemStatus : ::System::Int32
	{
		None = 0,
		LoadingMat = 1,
		LoadingAsset = 2,
		WaitingShow = 3,
	};
}
