#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_MODULE_SLOT_MIXEDSLOTANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x161FC8D0)

namespace MoleMole::Module::Slot
{
	inline static constexpr unsigned int MixedSlotAnimation_TypeDefinitionIndex = 83810;

	class MixedSlotAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* Animation; // 0x18
		::UnityEngine::AnimationClip* DefaultFadeIn; // 0x20
		::UnityEngine::AnimationClip* DefaultFadeOut; // 0x28
		::UnityEngine::AnimationClip* ChatFadeIn; // 0x30
		::UnityEngine::AnimationClip* ChatFadeOut; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_SLOT_MIXEDSLOTANIMATION__CTOR_OFFSET))(this);
		}
	};
}
