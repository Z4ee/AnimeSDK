#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EPropCurveMoveType_TypeDefinitionIndex = 19993;

	enum class EPropCurveMoveType : ::System::Int32
	{
		Duration = 0,
		Speed = 1,
	};
}
