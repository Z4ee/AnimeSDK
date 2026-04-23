#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueDynamicContentParamType_TypeDefinitionIndex = 12423;

	enum class DialogueDynamicContentParamType : ::System::Int32
	{
		None = 0,
		Append = 1,
		ReplaceAll = 2,
		ReplaceOne = 3,
	};
}
