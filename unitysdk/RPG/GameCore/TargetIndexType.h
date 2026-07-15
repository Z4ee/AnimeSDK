#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetIndexType_TypeDefinitionIndex = 23926;

	enum class TargetIndexType : ::System::Int32
	{
		First = 0,
		Last = 1,
		Mid = 2,
		Index = 3,
		IndexStrict = 4,
	};
}
