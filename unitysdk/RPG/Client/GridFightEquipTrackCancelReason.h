#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackCancelReason_TypeDefinitionIndex = 60143;

	enum class GridFightEquipTrackCancelReason : ::System::Int32
	{
		None = 0,
		AllEquipGot = 1,
		RoleEquipFull = 2,
		RoleRemove = 3,
		RoleChangeFrontBack = 4,
	};
}
