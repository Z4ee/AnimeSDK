#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePacker_NodeType_TypeDefinitionIndex = 90676;

	enum class MB2_TexturePacker_NodeType : ::System::Int32
	{
		Container = 0,
		maxDim = 1,
		regular = 2,
	};
}
