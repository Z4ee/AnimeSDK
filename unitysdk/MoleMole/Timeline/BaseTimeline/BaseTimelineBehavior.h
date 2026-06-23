#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BehaviourState.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_BASEONPAUSE_OFFSET UNITYSDK_OFFSET(0x1E2D8F30)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_BASEONPLAY_OFFSET UNITYSDK_OFFSET(0x1E2D8F10)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E2D8F80)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1E2D8F60)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x1E2D8F50)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E2D8F70)
#define MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D8F90)

namespace MoleMole::Timeline::BaseTimeline
{
	inline static constexpr unsigned int BaseTimelineBehavior_TypeDefinitionIndex = 32237;

	class BaseTimelineBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::BaseTimeline::BehaviourState state; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void BaseOnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_BASEONPLAY_OFFSET))(this);
		}

		::System::Void BaseOnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_BASEONPAUSE_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable rootPlayable, ::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData, ::System::Single weight, ::System::Int32 mixerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, rootPlayable, playable, info, playerData, weight, mixerIndex);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BASETIMELINE_BASETIMELINEBEHAVIOR_ONDESTROY_OFFSET))(this);
		}
	};
}
