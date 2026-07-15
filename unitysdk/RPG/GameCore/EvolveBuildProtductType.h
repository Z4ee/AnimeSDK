#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildProtductType_TypeDefinitionIndex = 11033;

	enum class EvolveBuildProtductType : ::System::Int32
	{
		Unknown = 0,
		AddMazeBuff = 1,
		UnlockAbility = 2,
		AddAccessorySlot = 3,
		InitWeaponLevel = 4,
	};
}
