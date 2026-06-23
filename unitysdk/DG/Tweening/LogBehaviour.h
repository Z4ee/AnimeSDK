#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int LogBehaviour_TypeDefinitionIndex = 27931;

	enum class LogBehaviour : ::System::Int32
	{
		Default = 0,
		Verbose = 1,
		ErrorsOnly = 2,
	};
}
