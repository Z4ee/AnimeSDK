#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchTrigger_ETTType_TypeDefinitionIndex = 38090;

	enum class EasyTouchTrigger_ETTType : ::System::Int32
	{
		Object3D = 0,
		UI = 1,
	};
}
