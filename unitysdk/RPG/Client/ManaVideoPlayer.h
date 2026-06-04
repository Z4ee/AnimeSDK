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

#define RPG_CLIENT_MANAVIDEOPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0xBEA6330)
#define RPG_CLIENT_MANAVIDEOPLAYER_BINDCAPTION_OFFSET UNITYSDK_OFFSET(0xBEA68D0)
#define RPG_CLIENT_MANAVIDEOPLAYER_CLEARPAUSE_OFFSET UNITYSDK_OFFSET(0xBEA6B30)
#define RPG_CLIENT_MANAVIDEOPLAYER_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEA6BD0)
#define RPG_CLIENT_MANAVIDEOPLAYER_CREATEBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xBEA6100)
#define RPG_CLIENT_MANAVIDEOPLAYER_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0xBEA5E50)
#define RPG_CLIENT_MANAVIDEOPLAYER_GETFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xBEA6F10)
#define RPG_CLIENT_MANAVIDEOPLAYER_GETMANAMOVIECONTROLLERFORUI_OFFSET UNITYSDK_OFFSET(0xBEA69C0)
#define RPG_CLIENT_MANAVIDEOPLAYER_GETVIDEORATIO_OFFSET UNITYSDK_OFFSET(0xBEA6D00)
#define RPG_CLIENT_MANAVIDEOPLAYER_GET_HASCAPTION_OFFSET UNITYSDK_OFFSET(0xBEA7060)
#define RPG_CLIENT_MANAVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xBEA6FE0)
#define RPG_CLIENT_MANAVIDEOPLAYER_MUTEVOLUME_OFFSET UNITYSDK_OFFSET(0xBEA6F70)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBEA64F0)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBEA6400)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBEA63A0)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xBEA6450)
#define RPG_CLIENT_MANAVIDEOPLAYER_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xBEA64A0)
#define RPG_CLIENT_MANAVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0xBEA6AC0)
#define RPG_CLIENT_MANAVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0xBEA6A20)
#define RPG_CLIENT_MANAVIDEOPLAYER_PREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0xBEA6A70)
#define RPG_CLIENT_MANAVIDEOPLAYER_RESETCONFIG_OFFSET UNITYSDK_OFFSET(0xBEA61A0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SEEKTOBEGIN_OFFSET UNITYSDK_OFFSET(0xBEA6CB0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETCALLBACKACTION_OFFSET UNITYSDK_OFFSET(0xBEA66F0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETCAPTIONACTIVE_OFFSET UNITYSDK_OFFSET(0xBEA6960)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETDISABLECAMERAIFVIDEOPLAYING_OFFSET UNITYSDK_OFFSET(0xBEA6E30)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETENDPAUSE_OFFSET UNITYSDK_OFFSET(0xBEA62C0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETGUIDEVIDEOID_OFFSET UNITYSDK_OFFSET(0xBEA6690)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETLOOPCGID_OFFSET UNITYSDK_OFFSET(0xBEA6630)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETLOOPENDCALLBACKACTION_OFFSET UNITYSDK_OFFSET(0xBEA6780)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETLOOP_OFFSET UNITYSDK_OFFSET(0xBEA6250)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETMATERIALAVAILABLECALLBACKACTION_OFFSET UNITYSDK_OFFSET(0xBEA6860)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETREADYFORRENDERINGCALLBACKACTION_OFFSET UNITYSDK_OFFSET(0xBEA67F0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETSTARTFRAME_OFFSET UNITYSDK_OFFSET(0xBEA6EA0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETUPRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xBEA6DB0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SETVIDEOID_OFFSET UNITYSDK_OFFSET(0xBEA65D0)
#define RPG_CLIENT_MANAVIDEOPLAYER_SKIPTOEND_OFFSET UNITYSDK_OFFSET(0xBEA6C60)
#define RPG_CLIENT_MANAVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0xBEA6B80)
#define RPG_CLIENT_MANAVIDEOPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xBEA6580)
#define RPG_CLIENT_MANAVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA70F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPlayer_TypeDefinitionIndex = 68355;

	class ManaVideoPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_1611AD1A09A7A324* _Behavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ManaVideoPlayer* CreatePlayer(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ManaVideoPlayer*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_CREATEPLAYER_OFFSET))(a1, a2, a3);
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

		::System::Void SetVideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETVIDEOID_OFFSET))(this, a1);
		}

		::System::Void SetLoopCGID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETLOOPCGID_OFFSET))(this, a1);
		}

		::System::Void SetGuideVideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETGUIDEVIDEOID_OFFSET))(this, a1);
		}

		::System::Void SetCallbackAction(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETCALLBACKACTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLoopEndCallbackAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETLOOPENDCALLBACKACTION_OFFSET))(this, a1);
		}

		::System::Void SetReadyForRenderingCallbackAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETREADYFORRENDERINGCALLBACKACTION_OFFSET))(this, a1);
		}

		::System::Void SetMaterialAvailableCallbackAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETMATERIALAVAILABLECALLBACKACTION_OFFSET))(this, a1);
		}

		::System::Void BindCaption(::RPG::GameCore::VideoCaptionPosition a1, ::UnityEngine::Transform* a2, ::UnityEngine::UI::Text* a3, ::UnityEngine::CanvasGroup* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoCaptionPosition, ::UnityEngine::Transform*, ::UnityEngine::UI::Text*, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_BINDCAPTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetCaptionActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETCAPTIONACTIVE_OFFSET))(this, a1);
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

		::System::Void Pause(::System::Boolean a1, ::RPG::Client::ManaVideoPlayerPauseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ManaVideoPlayerPauseReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_PAUSE_OFFSET))(this, a1, a2);
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

		::System::Void SetupRenderTarget(::UnityEngine::UI::Graphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETUPRENDERTARGET_OFFSET))(this, a1);
		}

		::System::Void SetLoop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETLOOP_OFFSET))(this, a1);
		}

		::System::Void SetEndPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETENDPAUSE_OFFSET))(this, a1);
		}

		::System::Void SetDisableCameraIfVideoPlaying(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETDISABLECAMERAIFVIDEOPLAYING_OFFSET))(this, a1);
		}

		::System::Void SetStartFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_SETSTARTFRAME_OFFSET))(this, a1);
		}

		::RPG::Client::ManaVideoPlayerFrameInfo* GetFrameInfo()
		{
			return ((::RPG::Client::ManaVideoPlayerFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_GETFRAMEINFO_OFFSET))(this);
		}

		::System::Void MuteVolume(::System::Boolean a1, ::RPG::Client::ManaVideoPlayerVolumeMuteReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ManaVideoPlayerVolumeMuteReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYER_MUTEVOLUME_OFFSET))(this, a1, a2);
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
