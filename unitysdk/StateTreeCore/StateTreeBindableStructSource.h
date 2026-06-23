#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeBindableStructSource_TypeDefinitionIndex = 30995;

	enum class StateTreeBindableStructSource : ::System::Byte
	{
		Context = 0x0,
		Parameter = 0x1,
		Evaluator = 0x2,
		GlobalTask = 0x3,
		State = 0x4,
		Task = 0x5,
		Condition = 0x6,
	};
}
