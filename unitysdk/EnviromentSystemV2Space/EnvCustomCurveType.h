#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvCustomCurveType_TypeDefinitionIndex = 47540;

	enum class EnvCustomCurveType : ::System::Int32
	{
		Bool = 0,
		Int = 1,
		Text = 2,
		Float = 3,
		Vector = 4,
		Prefab = 5,
		StructureData = 6,
		ScriptableObject = 7,
	};
}
