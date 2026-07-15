#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSelectEventType_TypeDefinitionIndex = 17757;

	enum class ElfSelectEventType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		RecommendTag = 2,
		RecommendMaterial = 3,
		RecommendPrice = 4,
	};
}
