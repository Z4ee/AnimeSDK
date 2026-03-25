#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ErrorType_TypeDefinitionIndex = 22602;

	enum class ErrorType : ::System::Int32
	{
		Unknown = 0,
		IncompleteMessage = 1,
		DuplicateObjectKeys = 2,
		InvalidOrUnexpectedCharacter = 3,
	};
}
