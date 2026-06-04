#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int LodTemplateSourceType_TypeDefinitionIndex = 68976;

	enum class LodTemplateSourceType : ::System::Int32
	{
		LodTemplate = 0,
		NormDistanceLodTemplate = 1,
	};
}
