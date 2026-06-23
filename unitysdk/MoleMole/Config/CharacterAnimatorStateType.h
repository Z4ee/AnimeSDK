#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAnimatorStateType_TypeDefinitionIndex = 81144;

	enum class CharacterAnimatorStateType : ::System::Int32
	{
		Max = 3,
		Ground = 0,
		Sky = 1,
		Floor = 2,
	};
}
