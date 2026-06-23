#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int PathType_TypeDefinitionIndex = 27844;

	enum class PathType : ::System::Int32
	{
		Linear = 0,
		CatmullRom = 1,
	};
}
