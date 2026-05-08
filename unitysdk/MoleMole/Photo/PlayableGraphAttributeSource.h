#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAttributeSource_TypeDefinitionIndex = 41545;

	enum class PlayableGraphAttributeSource : ::System::Byte
	{
		Property = 0x1,
		Variable = 0x0,
		Curve = 0x2,
	};
}
