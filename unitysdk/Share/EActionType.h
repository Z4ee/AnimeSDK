#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionType_TypeDefinitionIndex = 16570;

	enum class EActionType : ::System::Int16
	{
		Client = 0,
		Server = 1,
		ClientServer = 2,
	};
}
