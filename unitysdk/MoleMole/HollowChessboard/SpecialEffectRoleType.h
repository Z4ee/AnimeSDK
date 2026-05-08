#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SpecialEffectRoleType_TypeDefinitionIndex = 76338;

	enum class SpecialEffectRoleType : ::System::Int32
	{
		Switch = 3,
		Close = 1,
		Normal = 0,
		Special = 4,
		Open = 2,
	};
}
