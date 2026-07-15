#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_EnchantTargetDistanceType_TypeDefinitionIndex = 23602;

	enum class ST_EnchantTargetDistanceType : ::System::Int32
	{
		StartChase = 0,
		StopChase = 1,
	};
}
