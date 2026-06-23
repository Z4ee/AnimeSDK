#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x174057A0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x17405D80)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17405D10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChatPlusDialogTrack_TypeDefinitionIndex = 79282;

	class ChatPlusDialogTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0xB0
		::System::Boolean disableMale; // 0xB8
		::System::Boolean disableFemale; // 0xB9
		::System::Int32 priorityOverlapIgnoreFrameCount; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}
	};
}
