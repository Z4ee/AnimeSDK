#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::OverrideAnimation { class AnimationClipInfo_LoadAssetSyncAction; }
namespace MoleMole::Timeline::OverrideAnimation { class AnimationClipInfo_UnloadAction; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1FB20200)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNC_OFFSET UNITYSDK_OFFSET(0x1FB20210)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1FB20390)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB203C0)

namespace MoleMole::Timeline::OverrideAnimation
{
	inline static constexpr unsigned int AnimationClipInfo_TypeDefinitionIndex = 32861;

	class AnimationClipInfo : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::OverrideAnimation::AnimationClipInfo_LoadAssetSyncAction** StaticGet_LoadAssetSyncD()
		{
			return (::MoleMole::Timeline::OverrideAnimation::AnimationClipInfo_LoadAssetSyncAction**)Il2CppClass::FromTypeDefinitionIndex(AnimationClipInfo_TypeDefinitionIndex)->GetStaticField(0x28490);
		}
		static ::MoleMole::Timeline::OverrideAnimation::AnimationClipInfo_UnloadAction** StaticGet_UnloadD()
		{
			return (::MoleMole::Timeline::OverrideAnimation::AnimationClipInfo_UnloadAction**)Il2CppClass::FromTypeDefinitionIndex(AnimationClipInfo_TypeDefinitionIndex)->GetStaticField(0x28498);
		}
		::System::String* animationClipPath; // 0x10
		::UnityEngine::AnimationClip* _assetRef; // 0x18

		::System::Void _ctor(::System::String* aniClipPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO__CTOR_OFFSET))(this, aniClipPath);
		}

		::UnityEngine::AnimationClip* get_Asset()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_GET_ASSET_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* LoadAssetSync()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_LOADASSETSYNC_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_ANIMATIONCLIPINFO_UNLOAD_OFFSET))(this);
		}
	};
}
