#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_AccessoryRenderState_TypeDefinitionIndex = 82938;

	enum class NPCAccessoryManager_AccessoryRenderState : ::System::Byte
	{
		Simple = 0x2,
		Hidden = 0x0,
		Color = 0x1,
	};
}
