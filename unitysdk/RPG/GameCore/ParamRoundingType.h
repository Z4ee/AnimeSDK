#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamRoundingType_TypeDefinitionIndex = 16403;

	enum class ParamRoundingType : ::System::Int32
	{
		Unknown = 0,
		Floor = 1,
		Ceil = 2,
		Round = 3,
	};
}
