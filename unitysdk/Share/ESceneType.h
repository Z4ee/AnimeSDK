#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneType_TypeDefinitionIndex = 11425;

	enum class ESceneType : ::System::Int16
	{
		Hollow = 2,
		Fight = 3,
		Fresh = 4,
		MultiFight = 5,
		Hall = 1,
	};
}
