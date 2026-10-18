#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityVarType_TypeDefinitionIndex = 18867;

	enum class LittleGameEntityVarType : ::System::Int32
	{
		Value = 0,
		LevelVarNameString = 1,
		FloatValue = 2,
	};
}
