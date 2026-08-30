#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerAssetLoadState_TypeDefinitionIndex = 41771;

	enum class PhantomPlayerAssetLoadState : ::System::Int32
	{
		Loading = 0,
		Success = 1,
		Fail = 2,
	};
}
