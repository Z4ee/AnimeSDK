#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMoveOnNavMeshMoveCalcType_TypeDefinitionIndex = 18470;

	enum class AdventureMoveOnNavMeshMoveCalcType : ::System::Int32
	{
		None = 0,
		Duration = 1,
		Speed = 2,
	};
}
