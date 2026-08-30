#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1D137100)
#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_METHOD_5_DB6F9C3D439B5DF2_OFFSET UNITYSDK_OFFSET(0x1D1372B0)
#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1D137990)
#define RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D137A00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraTemplateTrack_TypeDefinitionIndex = 48374;

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

		::System::Collections::Generic::List_1<::System::String*>* Method_5_DB6F9C3D439B5DF2()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERATEMPLATETRACK_METHOD_5_DB6F9C3D439B5DF2_OFFSET))(this);
		}
	};
}
