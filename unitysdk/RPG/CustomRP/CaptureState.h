#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureState_TypeDefinitionIndex = 29236;

	enum class CaptureState : ::System::Int32
	{
		None = 0,
		Start = 1,
		Setup = 2,
		CopyRT = 3,
		RequestRT = 4,
		WaitRequest = 5,
		WaitRequest1 = 6,
		WaitRequest2 = 7,
	};
}
