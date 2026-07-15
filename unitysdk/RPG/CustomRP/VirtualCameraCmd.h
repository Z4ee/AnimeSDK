#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VirtualCameraCmd_TypeDefinitionIndex = 36141;

	enum class VirtualCameraCmd : ::System::Int32
	{
		VCCmdBeforeTransparent = 0,
		VCCmdAfterTransparent = 1,
		VCCmdPostTransparent = 2,
		VCCmdCount = 3,
	};
}
