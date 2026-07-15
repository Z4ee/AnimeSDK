#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityVarType_TypeDefinitionIndex = 17901;

	enum class FiveDimEntityVarType : ::System::Int32
	{
		Value = 0,
		LevelVarNameString = 1,
		FloatValue = 2,
	};
}
