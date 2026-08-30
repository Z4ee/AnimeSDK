#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutInSourceType_TypeDefinitionIndex = 24397;

	enum class CutInSourceType : ::System::Int32
	{
		AetherDivideSkill = 0,
		EruditionInsert = 1,
		Custom = 2,
		NotifyFadeOut = 3,
	};
}
