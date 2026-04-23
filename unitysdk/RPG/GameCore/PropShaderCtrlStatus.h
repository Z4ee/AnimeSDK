#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropShaderCtrlStatus_TypeDefinitionIndex = 52924;

	enum class PropShaderCtrlStatus : ::System::Int32
	{
		Empty = 0,
		TVAutoSwitch = 1,
		TVAnimSwitch = 2,
	};
}
