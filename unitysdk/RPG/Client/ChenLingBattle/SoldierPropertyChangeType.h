#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPropertyChangeType_TypeDefinitionIndex = 75765;

	enum class SoldierPropertyChangeType : ::System::Int32
	{
		Add = 0,
		Multi = 1,
	};
}
