#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetRatioType_TypeDefinitionIndex = 23777;

	enum class TargetRatioType : ::System::Int32
	{
		Unknow = 0,
		MaxHP = 1,
		CurrentHP = 2,
	};
}
