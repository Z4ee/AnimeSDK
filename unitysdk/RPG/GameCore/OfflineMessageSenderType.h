#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfflineMessageSenderType_TypeDefinitionIndex = 11367;

	enum class OfflineMessageSenderType : ::System::Int32
	{
		System = 1,
		Self = 2,
		Other = 3,
	};
}
