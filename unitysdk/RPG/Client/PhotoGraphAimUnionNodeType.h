#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimUnionNodeType_TypeDefinitionIndex = 66302;

	enum class PhotoGraphAimUnionNodeType : ::System::Int32
	{
		LocalPlayer = 0,
		TargetEvaluator = 1,
		Npc = 2,
		Prop = 3,
		Tag = 4,
		GiantTarget = 5,
	};
}
