#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoMappingAttachPointType_TypeDefinitionIndex = 23842;

	enum class AutoMappingAttachPointType : ::System::Int32
	{
		ModifierPhase = 0,
		LookAtAvatarOnReadyCamera = 1,
		CharacterFormationRule = 2,
	};
}
