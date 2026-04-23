#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionStatus_TypeDefinitionIndex = 12526;

	enum class ExpeditionStatus : ::System::Int32
	{
		Unknow = 0,
		NotInProgress = 1,
		InProgress = 2,
	};
}
