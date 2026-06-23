#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriTimeline/Mana/CriManaClipBase_MovieInfoStruct.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriTimeline::Mana { class CriManaBehaviour; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E4A8180)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GETSEEKFRAME_OFFSET UNITYSDK_OFFSET(0x1E4A8510)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1E4A8170)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1E4A8650)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_ISMOVIEINFOREADY_OFFSET UNITYSDK_OFFSET(0x1E4A8500)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_ISSAMEMOVIE_OFFSET UNITYSDK_OFFSET(0x1E4A8440)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_REPLACEMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1E4A8250)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_STRUCTTOMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1E4A8120)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A8680)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaClipBase_TypeDefinitionIndex = 34379;

	class CriManaClipBase : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Guid guid; // 0x18
		::System::Boolean m_loopWithinClip; // 0x28
		::System::Boolean m_useOnMemoryPlayback; // 0x29
		::System::Runtime::InteropServices::GCHandle gcHandle; // 0x2C
		::System::Double m_movieFrameRate; // 0x30
		::System::Double m_clipDuration; // 0x38
		::System::Single m_fadeinDuration; // 0x40
		::UnityEngine::AnimationCurve* m_fadeinCurve; // 0x48
		::System::Single m_fadeoutDuration; // 0x50
		::UnityEngine::AnimationCurve* m_fadeoutCurve; // 0x58
		::System::Boolean m_fadeAudio; // 0x60
		::UnityEngine::Timeline::TimelineClip* m_clip; // 0x68
		::CriWare::CriTimeline::Mana::CriManaBehaviour* m_manaBehaviour; // 0x70
		::System::Nullable_1<::CriWare::CriTimeline::Mana::CriManaClipBase_MovieInfoStruct> m_movieInfoStruct; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::CriWare::CriTimeline::Mana::CriManaClipBase_MovieInfoStruct> StructToMovieInfo(::CriWare::CriMana::MovieInfo* movieInfo)
		{
			return ((::System::Nullable_1<::CriWare::CriTimeline::Mana::CriManaClipBase_MovieInfoStruct>(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_STRUCTTOMOVIEINFO_OFFSET))(this, movieInfo);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}

		::System::Void ReplaceMovieInfo(::CriWare::CriMana::MovieInfo* movieInfo)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_REPLACEMOVIEINFO_OFFSET))(this, movieInfo);
		}

		::System::Boolean IsSameMovie(::CriWare::CriMana::MovieInfo* movieInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_ISSAMEMOVIE_OFFSET))(this, movieInfo);
		}

		::System::Boolean get_IsMovieInfoReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_ISMOVIEINFOREADY_OFFSET))(this);
		}

		::System::Int32 GetSeekFrame(::System::Double seekTimeSec, ::System::Boolean loop)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GETSEEKFRAME_OFFSET))(this, seekTimeSec, loop);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_GET_DURATION_OFFSET))(this);
		}
	};
}
