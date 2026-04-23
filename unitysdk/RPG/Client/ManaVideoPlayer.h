#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ManaVideoPlayerPauseReason.h"
#include "unitysdk/RPG/Client/ManaVideoPlayerVolumeMuteReason.h"
#include "unitysdk/RPG/GameCore/VideoCaptionPosition.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_1611AD1A09A7A324;
namespace CriWare { class CriManaMovieControllerForUI; }
namespace RPG::Client { class ManaVideoPlayerFrameInfo; }
namespace System { class Action; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MANAVIDEOPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA780220)
#define RPG_CLIENT_MANAVIDEOPLAYER_BINDCAPTION_OFFSET UNITYSDK_OFFSET(0xA7807D0)
#define RPG_CLIENT_MANAVIDEOPLAYER_CLEARPAUSE_OFFSET UNITYSDK_OFFSET(0xA780A30)
#define RPG_CLIENT_MANAVIDEOPLAYER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA780AD0)
#define RPG_CLIENT_MANAVIDEOPLAYER_CREATEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA77FFF0)
#define RPG_CLIENT_MANAVIDEOPLAYER_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0xA77FD40)
#define RPG_CLIENT_MANAVIDEOPLAYER_GETFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xA780E10)
#define RPG_CLIENT_MANAVIDEOPLAYER_GETMANAMOVIECONTROLLERFORUI_OFFSET UNITYSDK_OFFSET(0xA7808C0)
#define RPG_CLIENT_MANAVIDEOPLAYER_GETVIDEORATIO_OFFSET UNITYSDK_OFFSET(0xA780C00)
#define RPG_CLIENT_MANAVIDEOPLAYER_GET_HASCAPTION_OFFSET UNITYSDK_OFFSET(0xA780F60)
#define RPG_CLIENT_MANAVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xA780EE0)
#define RPG_CLIENT_MANAVIDEOPLAYER_MUTEVOLUME_OFFSET UNITYSDK_OFFSET(0xA780E70)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA7803E0)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA7802F0)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA780290)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xA780340)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xA780390)
#define RPG_CLIENT_MANAVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0xA7809C0)
#define RPG_CLIENT_MANAVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0xA780920)
#define RPG_CLIENT_MANAVIDEOPLAYER_PREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0xA780970)
#define RPG_CLIENT_MANAVIDEOPLAYER_RESETCONFIG_OFFSET UNITYSDK_OFFSET(0xA780090)
#define RPG_CLIENT_MANAVIDEOPLAYER_SEEKTOBEGIN_OFFSET UNITYSDK_OFFSET(0xA780BB0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETCALLBACKACTION_OFFSET UNITYSDK_OFFSET(0xA7805E0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETCAPTIONACTIVE_OFFSET UNITYSDK_OFFSET(0xA780860)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETDISABLECAMERAIFVIDEOPLAYING_OFFSET UNITYSDK_OFFSET(0xA780D30)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETENDPAUSE_OFFSET UNITYSDK_OFFSET(0xA7801B0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETGUIDEVIDEOID_OFFSET UNITYSDK_OFFSET(0xA780580)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETLOOPCGID_OFFSET UNITYSDK_OFFSET(0xA780520)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETLOOPENDCALLBACKACTION_OFFSET UNITYSDK_OFFSET(0xA780670)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETLOOP_OFFSET UNITYSDK_OFFSET(0xA780140)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETMATERIALAVAILABLECALLBACKACTION_OFFSET UNITYSDK_OFFSET(0xA780750)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETREADYFORRENDERINGCALLBACKACTION_OFFSET UNITYSDK_OFFSET(0xA7806E0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETSTARTFRAME_OFFSET UNITYSDK_OFFSET(0xA780DA0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETUPRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA780CB0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETVIDEOID_OFFSET UNITYSDK_OFFSET(0xA7804C0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SKIPTOEND_OFFSET UNITYSDK_OFFSET(0xA780B60)
#define RPG_CLIENT_MANAVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0xA780A80)
#define RPG_CLIENT_MANAVIDEOPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA780470)
#define RPG_CLIENT_MANAVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xA780FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPlayer_TypeDefinitionIndex = 67403;

	class ManaVideoPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_1611AD1A09A7A324* _Behavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ManaVideoPlayer* CreatePlayer(::UnityEngine::GameObject* playerRoot, ::System::Boolean isLoop, ::System::Boolean endPause)
		{
			return ((::RPG::Client::ManaVideoPlayer*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_CREATEPLAYER_OFFSET))(playerRoot, isLoop, endPause);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void CreateBehavior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_CREATEBEHAVIOR_OFFSET))(this);
		}

		::System::Void ResetConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_RESETCONFIG_OFFSET))(this);
		}

		::System::Void SetVideoID(::System::UInt32 videoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETVIDEOID_OFFSET))(this, videoID);
		}

		::System::Void SetLoopCGID(::System::UInt32 loopCGID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETLOOPCGID_OFFSET))(this, loopCGID);
		}

		::System::Void SetGuideVideoID(::System::UInt32 guideVideoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETGUIDEVIDEOID_OFFSET))(this, guideVideoID);
		}

		::System::Void SetCallbackAction(::System::Action* onStartPlay, ::System::Action* onFinishPlay, ::System::Action* onBeforePlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETCALLBACKACTION_OFFSET))(this, onStartPlay, onFinishPlay, onBeforePlay);
		}

		::System::Void SetLoopEndCallbackAction(::System::Action* onLoopEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETLOOPENDCALLBACKACTION_OFFSET))(this, onLoopEnd);
		}

		::System::Void SetReadyForRenderingCallbackAction(::System::Action* onReadyForRendering)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETREADYFORRENDERINGCALLBACKACTION_OFFSET))(this, onReadyForRendering);
		}

		::System::Void SetMaterialAvailableCallbackAction(::System::Action* onMaterialAvailable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETMATERIALAVAILABLECALLBACKACTION_OFFSET))(this, onMaterialAvailable);
		}

		::System::Void BindCaption(::RPG::GameCore::VideoCaptionPosition position, ::UnityEngine::Transform* root, ::UnityEngine::UI::Text* text, ::UnityEngine::CanvasGroup* canvasGroup)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoCaptionPosition, ::UnityEngine::Transform*, ::UnityEngine::UI::Text*, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_BINDCAPTION_OFFSET))(this, position, root, text, canvasGroup);
		}

		::System::Void SetCaptionActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETCAPTIONACTIVE_OFFSET))(this, active);
		}

		::CriWare::CriManaMovieControllerForUI* GetManaMovieControllerForUI()
		{
			return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_GETMANAMOVIECONTROLLERFORUI_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void PrepareForRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_PREPAREFORRENDERING_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean sw, ::RPG::Client::ManaVideoPlayerPauseReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ManaVideoPlayerPauseReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_PAUSE_OFFSET))(this, sw, reason);
		}

		::System::Void ClearPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_CLEARPAUSE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_STOP_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_CLEAR_OFFSET))(this);
		}

		::System::Void SkipToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SKIPTOEND_OFFSET))(this);
		}

		::System::Void SeekToBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SEEKTOBEGIN_OFFSET))(this);
		}

		::System::Single GetVideoRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_GETVIDEORATIO_OFFSET))(this);
		}

		::System::Void SetupRenderTarget(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETUPRENDERTARGET_OFFSET))(this, graphic);
		}

		::System::Void SetLoop(::System::Boolean isLoop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETLOOP_OFFSET))(this, isLoop);
		}

		::System::Void SetEndPause(::System::Boolean endPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETENDPAUSE_OFFSET))(this, endPause);
		}

		::System::Void SetDisableCameraIfVideoPlaying(::System::Boolean disableCamera)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETDISABLECAMERAIFVIDEOPLAYING_OFFSET))(this, disableCamera);
		}

		::System::Void SetStartFrame(::System::Int32 frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETSTARTFRAME_OFFSET))(this, frame);
		}

		::RPG::Client::ManaVideoPlayerFrameInfo* GetFrameInfo()
		{
			return ((::RPG::Client::ManaVideoPlayerFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_GETFRAMEINFO_OFFSET))(this);
		}

		::System::Void MuteVolume(::System::Boolean mute, ::RPG::Client::ManaVideoPlayerVolumeMuteReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ManaVideoPlayerVolumeMuteReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_MUTEVOLUME_OFFSET))(this, mute, reason);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_HasCaption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_GET_HASCAPTION_OFFSET))(this);
		}
	};
}
