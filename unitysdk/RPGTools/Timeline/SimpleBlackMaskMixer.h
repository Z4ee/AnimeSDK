#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C3DF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SimpleBlackMaskMixer_TypeDefinitionIndex = 48769;

	class SimpleBlackMaskMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKMIXER__CTOR_OFFSET))(this);
		}
	};
}
