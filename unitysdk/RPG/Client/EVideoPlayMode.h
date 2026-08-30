#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EVideoPlayMode_TypeDefinitionIndex = 73119;

	enum class EVideoPlayMode : ::System::Int32
	{
		normal = 0,
		record = 1,
	};
}
