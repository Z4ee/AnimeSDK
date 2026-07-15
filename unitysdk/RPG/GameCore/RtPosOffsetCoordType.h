#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtPosOffsetCoordType_TypeDefinitionIndex = 23939;

	enum class RtPosOffsetCoordType : ::System::Int32
	{
		Self = 0,
		ParamTarget = 1,
		World = 2,
		SelfToParamTarget = 3,
	};
}
