#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBatchItemType_TypeDefinitionIndex = 23908;

	enum class WaitBatchItemType : ::System::Int32
	{
		Condition = 0,
		Task = 1,
		CustomString = 2,
		Event = 3,
		Notify = 4,
		Unknown = 5,
	};
}
