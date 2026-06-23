#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int LoopType_TypeDefinitionIndex = 27848;

	enum class LoopType : ::System::Int32
	{
		Restart = 0,
		Yoyo = 1,
		Incremental = 2,
	};
}
