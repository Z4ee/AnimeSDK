#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Animation/ENPCAnimationAvatarMaskType.h"
#include "unitysdk/NPCCrowd/Animation/ENPCCPUAnimationClipAvatarMaskType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONCLIPINFO_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD0DA460)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONCLIPINFO_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xD0DA600)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONCLIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD0DA7B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationClipInfo_TypeDefinitionIndex = 78492;

	class NPCCPUAnimationClipInfo : public ::System::Object
	{
	public:
		::System::Int32 animationID; // 0x10
		::NPCCrowd::Animation::ENPCCPUAnimationClipAvatarMaskType clipType; // 0x14
		::NPCCrowd::Animation::ENPCAnimationAvatarMaskType maskType; // 0x18
		::UnityEngine::AnimationClip* _clip; // 0x20
		::Foundation::AssetRequestHandle clipHandle; // 0x28
		::System::String* clipPath; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* logicTags; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* blendShapePaths; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONCLIPINFO__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_clip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONCLIPINFO_GET_CLIP_OFFSET))(this);
		}

		::System::Void UnLoadedAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONCLIPINFO_UNLOADEDASSETS_OFFSET))(this);
		}
	};
}
