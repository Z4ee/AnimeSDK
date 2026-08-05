#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LongPressTriggerStateType_TypeDefinitionIndex = 78211;

	enum class LongPressTriggerStateType : ::System::Int32
	{
		OnRealTrigger = 1,
		OnPointDown = 0,
	};
}
