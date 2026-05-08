#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneType_TypeDefinitionIndex = 11621;

	enum class ESceneType : ::System::Int16
	{
		Hall = 1,
		Hollow = 2,
		Fight = 3,
		MultiFight = 5,
		Fresh = 4,
	};
}
