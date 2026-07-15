#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcTrs_OverflowControlEnum_TypeDefinitionIndex = 34508;

	enum class BGCcTrs_OverflowControlEnum : ::System::Int32
	{
		Cycle = 0,
		PingPong = 1,
		Stop = 2,
	};
}
