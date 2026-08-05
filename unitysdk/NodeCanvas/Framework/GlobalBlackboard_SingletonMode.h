#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GlobalBlackboard_SingletonMode_TypeDefinitionIndex = 31037;

	enum class GlobalBlackboard_SingletonMode : ::System::Int32
	{
		DestroyComponentOnly = 0,
		DestroyEntireGameObject = 1,
	};
}
