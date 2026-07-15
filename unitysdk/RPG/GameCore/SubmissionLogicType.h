#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubmissionLogicType_TypeDefinitionIndex = 18267;

	enum class SubmissionLogicType : ::System::Int32
	{
		Normal = 0,
		Optional = 1,
	};
}
