#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_SampleType_TypeDefinitionIndex = 68337;

	enum class UIProfiler_SampleType : ::System::Int32
	{
		Load = 0,
		SetupView = 1,
		SwitchTab = 2,
	};
}
