#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMoveOnNavMeshFaceToType_TypeDefinitionIndex = 23619;

	enum class AdventureMoveOnNavMeshFaceToType : ::System::Int32
	{
		None = 0,
		FaceToTarget = 1,
		FaceToMoveDir = 2,
	};
}
