#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackAnchorDirType_TypeDefinitionIndex = 69161;

	enum class AlleyPackAnchorDirType : ::System::Int32
	{
		Head = 0,
		Tail = 1,
	};
}
