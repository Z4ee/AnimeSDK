#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1E5A6770)
#define MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1E5A66B0)
#define MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1E5A6800)
#define MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E5A6720)
#define MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A6890)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixedTimeStepBehavior_TypeDefinitionIndex = 32156;

	class FixedTimeStepBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single fixedTimeStep; // 0x10
		::System::Single maxAllowedTimeStep; // 0x14
		::System::Int32 captureFramerate; // 0x18
		::System::Single initFixedTimeStep; // 0x1C
		::System::Single initMaxAllowedTimeStep; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXEDTIMESTEPBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
