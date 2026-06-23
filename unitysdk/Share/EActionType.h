#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionType_TypeDefinitionIndex = 9809;

	enum class EActionType : ::System::Int16
	{
		ClientServer = 2,
		Server = 1,
		Client = 0,
	};
}
