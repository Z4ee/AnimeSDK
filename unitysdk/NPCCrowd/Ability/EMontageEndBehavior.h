#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int EMontageEndBehavior_TypeDefinitionIndex = 74940;

	enum class EMontageEndBehavior : ::System::Int32
	{
		StopAtEnd = 0,
		HoldLastSequenceClip = 2,
		Loop = 1,
	};
}
