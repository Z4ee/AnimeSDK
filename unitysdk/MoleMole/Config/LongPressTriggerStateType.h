#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LongPressTriggerStateType_TypeDefinitionIndex = 54301;

	enum class LongPressTriggerStateType : ::System::Int32
	{
		OnPointDown = 0,
		OnRealTrigger = 1,
	};
}
