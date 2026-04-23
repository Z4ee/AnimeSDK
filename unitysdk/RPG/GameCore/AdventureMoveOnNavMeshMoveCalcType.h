#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMoveOnNavMeshMoveCalcType_TypeDefinitionIndex = 19122;

	enum class AdventureMoveOnNavMeshMoveCalcType : ::System::Int32
	{
		None = 0,
		Duration = 1,
		Speed = 2,
	};
}
