#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventWriteAIParamEntry_ParaType_TypeDefinitionIndex = 42337;

	enum class AnimatorEventWriteAIParamEntry_ParaType : ::System::Int32
	{
		Int = 1,
		String = 2,
		Bool = 3,
		Float = 0,
	};
}
