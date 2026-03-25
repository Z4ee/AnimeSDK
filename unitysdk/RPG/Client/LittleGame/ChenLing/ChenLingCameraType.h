#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingCameraType_TypeDefinitionIndex = 33697;

	enum class ChenLingCameraType : ::System::Int32
	{
		Invalid = 0,
		Battle = 1,
		HighLight = 2,
	};
}
