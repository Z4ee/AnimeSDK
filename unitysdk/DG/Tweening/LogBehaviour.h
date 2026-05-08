#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int LogBehaviour_TypeDefinitionIndex = 25440;

	enum class LogBehaviour : ::System::Int32
	{
		Default = 0,
		Verbose = 1,
		ErrorsOnly = 2,
	};
}
