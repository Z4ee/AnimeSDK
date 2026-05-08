#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_TargetPath_ExtraType_TypeDefinitionIndex = 56128;

	enum class ConfigNewbie_TargetPath_ExtraType : ::System::Int32
	{
		SpecifyPrefab = 1,
		DynamicParam = 2,
		ScrollView = 3,
		None = 0,
	};
}
