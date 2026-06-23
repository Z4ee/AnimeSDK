#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define NPCCROWD_ANIMATION_CLIPTEXTUREENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B5BB0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int ClipTextureEntry_TypeDefinitionIndex = 80866;

	class ClipTextureEntry : public ::System::Object
	{
	public:
		::System::Int32 clipIndex; // 0x10
		::Foundation::AssetPath assetPath; // 0x18
		::UnityEngine::Vector2Int size; // 0x28
		::System::Int32 refCount; // 0x30
		::System::Int32 atlasColumnIndex; // 0x34
		::System::Int32 atlasOffsetY; // 0x38
		::System::Single lastReleaseTime; // 0x3C
		::System::Boolean bIsLoadedToAtlas; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CLIPTEXTUREENTRY__CTOR_OFFSET))(this);
		}
	};
}
