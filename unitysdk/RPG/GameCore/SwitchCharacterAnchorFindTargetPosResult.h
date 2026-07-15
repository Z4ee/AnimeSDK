#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCharacterAnchorFindTargetPosResult_TypeDefinitionIndex = 56114;

	enum class SwitchCharacterAnchorFindTargetPosResult : ::System::Int32
	{
		NoGameWorld = 0,
		AnchorNotFound = 1,
		TransformNotFound = 2,
		AttachPointNotFound = 3,
		Success = 4,
	};
}
