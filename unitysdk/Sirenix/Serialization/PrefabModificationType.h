#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int PrefabModificationType_TypeDefinitionIndex = 7523;

	enum class PrefabModificationType : ::System::Int32
	{
		Value = 0,
		ListLength = 1,
		Dictionary = 2,
	};
}
