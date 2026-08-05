#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationState; }

#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x129C27A0)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_GETCURRENTLYPLAYINGANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x129C2F00)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_GOTOFRAMEANDPAUSE_OFFSET UNITYSDK_OFFSET(0x129C31A0)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x129C27F0)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_METHOD_5_32149D2199863ABF_OFFSET UNITYSDK_OFFSET(0x129C2C20)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0x129C3100)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYBACKWARD_OFFSET UNITYSDK_OFFSET(0x129C2CB0)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYFORWARDFROMFRAME_OFFSET UNITYSDK_OFFSET(0x129C29D0)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x129C2E20)
#define MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x129C3350)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLegacyAnimationPlaybackPlugin_TypeDefinitionIndex = 83364;

	class MonoLegacyAnimationPlaybackPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* bindAnimation; // 0x18
		::UnityEngine::AnimationClip* targetClip; // 0x20
		::UnityEngine::AnimationState* Field_5_0; // 0x28
		::System::Boolean Field_5_7; // 0x30
		::System::Single Field_5_6; // 0x34
		::System::Boolean Field_5_5; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_AWAKE_OFFSET))(this);
		}

		::System::Void PlayForwardFromFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYFORWARDFROMFRAME_OFFSET))(this, a1);
		}

		::System::Void PlayBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYBACKWARD_OFFSET))(this);
		}

		::System::Void PlayForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PLAYFORWARD_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_PAUSE_OFFSET))(this);
		}

		::System::Void GoToFrameAndPause(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_GOTOFRAMEANDPAUSE_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationState* GetCurrentlyPlayingAnimationState()
		{
			return ((::UnityEngine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_GETCURRENTLYPLAYINGANIMATIONSTATE_OFFSET))(this);
		}

		::System::Single Method_5_32149D2199863ABF(::System::Int32 a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_METHOD_5_32149D2199863ABF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEGACYANIMATIONPLAYBACKPLUGIN_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}
	};
}
