#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialBlockType_TypeDefinitionIndex = 62926;

	enum class TutorialBlockType : ::System::Int32
	{
		Auto = 0,
		Normal = 1,
		Battle = 2,
	};
}
