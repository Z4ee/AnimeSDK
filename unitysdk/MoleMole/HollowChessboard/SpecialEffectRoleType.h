#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SpecialEffectRoleType_TypeDefinitionIndex = 40458;

	enum class SpecialEffectRoleType : ::System::Int32
	{
		Open = 2,
		Switch = 3,
		Special = 4,
		Normal = 0,
		Close = 1,
	};
}
