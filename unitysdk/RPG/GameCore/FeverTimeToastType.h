#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FeverTimeToastType_TypeDefinitionIndex = 23860;

	enum class FeverTimeToastType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Special = 2,
		FeverSpecial = 3,
		FeverBack = 4,
	};
}
