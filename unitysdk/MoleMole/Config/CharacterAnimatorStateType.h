#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAnimatorStateType_TypeDefinitionIndex = 61575;

	enum class CharacterAnimatorStateType : ::System::Int32
	{
		Sky = 1,
		Floor = 2,
		Max = 3,
		Ground = 0,
	};
}
