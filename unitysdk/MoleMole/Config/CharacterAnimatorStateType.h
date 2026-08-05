#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAnimatorStateType_TypeDefinitionIndex = 84473;

	enum class CharacterAnimatorStateType : ::System::Int32
	{
		Ground = 0,
		Floor = 2,
		Max = 3,
		Sky = 1,
	};
}
