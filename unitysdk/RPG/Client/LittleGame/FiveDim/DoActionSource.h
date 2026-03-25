#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int DoActionSource_TypeDefinitionIndex = 33348;

	enum class DoActionSource : ::System::Int32
	{
		Default = 0,
		CustomVisible = 1,
		CustomLoad = 2,
	};
}
