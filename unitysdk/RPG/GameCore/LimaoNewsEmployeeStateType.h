#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsEmployeeStateType_TypeDefinitionIndex = 13867;

	enum class LimaoNewsEmployeeStateType : ::System::Int32
	{
		Locked = 0,
		OnDuty = 1,
		OnLeave = 2,
		OnField = 3,
	};
}
