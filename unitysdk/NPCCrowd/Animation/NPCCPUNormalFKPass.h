#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUAnimationPassBase.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace NPCCrowd::Animation { class AnimationPlayable; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }

#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_ADDLAYER_OFFSET UNITYSDK_OFFSET(0xFFCA140)
#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_DISCONNECT_OFFSET UNITYSDK_OFFSET(0xFFCA100)
#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_GETLAYERMAINCLIPTIME_OFFSET UNITYSDK_OFFSET(0xFFCA3D0)
#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0xFFCA1B0)
#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_SETLAYERMAINCLIPTIME_OFFSET UNITYSDK_OFFSET(0xFFCA360)
#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_SETLAYERMASK_OFFSET UNITYSDK_OFFSET(0xFFCA2B0)
#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_SETLAYERSPEED_OFFSET UNITYSDK_OFFSET(0xFFCA240)
#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC9FB0)
#define NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS___BASE_DISCONNECT_OFFSET UNITYSDK_OFFSET(0xFFCA430)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUNormalFKPass_TypeDefinitionIndex = 46536;

	class NPCCPUNormalFKPass : public ::NPCCrowd::Animation::NPCCPUAnimationPassBase
	{
	public:
		// static const ::System::Int32 LAYER_CNT = 0xA; // 0x0
		::NPCCrowd::Animation::AnimationPlayable* innerPlayable; // 0x38

		::System::Void _ctor(::UnityEngine::Playables::PlayableGraph graph)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS__CTOR_OFFSET))(this, graph);
		}

		::System::Boolean DisConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_DISCONNECT_OFFSET))(this);
		}

		::System::Void AddLayer(::System::Int32 index, ::UnityEngine::AvatarMask* mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_ADDLAYER_OFFSET))(this, index, mask);
		}

		::System::Void PlayClip(::UnityEngine::AnimationClip* clip, ::System::Int32 layer, ::System::Single fadeTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_PLAYCLIP_OFFSET))(this, clip, layer, fadeTime);
		}

		::System::Void SetLayerSpeed(::System::Int32 layer, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_SETLAYERSPEED_OFFSET))(this, layer, speed);
		}

		::System::Void SetLayerMask(::System::Int32 layer, ::UnityEngine::AvatarMask* mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_SETLAYERMASK_OFFSET))(this, layer, mask);
		}

		::System::Void SetLayerMainClipTime(::System::Int32 layer, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_SETLAYERMAINCLIPTIME_OFFSET))(this, layer, time);
		}

		::System::Single GetLayerMainClipTime(::System::Int32 layer)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS_GETLAYERMAINCLIPTIME_OFFSET))(this, layer);
		}

		::System::Boolean __base_DisConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUNORMALFKPASS___BASE_DISCONNECT_OFFSET))(this);
		}
	};
}
