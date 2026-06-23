#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_ThirdPartyObjectType_TypeDefinitionIndex = 33226;

	enum class BehaviorManager_ThirdPartyObjectType : ::System::Int32
	{
		PlayMaker = 0,
		uScript = 1,
		DialogueSystem = 2,
		uSequencer = 3,
	};
}
