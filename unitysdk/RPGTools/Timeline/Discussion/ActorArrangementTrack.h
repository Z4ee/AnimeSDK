#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransform_ControlType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD000F40)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD000FF0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK_METHOD_5_94A5CA622461EDAD_OFFSET UNITYSDK_OFFSET(0xD0011C0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD001760)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD001840)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD001880)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int ActorArrangementTrack_TypeDefinitionIndex = 46052;

	class ActorArrangementTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPGTools::Timeline::OverrideTransform_ControlType>* Method_5_94A5CA622461EDAD()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPGTools::Timeline::OverrideTransform_ControlType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK_METHOD_5_94A5CA622461EDAD_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
