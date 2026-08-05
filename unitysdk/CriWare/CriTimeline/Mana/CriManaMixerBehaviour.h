#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriTimeline/Mana/CriManaMixerBehaviour_MovieMixerState.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace CriWare { class CriManaMovieMaterialBase; }
namespace CriWare::CriMana { class Player; }
namespace CriWare::CriTimeline::Mana { class CriManaClipBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_FORCESYNCEDSTOP_OFFSET UNITYSDK_OFFSET(0x1F956C90)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_GET_ISEDITMODE_OFFSET UNITYSDK_OFFSET(0x1F9557F0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ISINTERMEDIATESTATE_OFFSET UNITYSDK_OFFSET(0x1F9581C0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ISPLAYERSTOPPED_OFFSET UNITYSDK_OFFSET(0x1F956BA0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_KEEPAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1F955800)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1F958270)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1F958260)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1F958280)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1F958520)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1F958580)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1F9585F0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PAUSEPLAYER_OFFSET UNITYSDK_OFFSET(0x1F957F20)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PLAYMOVIE_OFFSET UNITYSDK_OFFSET(0x1F955B80)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PREPAREMOVIE_OFFSET UNITYSDK_OFFSET(0x1F956080)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PROCESSFRAMEONSEEKING_OFFSET UNITYSDK_OFFSET(0x1F956BF0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1F956DB0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_STOPMOVIE_OFFSET UNITYSDK_OFFSET(0x1F956690)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F958820)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9587F0)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaMixerBehaviour_TypeDefinitionIndex = 35033;

	class CriManaMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Single* StaticGet_cFrameSkipTolerance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CriManaMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0x8440);
		}
		static ::System::Double* StaticGet_cPreloadTimeSec()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(CriManaMixerBehaviour_TypeDefinitionIndex)->GetStaticField(0x8448);
		}
		::UnityEngine::Playables::PlayableDirector* m_PlayableDirector; // 0x10
		::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* m_clips; // 0x18
		::CriWare::CriManaMovieMaterialBase* m_boundMovieMaterial; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Runtime::InteropServices::GCHandle>* m_gcHandleList; // 0x28
		::System::Boolean m_frameSync; // 0x30
		::System::Boolean m_CheckPosWithinClip; // 0x31
		::System::Nullable_1<::System::Guid> m_lastClipId; // 0x34
		::System::Double lastPlayedTime; // 0x48
		::System::Double m_currentSeekingFrameTime; // 0x50
		::System::Single m_originalAudioVolume; // 0x58
		::System::Single m_originalSubAudioVolume; // 0x5C
		::System::Single m_originalExtraAudioVolume; // 0x60
		::System::Boolean enableTimelineScrubPlayback; // 0x64
		::System::Double m_lastDirectorTime; // 0x68
		::CriWare::CriTimeline::Mana::CriManaMixerBehaviour_MovieMixerState m_movieMixerState; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsEditMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_GET_ISEDITMODE_OFFSET))();
		}

		::System::Void KeepAudioVolume(::System::Boolean fadeAudio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_KEEPAUDIOVOLUME_OFFSET))(this, fadeAudio);
		}

		::System::Boolean PlayMovie(::CriWare::CriTimeline::Mana::CriManaClipBase* clipAsset, ::System::Int32 startFrame, ::System::Double startTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriTimeline::Mana::CriManaClipBase*, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PLAYMOVIE_OFFSET))(this, clipAsset, startFrame, startTime);
		}

		::System::Boolean PrepareMovie(::CriWare::CriTimeline::Mana::CriManaClipBase* clipAsset)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriTimeline::Mana::CriManaClipBase*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PREPAREMOVIE_OFFSET))(this, clipAsset);
		}

		::System::Boolean StopMovie(::System::Boolean keepLastFrame)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_STOPMOVIE_OFFSET))(this, keepLastFrame);
		}

		static ::System::Boolean IsPlayerStopped(::CriWare::CriMana::Player* player)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ISPLAYERSTOPPED_OFFSET))(player);
		}

		::System::Void ProcessFrameOnSeeking(::UnityEngine::Timeline::TimelineClip* activeClip, ::CriWare::CriTimeline::Mana::CriManaClipBase* clip, ::System::Double frameTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::CriWare::CriTimeline::Mana::CriManaClipBase*, ::System::Double))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PROCESSFRAMEONSEEKING_OFFSET))(this, activeClip, clip, frameTime);
		}

		::System::Void ForceSyncedStop(::System::Boolean keepLastFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_FORCESYNCEDSTOP_OFFSET))(this, keepLastFrame);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Boolean IsIntermediateState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ISINTERMEDIATESTATE_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, playable, info);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, playable, info);
		}

		::System::Void PausePlayer(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_PAUSEPLAYER_OFFSET))(this, pause);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, playable);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, playable);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, playable);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}
	};
}
