#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEMixer_QTEState_TypeDefinitionIndex = 46490;

	enum class QTEMixer_QTEState : ::System::Int32
	{
		Idle = 0,
		Playing = 1,
		Success = 2,
		Fail = 3,
	};
}
