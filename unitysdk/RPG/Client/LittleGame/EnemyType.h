#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int EnemyType_TypeDefinitionIndex = 38569;

	enum class EnemyType : ::System::Int32
	{
		Normal = 0,
		Prop = 1,
		Shooter = 2,
		Boss = 3,
		Block = 4,
		Detect = 5,
		FinishLine = 6,
	};
}
