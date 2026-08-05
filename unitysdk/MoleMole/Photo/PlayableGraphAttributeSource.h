#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphAttributeSource_TypeDefinitionIndex = 91150;

	enum class PlayableGraphAttributeSource : ::System::Byte
	{
		Curve = 0x2,
		Property = 0x1,
		Variable = 0x0,
	};
}
