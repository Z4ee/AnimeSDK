#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD7290)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorEnableControlBehaviour_TypeDefinitionIndex = 45488;

	class AnimatorEnableControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORENABLECONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
