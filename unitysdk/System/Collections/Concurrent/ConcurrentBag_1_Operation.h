#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentBag_1_Operation_TypeDefinitionIndex = 4001;

	enum class ConcurrentBag_1_Operation : ::System::Int32
	{
		None = 0,
		Add = 1,
		Take = 2,
	};
}
