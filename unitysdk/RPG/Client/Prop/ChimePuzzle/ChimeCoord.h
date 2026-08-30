#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Prop::ChimePuzzle
{
	inline static constexpr unsigned int ChimeCoord_TypeDefinitionIndex = 78511;

	struct alignas(4) ChimeCoord
	{
		::System::Int32 row; // 0x10
		::System::Int32 column; // 0x14
	};
}
