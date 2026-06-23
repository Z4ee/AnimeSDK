#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_AccessoryRenderState_TypeDefinitionIndex = 49537;

	enum class NPCAccessoryManager_AccessoryRenderState : ::System::Byte
	{
		Simple = 0x2,
		Color = 0x1,
		Hidden = 0x0,
	};
}
