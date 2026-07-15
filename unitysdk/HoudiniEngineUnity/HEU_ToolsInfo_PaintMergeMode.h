#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ToolsInfo_PaintMergeMode_TypeDefinitionIndex = 38611;

	enum class HEU_ToolsInfo_PaintMergeMode : ::System::Int32
	{
		REPLACE = 0,
		ADD = 1,
		SUBTRACT = 2,
		MULTIPLY = 3,
	};
}
