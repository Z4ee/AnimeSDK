#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingInstanceNotifyType_TypeDefinitionIndex = 73820;

	enum class StreamingInstanceNotifyType : ::System::Int32
	{
		ItemLoaded = 0,
		LodSwitch = 1,
		ItemUnloaded = 2,
		ItemAfterUnloaded = 3,
		GameObjectLoaded = 4,
		Size = 5,
	};
}
