#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core::Enums
{
	inline static constexpr unsigned int FilterType_TypeDefinitionIndex = 25505;

	enum class FilterType : ::System::Int32
	{
		All = 0,
		TargetOrId = 1,
		TargetAndId = 2,
		AllExceptTargetsOrIds = 3,
		DOGetter = 4,
	};
}
