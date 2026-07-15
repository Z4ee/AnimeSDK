#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BasePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BasePlayableBehaviour_1_TypeDefinitionIndex = 46741;

	template <typename T>
	class BasePlayableBehaviour_1 : public ::RPGTools::Timeline::PostProcessing::BasePlayableBehaviour
	{
	public:
		T _Comp; // 0x0
	};
}
