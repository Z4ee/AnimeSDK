#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }

#define RPG_CLIENT_EMOPLAYABLEGRAPHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA282C80)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoPlayableGraphConfig_TypeDefinitionIndex = 65558;

	class EmoPlayableGraphConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::AnimationClip* BrowDefaultClip; // 0x18
		::UnityEngine::AnimationClip* EyeDefaultClip; // 0x20
		::UnityEngine::AnimationClip* MouthDefaultClip; // 0x28
		::UnityEngine::AnimationClip* EyeCloseClip; // 0x30
		::UnityEngine::AnimationClip* BrowPermanentClip; // 0x38
		::UnityEngine::AnimationClip* EyePermanentClip; // 0x40
		::UnityEngine::AnimationClip* MouthPermanentClip; // 0x48
		::UnityEngine::AvatarMask* LeftEyeMask; // 0x50
		::UnityEngine::AvatarMask* RightEyeMask; // 0x58
		::UnityEngine::AvatarMask* EyeMask; // 0x60
		::UnityEngine::AvatarMask* LeftBrowMask; // 0x68
		::UnityEngine::AvatarMask* RightBrowMask; // 0x70
		::UnityEngine::AvatarMask* MouthMask; // 0x78
		::Il2CppArray<::UnityEngine::AnimationClip*>* EyeClips; // 0x80
		::Il2CppArray<::UnityEngine::AnimationClip*>* BrowClips; // 0x88
		::Il2CppArray<::UnityEngine::AnimationClip*>* MouthClips; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOPLAYABLEGRAPHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
