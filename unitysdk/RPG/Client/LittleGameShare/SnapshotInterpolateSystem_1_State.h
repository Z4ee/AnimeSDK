#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotInterpolateSystem_1_State_TypeDefinitionIndex = 35371;

	enum class SnapshotInterpolateSystem_1_State : ::System::Int32
	{
		Init = 0,
		Interpolate = 1,
		Idle = 2,
	};
}
