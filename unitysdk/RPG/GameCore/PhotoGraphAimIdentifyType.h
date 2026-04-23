#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimIdentifyType_TypeDefinitionIndex = 18077;

	enum class PhotoGraphAimIdentifyType : ::System::Int32
	{
		Auto = 0,
		Manual = 1,
		Steal = 2,
	};
}
