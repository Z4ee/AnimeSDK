#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace NPCCrowd::Animation { class AnimationLayer; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }

#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_ADDLAYER_OFFSET UNITYSDK_OFFSET(0x10644240)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_GETLAYERMAINCLIPTIME_OFFSET UNITYSDK_OFFSET(0x10644940)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_GETLAYER_OFFSET UNITYSDK_OFFSET(0x106445D0)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x10643E30)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x106440A0)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x106444F0)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x10644150)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_SETLAYERMAINCLIPTIME_OFFSET UNITYSDK_OFFSET(0x10644860)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_SETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x106447E0)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_SETLAYERSPEED_OFFSET UNITYSDK_OFFSET(0x10644650)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10644A40)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE___BASE_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x10644A80)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE___BASE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10644A90)
#define NPCCROWD_ANIMATION_ANIMATIONPLAYABLE___BASE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x10644AA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationPlayable_TypeDefinitionIndex = 67138;

	class AnimationPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationLayer*>* layers; // 0x10
		::UnityEngine::Playables::Playable playable; // 0x18
		::UnityEngine::Playables::PlayableGraph graph; // 0x28
		::UnityEngine::Animations::AnimationLayerMixerPlayable layerMixer; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_ONPLAYABLECREATE_OFFSET))(this, playable);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_PREPAREFRAME_OFFSET))(this, playable, info);
		}

		::System::Void AddLayer(::System::Int32 index, ::UnityEngine::AvatarMask* mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_ADDLAYER_OFFSET))(this, index, mask);
		}

		::System::Void PlayClip(::UnityEngine::AnimationClip* clip, ::System::Int32 layer, ::System::Single fadeTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_PLAYCLIP_OFFSET))(this, clip, layer, fadeTime);
		}

		::System::Void SetLayerSpeed(::System::Int32 layer, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_SETLAYERSPEED_OFFSET))(this, layer, speed);
		}

		::System::Void SetLayerMask(::System::Int32 layer, ::UnityEngine::AvatarMask* mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_SETLAYERMASK_OFFSET))(this, layer, mask);
		}

		::System::Void SetLayerMainClipTime(::System::Int32 layer, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_SETLAYERMAINCLIPTIME_OFFSET))(this, layer, time);
		}

		::System::Single GetLayerMainClipTime(::System::Int32 layer)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_GETLAYERMAINCLIPTIME_OFFSET))(this, layer);
		}

		::NPCCrowd::Animation::AnimationLayer* GetLayer(::System::Int32 layer)
		{
			return ((::NPCCrowd::Animation::AnimationLayer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE_GETLAYER_OFFSET))(this, layer);
		}

		::System::Void __base_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE___BASE_ONPLAYABLECREATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE___BASE_ONPLAYABLEDESTROY_OFFSET))(this, P0);
		}

		::System::Void __base_PrepareFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONPLAYABLE___BASE_PREPAREFRAME_OFFSET))(this, P0, P1);
		}
	};
}
