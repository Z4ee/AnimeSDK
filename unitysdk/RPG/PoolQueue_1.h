#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Queue_1.h"

namespace RPG
{
	inline static constexpr unsigned int PoolQueue_1_TypeDefinitionIndex = 5638;

	template <typename T>
	class PoolQueue_1 : public ::System::Collections::Generic::Queue_1<T>
	{
	public:
	};
}
