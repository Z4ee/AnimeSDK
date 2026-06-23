#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int RotateMode_TypeDefinitionIndex = 27845;

	enum class RotateMode : ::System::Int32
	{
		Fast = 0,
		FastBeyond360 = 1,
		WorldAxisAdd = 2,
		LocalAxisAdd = 3,
	};
}
