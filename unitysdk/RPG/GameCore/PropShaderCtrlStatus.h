#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropShaderCtrlStatus_TypeDefinitionIndex = 54852;

	enum class PropShaderCtrlStatus : ::System::Int32
	{
		Empty = 0,
		TVAutoSwitch = 1,
		TVAnimSwitch = 2,
	};
}
