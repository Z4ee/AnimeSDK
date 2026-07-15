#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BookSeries_CollectStateEnum_TypeDefinitionIndex = 63433;

	enum class BookSeries_CollectStateEnum : ::System::Int32
	{
		NotStart = 1,
		Collecting = 2,
		CollectFinish = 3,
		Count = 4,
	};
}
