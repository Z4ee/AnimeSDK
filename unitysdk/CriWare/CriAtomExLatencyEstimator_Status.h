#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExLatencyEstimator_Status_TypeDefinitionIndex = 37851;

	enum class CriAtomExLatencyEstimator_Status : ::System::Int32
	{
		Stop = 0,
		Processing = 1,
		Done = 2,
		Error = 3,
	};
}
