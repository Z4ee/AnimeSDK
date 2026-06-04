#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickPinch_ActionTiggering_TypeDefinitionIndex = 37303;

	enum class QuickPinch_ActionTiggering : ::System::Int32
	{
		InProgress = 0,
		End = 1,
	};
}
