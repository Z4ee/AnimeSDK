#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace NPCCrowd::Animation { class AnimationState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }

#define NPCCROWD_ANIMATION_ANIMATIONLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6811A0)
#define NPCCROWD_ANIMATION_ANIMATIONLAYER_GETLAYERMAINCLIPTIME_OFFSET UNITYSDK_OFFSET(0xA680FA0)
#define NPCCROWD_ANIMATION_ANIMATIONLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0xA680580)
#define NPCCROWD_ANIMATION_ANIMATIONLAYER_SETMAINCLIPTIME_OFFSET UNITYSDK_OFFSET(0xA680E50)
#define NPCCROWD_ANIMATION_ANIMATIONLAYER_SETSPEED_OFFSET UNITYSDK_OFFSET(0xA6810E0)
#define NPCCROWD_ANIMATION_ANIMATIONLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA680AD0)
#define NPCCROWD_ANIMATION_ANIMATIONLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xA680480)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationLayer_TypeDefinitionIndex = 39994;

	class AnimationLayer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::NPCCrowd::Animation::AnimationState*>* clips; // 0x10
		::UnityEngine::AnimationClip* curClip; // 0x18
		::UnityEngine::Playables::PlayableGraph graph; // 0x20
		::UnityEngine::Playables::Playable playable; // 0x30

		::System::Void _ctor(::UnityEngine::Playables::PlayableGraph graph)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONLAYER__CTOR_OFFSET))(this, graph);
		}

		::System::Void Play(::UnityEngine::AnimationClip* clip, ::System::Single fadeTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONLAYER_PLAY_OFFSET))(this, clip, fadeTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONLAYER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetMainClipTime(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONLAYER_SETMAINCLIPTIME_OFFSET))(this, time);
		}

		::System::Single GetLayerMainClipTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONLAYER_GETLAYERMAINCLIPTIME_OFFSET))(this);
		}

		::System::Void SetSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONLAYER_SETSPEED_OFFSET))(this, speed);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONLAYER_DISPOSE_OFFSET))(this);
		}
	};
}
