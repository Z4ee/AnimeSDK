#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OICubeType_TypeDefinitionIndex = 64162;

	enum class OICubeType : ::System::UInt32
	{
		MirrorFront = 0x1,
		MirrorBack = 0x2,
		Reflection = 0x4,
	};
}
