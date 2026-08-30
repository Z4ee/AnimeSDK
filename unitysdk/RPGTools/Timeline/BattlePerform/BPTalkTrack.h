#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1D12FC90)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_METHOD_5_1F6388322EF65523_OFFSET UNITYSDK_OFFSET(0x1D12FE70)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1301D0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPTalkTrack_TypeDefinitionIndex = 49278;

	class BPTalkTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* Method_5_1F6388322EF65523()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKTRACK_METHOD_5_1F6388322EF65523_OFFSET))(this);
		}
	};
}
