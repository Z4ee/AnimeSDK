#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphCheckCanIdleShowResult_TypeDefinitionIndex = 66347;

	enum class PhotoGraphCheckCanIdleShowResult : ::System::Int32
	{
		OK = 0,
		AnimatorParamDisable = 1,
		EntityVisibleDisable = 2,
		AnimatorNotInIdleDisable = 3,
		EntityDisableIdleShow = 4,
	};
}
