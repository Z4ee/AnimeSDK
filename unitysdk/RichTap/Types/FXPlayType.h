#pragma once
#include "unitysdk/unitysdk.h"

namespace RichTap::Types
{
	inline static constexpr unsigned int FXPlayType_TypeDefinitionIndex = 36473;

	enum class FXPlayType : ::System::Int32
	{
		FXPlaing = 0,
		FXPlayStop = 1,
		FXPlayCompleted = 2,
	};
}
