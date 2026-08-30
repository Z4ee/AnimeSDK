#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingHitType_TypeDefinitionIndex = 42109;

	enum class ChenLingHitType : ::System::Int32
	{
		Normal = 1,
		Critical = 2,
	};
}
