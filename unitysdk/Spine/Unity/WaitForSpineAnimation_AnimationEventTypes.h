#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimation_AnimationEventTypes_TypeDefinitionIndex = 42303;

	enum class WaitForSpineAnimation_AnimationEventTypes : ::System::Int32
	{
		Start = 1,
		Interrupt = 2,
		End = 4,
		Dispose = 8,
		Complete = 16,
	};
}
