#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationClip; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONCLIPINFO_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x109F7F20)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONCLIPINFO_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x109F80D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONCLIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x109F8280)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimationClipInfo_TypeDefinitionIndex = 40489;

	class NPCAccessoryAnimationClipInfo : public ::System::Object
	{
	public:
		::System::Int32 animationID; // 0x10
		::UnityEngine::AnimationClip* _clip; // 0x18
		::Foundation::AssetPath clipAssetPath; // 0x20
		::Foundation::AssetRequestHandle clipHandle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONCLIPINFO__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_clip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONCLIPINFO_GET_CLIP_OFFSET))(this);
		}

		::System::Void UnloadAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONCLIPINFO_UNLOADASSET_OFFSET))(this);
		}
	};
}
