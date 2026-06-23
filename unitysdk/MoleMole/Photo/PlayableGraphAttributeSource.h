#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAttributeSource_TypeDefinitionIndex = 82951;

	enum class PlayableGraphAttributeSource : ::System::Byte
	{
		Property = 0x1,
		Curve = 0x2,
		Variable = 0x0,
	};
}
