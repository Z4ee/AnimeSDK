#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_GesturePriority_TypeDefinitionIndex = 38172;

	enum class EasyTouch_GesturePriority : ::System::Int32
	{
		Tap = 0,
		Slips = 1,
	};
}
