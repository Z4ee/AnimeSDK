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

#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_AFTERVIDEOPREPARED_OFFSET UNITYSDK_OFFSET(0xF62F250)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ASPECTFORHEIGHT_OFFSET UNITYSDK_OFFSET(0xF62D1B0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CHECKENDPAUSE_OFFSET UNITYSDK_OFFSET(0xF62DFE0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_CLOSEREADYMASK_OFFSET UNITYSDK_OFFSET(0xF62F9B0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ENABLEROOTNOSKIPBTN_OFFSET UNITYSDK_OFFSET(0xF62DA80)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_FULLSCREENVIDEOFADEOUT_OFFSET UNITYSDK_OFFSET(0xF62DB10)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GENERALBLACKMASKFADEIN_OFFSET UNITYSDK_OFFSET(0xF62CE20)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_GETDURATION_OFFSET UNITYSDK_OFFSET(0xF62DDF0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xF62CC40)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONERROR_OFFSET UNITYSDK_OFFSET(0xF62F960)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONFINISHBOTHPREPARE_OFFSET UNITYSDK_OFFSET(0xF62F8F0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xF62EC00)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xF62E100)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0xF62FA20)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONSTARTED_OFFSET UNITYSDK_OFFSET(0xF62FCD0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xF62D3E0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xF62C720)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xF62C870)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_OPENREADYMASK_OFFSET UNITYSDK_OFFSET(0xF62CBD0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0xF62DEB0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAYMOVIEBARFADEIN_OFFSET UNITYSDK_OFFSET(0xF62CCD0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAYMOVIEBARFADEOUT_OFFSET UNITYSDK_OFFSET(0xF62CEC0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0xF62DC80)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_RECOVER_OFFSET UNITYSDK_OFFSET(0xF62DF40)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_REGISTEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xF62F610)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_SETPLAYANIMODE_OFFSET UNITYSDK_OFFSET(0xF62CA40)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_SETUPSCREENASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xF62D080)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STARTPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xF62EEF0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STARTPREPAREVIDEO_OFFSET UNITYSDK_OFFSET(0xF62EF90)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0xF62DC20)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0xF62D740)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_TRYSETSPEED_OFFSET UNITYSDK_OFFSET(0xF62E1D0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF62E3A0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xF62FD20)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER__UPDATE_G___ACCELERATE_22_0_OFFSET UNITYSDK_OFFSET(0xF62EBF0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xF62FD80)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xF62FE10)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xF62FE40)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xF62FED0)
#define MOLEMOLE_UIVIDEOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xF62FF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoWidgetController_TypeDefinitionIndex = 70721;

	class UIVideoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B6F426A12920386E* _view; // 0x2B8
		::Class_1_E9529ED64113E4E9* _videoPlayerHelper; // 0x2C0
		::MoleMole::UIVideoWidgetContext* _context; // 0x2C8
		::MoleMole::IVideoPlayer* _videoPlayer; // 0x2D0
		::Foundation::AssetRequestHandle _videoRequest; // 0x2D8
		::Class_2_A944C35C433158AC* _audioTimelineTask; // 0x2F8
		::System::Single timeCount; // 0x300
		::System::Boolean isGamePlayMixActive; // 0x304
		::System::Int32 _clickAccStartFrame; // 0x308
		::System::Boolean _isClickAcceleration; // 0x30C
		::System::Boolean _clickedByGamepad; // 0x30D
		::System::Boolean _isClickSkip; // 0x30E

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
