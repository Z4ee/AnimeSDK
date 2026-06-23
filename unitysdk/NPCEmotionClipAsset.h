#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define NPCEMOTIONCLIPASSET_GET_BLINKCLIP_OFFSET UNITYSDK_OFFSET(0xFFD7020)
#define NPCEMOTIONCLIPASSET_GET_FACIALCLIP_OFFSET UNITYSDK_OFFSET(0xFFD6E70)
#define NPCEMOTIONCLIPASSET_UNLOADASSETS_OFFSET UNITYSDK_OFFSET(0xFFD71D0)
#define NPCEMOTIONCLIPASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD74D0)

inline static constexpr unsigned int NPCEmotionClipAsset_TypeDefinitionIndex = 67095;

class NPCEmotionClipAsset : public ::System::Object
{
public:
	::System::String* facialKey; // 0x10
	::Foundation::AssetPath facialClipPath; // 0x18
	::UnityEngine::AnimationClip* _facialClip; // 0x28
	::Foundation::AssetRequestHandle _facialClipHandle; // 0x30
	::System::Int32 facialAnimationID; // 0x50
	::Foundation::AssetPath blinkClipPath; // 0x58
	::UnityEngine::AnimationClip* _blinkClip; // 0x68
	::Foundation::AssetRequestHandle _blinkClipHandle; // 0x70
	::System::Int32 blinkAnimationID; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONCLIPASSET__CTOR_OFFSET))(this);
	}

	::UnityEngine::AnimationClip* get_FacialClip()
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONCLIPASSET_GET_FACIALCLIP_OFFSET))(this);
	}

	::UnityEngine::AnimationClip* get_BlinkClip()
	{
		return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONCLIPASSET_GET_BLINKCLIP_OFFSET))(this);
	}

	::System::Void UnloadAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONCLIPASSET_UNLOADASSETS_OFFSET))(this);
	}
};
