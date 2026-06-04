#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xCFE83C0)
#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_METHOD_5_869969E7E2EDA429_OFFSET UNITYSDK_OFFSET(0xCFE85A0)
#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xCFE8A90)
#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE8B00)
#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xCFE8BE0)
#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xCFE8C80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraTemplateTrack_TypeDefinitionIndex = 45216;

	class CRPCameraTemplateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_5_869969E7E2EDA429()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_METHOD_5_869969E7E2EDA429_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
