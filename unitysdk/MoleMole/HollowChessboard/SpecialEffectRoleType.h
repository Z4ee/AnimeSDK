#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SpecialEffectRoleType_TypeDefinitionIndex = 64742;

	enum class SpecialEffectRoleType : ::System::Int32
	{
		Open = 2,
		Special = 4,
		Close = 1,
		Normal = 0,
		Switch = 3,
	};
}
