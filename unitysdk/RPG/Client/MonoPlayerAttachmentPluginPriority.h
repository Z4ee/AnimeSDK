#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPlayerAttachmentPluginPriority_TypeDefinitionIndex = 57464;

	enum class MonoPlayerAttachmentPluginPriority : ::System::Int32
	{
		Default = 0,
		LightFade = 1,
	};
}
