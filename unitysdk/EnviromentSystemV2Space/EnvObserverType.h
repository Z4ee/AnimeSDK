#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvObserverType_TypeDefinitionIndex = 47459;

	enum class EnvObserverType : ::System::Int32
	{
		Static = 0,
		CelestialBind = 1,
		Count = 2,
	};
}
