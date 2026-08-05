#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_A944C35C433158AC;
class Class_2_B6F426A12920386E;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoWidgetContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_AFTERVIDEOPREPARED_OFFSET UNITYSDK_OFFSET(0x11A0C810)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ASPECTFORHEIGHT_OFFSET UNITYSDK_OFFSET(0x11A0A790)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CHECKENDPAUSE_OFFSET UNITYSDK_OFFSET(0x11A0B5B0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CLOSEREADYMASK_OFFSET UNITYSDK_OFFSET(0x11A0CF70)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ENABLEROOTNOSKIPBTN_OFFSET UNITYSDK_OFFSET(0x11A0B060)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_FULLSCREENVIDEOFADEOUT_OFFSET UNITYSDK_OFFSET(0x11A0B0F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GENERALBLACKMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x11A0A3F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GETDURATION_OFFSET UNITYSDK_OFFSET(0x11A0B3C0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11A0A210)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONERROR_OFFSET UNITYSDK_OFFSET(0x11A0CF20)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONFINISHBOTHPREPARE_OFFSET UNITYSDK_OFFSET(0x11A0CEB0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x11A0C1C0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11A0B6D0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x11A0CFE0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONSTARTED_OFFSET UNITYSDK_OFFSET(0x11A0D290)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11A0A9C0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11A09CF0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11A09E40)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_OPENREADYMASK_OFFSET UNITYSDK_OFFSET(0x11A0A1A0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x11A0B480)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAYMOVIEBARFADEIN_OFFSET UNITYSDK_OFFSET(0x11A0A2A0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAYMOVIEBARFADEOUT_OFFSET UNITYSDK_OFFSET(0x11A0A490)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x11A0B250)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_RECOVER_OFFSET UNITYSDK_OFFSET(0x11A0B510)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_REGISTEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x11A0CBD0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_SETPLAYANIMODE_OFFSET UNITYSDK_OFFSET(0x11A0A010)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_SETUPSCREENASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x11A0A660)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STARTPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x11A0C4B0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STARTPREPAREVIDEO_OFFSET UNITYSDK_OFFSET(0x11A0C550)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x11A0B1F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0x11A0AD20)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_TRYSETSPEED_OFFSET UNITYSDK_OFFSET(0x11A0B7A0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A0B970)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A0D2E0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER__UPDATE_G___ACCELERATE_22_0_OFFSET UNITYSDK_OFFSET(0x11A0C1B0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11A0D340)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11A0D3D0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11A0D400)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11A0D490)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11A0D520)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoWidgetController_TypeDefinitionIndex = 81109;

	class UIVideoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B6F426A12920386E* _view; // 0x2C0
		::Class_1_E9529ED64113E4E9* _videoPlayerHelper; // 0x2C8
		::MoleMole::UIVideoWidgetContext* _context; // 0x2D0
		::MoleMole::IVideoPlayer* _videoPlayer; // 0x2D8
		::Foundation::AssetRequestHandle _videoRequest; // 0x2E0
		::Class_2_A944C35C433158AC* _audioTimelineTask; // 0x300
		::System::Single timeCount; // 0x308
		::System::Boolean isGamePlayMixActive; // 0x30C
		::System::Int32 _clickAccStartFrame; // 0x310
		::System::Boolean _isClickAcceleration; // 0x314
		::System::Boolean _clickedByGamepad; // 0x315
		::System::Boolean _isClickSkip; // 0x316

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void PlayMovieBarFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAYMOVIEBARFADEIN_OFFSET))(this);
		}

		::System::Single PlayMovieBarFadeOut()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAYMOVIEBARFADEOUT_OFFSET))(this);
		}

		::System::Void SetPlayAniMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_SETPLAYANIMODE_OFFSET))(this);
		}

		::System::Void SetupScreenAspectRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_SETUPSCREENASPECTRATIO_OFFSET))(this);
		}

		::System::Void AspectForHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ASPECTFORHEIGHT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void GeneralBlackMaskFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GENERALBLACKMASKFADEIN_OFFSET))(this);
		}

		::System::Void EnableRootNoSkipBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ENABLEROOTNOSKIPBTN_OFFSET))(this);
		}

		::System::Single FullScreenVideoFadeOut()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_FULLSCREENVIDEOFADEOUT_OFFSET))(this);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STEPFORWARD_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PAUSE_OFFSET))(this);
		}

		::System::Void Recover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_RECOVER_OFFSET))(this);
		}

		::System::UInt64 GetDuration()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GETDURATION_OFFSET))(this);
		}

		::System::Void CheckEndPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CHECKENDPAUSE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void TrySetSpeed(::System::Single speedFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_TRYSETSPEED_OFFSET))(this, speedFactor);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void StartPlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STARTPLAYVIDEO_OFFSET))(this);
		}

		::System::Void AfterVideoPrepared(::MoleMole::IVideoPlayer* videoPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_AFTERVIDEOPREPARED_OFFSET))(this, videoPlayer);
		}

		::System::Void StartPrepareVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STARTPREPAREVIDEO_OFFSET))(this);
		}

		::System::Void OnFinishBothPrepare(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONFINISHBOTHPREPARE_OFFSET))(this, trans);
		}

		::System::Void RegisterEventHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_REGISTEREVENTHANDLER_OFFSET))(this);
		}

		::System::Void OnError(::MoleMole::IVideoPlayer* source, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONERROR_OFFSET))(this, source, message);
		}

		::System::Void OpenReadyMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_OPENREADYMASK_OFFSET))(this);
		}

		::System::Void CloseReadyMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CLOSEREADYMASK_OFFSET))(this);
		}

		::System::Void OnPrepareCompleted(::MoleMole::IVideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONPREPARECOMPLETED_OFFSET))(this, source);
		}

		::System::Void OnStarted(::MoleMole::IVideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONSTARTED_OFFSET))(this, source);
		}

		::System::Void OnFinished(::MoleMole::IVideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONFINISHED_OFFSET))(this, source);
		}

		static ::System::Void _Update_g___accelerate_22_0(::System::Int32 startFrame, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* configs)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER__UPDATE_G___ACCELERATE_22_0_OFFSET))(startFrame, configs);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
