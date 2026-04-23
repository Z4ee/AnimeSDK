#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager_AreaFlag_TypeDefinitionIndex = 63692;

	enum class UIDraggableManager_AreaFlag : ::System::Int32
	{
		Draggable = 1,
		Hoverable = 2,
		Both = 3,
	};
}
