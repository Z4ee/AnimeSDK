#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraAttackType_TypeDefinitionIndex = 15787;

	enum class VCameraAttackType : ::System::Int32
	{
		Unknow = 0,
		MeleeAttack = 1,
		RangeAttack = 2,
	};
}
