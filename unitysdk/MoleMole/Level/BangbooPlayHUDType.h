#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayHUDType_TypeDefinitionIndex = 78398;

	enum class BangbooPlayHUDType : ::System::Int32
	{
		None = 0,
		OnlyRoleHud = 2,
		HideAll = 4,
		OnlyBangboo = 1,
		BangbooAndRoleHud = 3,
	};
}
