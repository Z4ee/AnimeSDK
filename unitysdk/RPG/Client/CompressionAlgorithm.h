#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CompressionAlgorithm_TypeDefinitionIndex = 9453;

	enum class CompressionAlgorithm : ::System::Int32
	{
		eNone = 0,
		eDEFLATE = 1,
		eZLIB = 2,
		eLZMA = 3,
		eLZ4 = 4,
	};
}
