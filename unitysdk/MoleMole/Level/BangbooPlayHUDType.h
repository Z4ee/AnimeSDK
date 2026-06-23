#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayHUDType_TypeDefinitionIndex = 58070;

	enum class BangbooPlayHUDType : ::System::Int32
	{
		OnlyBangboo = 1,
		None = 0,
		OnlyRoleHud = 2,
		HideAll = 4,
		BangbooAndRoleHud = 3,
	};
}
