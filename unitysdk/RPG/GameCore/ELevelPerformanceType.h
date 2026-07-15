#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ELevelPerformanceType_TypeDefinitionIndex = 10132;

	enum class ELevelPerformanceType : ::System::Int32
	{
		Unknown = 0,
		A = 1,
		C = 2,
		D = 3,
		E = 4,
		PlayVideo = 10,
	};
}
