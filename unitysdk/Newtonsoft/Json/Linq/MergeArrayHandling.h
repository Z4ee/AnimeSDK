#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int MergeArrayHandling_TypeDefinitionIndex = 8504;

	enum class MergeArrayHandling : ::System::Int32
	{
		Concat = 0,
		Union = 1,
		Replace = 2,
		Merge = 3,
	};
}
