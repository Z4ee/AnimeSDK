#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamType_TypeDefinitionIndex = 10131;

	enum class ParamType : ::System::Int32
	{
		Unknown = 0,
		NoPara = 1,
		Equal = 2,
		Greater = 3,
		GreaterEqual = 4,
		Less = 5,
		LessEqual = 6,
		NotEqual = 7,
	};
}
