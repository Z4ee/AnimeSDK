#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoGroupStreamingTemplateType_TypeDefinitionIndex = 16637;

	enum class HoyoGroupStreamingTemplateType : ::System::Int32
	{
		None = 0,
		Standard = 1,
		Far = 2,
		UltraFar = 3,
	};
}
