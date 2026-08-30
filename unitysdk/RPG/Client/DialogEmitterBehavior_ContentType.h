#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DialogEmitterBehavior_ContentType_TypeDefinitionIndex = 70852;

	enum class DialogEmitterBehavior_ContentType : ::System::Int32
	{
		StaticEmoji = 0,
		Text = 1,
	};
}
