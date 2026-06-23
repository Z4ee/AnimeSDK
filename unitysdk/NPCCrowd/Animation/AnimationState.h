#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class AnimationClip; }

#define NPCCROWD_ANIMATION_ANIMATIONSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE8AEC90)
#define NPCCROWD_ANIMATION_ANIMATIONSTATE_GETTIME_OFFSET UNITYSDK_OFFSET(0xE8AEBF0)
#define NPCCROWD_ANIMATION_ANIMATIONSTATE_SETTARGETWEIGHT_OFFSET UNITYSDK_OFFSET(0xE8AE9C0)
#define NPCCROWD_ANIMATION_ANIMATIONSTATE_SETTIME_OFFSET UNITYSDK_OFFSET(0xE8AEB30)
#define NPCCROWD_ANIMATION_ANIMATIONSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE8AEA60)
#define NPCCROWD_ANIMATION_ANIMATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE8AE980)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 45100;

	class AnimationState : public ::System::Object
	{
	public:
		::System::Single weight; // 0x10
		::System::Single fadeSpeed; // 0x14
		::System::Single targetWeight; // 0x18
		::UnityEngine::Playables::PlayableGraph graph; // 0x20
		::UnityEngine::Playables::Playable playable; // 0x30

		::System::Void _ctor(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSTATE__CTOR_OFFSET))(this, graph, clip);
		}

		::System::Void SetTargetWeight(::System::Single weight, ::System::Single fadeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSTATE_SETTARGETWEIGHT_OFFSET))(this, weight, fadeTime);
		}

		::System::Boolean Update(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSTATE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetTime(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSTATE_SETTIME_OFFSET))(this, time);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSTATE_GETTIME_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSTATE_DISPOSE_OFFSET))(this);
		}
	};
}
