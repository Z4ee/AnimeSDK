#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventWriteAIParamEntry_ParaType_TypeDefinitionIndex = 63332;

	enum class AnimatorEventWriteAIParamEntry_ParaType : ::System::Int32
	{
		String = 2,
		Int = 1,
		Bool = 3,
		Float = 0,
	};
}
