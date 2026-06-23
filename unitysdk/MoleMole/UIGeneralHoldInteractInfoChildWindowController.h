#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIGeneralHoldInteractInfoChildWindowController_AudioProgressDirection.h"
#include "unitysdk/MoleMole/UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_193;
class Class_1_BD91CB27E21ACA37_Class_3_EC22137A5AE21E1C_2;
class Class_2_2A78C864F3252FBD;
class Class_2_A6C27A12AD62162A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_CLEAREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x167A22E0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOFADEIN_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1679FC30)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOFADEIN_OFFSET UNITYSDK_OFFSET(0x167A2000)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOFADEOUT_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1679FF10)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOFADEOUT_OFFSET UNITYSDK_OFFSET(0x167A2430)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOINIT_OFFSET UNITYSDK_OFFSET(0x167A1010)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOONINPUTFINISHED_OFFSET UNITYSDK_OFFSET(0x167A2960)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOONINPUTINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x167A27E0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOONINPUTSTARTED_OFFSET UNITYSDK_OFFSET(0x167A2680)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DORESET_OFFSET UNITYSDK_OFFSET(0x167A15F0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOUPDATE_DEFAULT_OFFSET UNITYSDK_OFFSET(0x167A02B0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x167A2160)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_FADEOUTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x167A0230)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GETATTACHPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x167A2C80)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GETFOLLOWLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x167A2EA0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GETTARGETDISPLAYSTYLE_OFFSET UNITYSDK_OFFSET(0x167A2630)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GET_CIRCLEANIMATIONFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x167A2FC0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GET_ROOTANIMATIONFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x167A3100)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GET_TIPTEXTANIMATIONFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x167A3060)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x167A0920)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_INITEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x167A1DB0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_INITHANDLERS_OFFSET UNITYSDK_OFFSET(0x167A0A10)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_INPUTSTARTHANDLER_OFFSET UNITYSDK_OFFSET(0x167A2AC0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_INPUTSTOPHANDLER_OFFSET UNITYSDK_OFFSET(0x167A2B70)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONAFTERCAMERALATEUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x167A1B50)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167A1760)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONINPUTFINISHED_SCENETRANSFORM_OFFSET UNITYSDK_OFFSET(0x167A07C0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONINPUTINTERRUPTED_SCENETRANSFORM_OFFSET UNITYSDK_OFFSET(0x167A0740)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONINPUTSTARTED_SCENETRANSFORM_OFFSET UNITYSDK_OFFSET(0x167A06D0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x167A17F0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167A1AE0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167A0930)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167A10D0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_UPDATELOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x167A2590)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_UPDATESUPERPOSITIONAUDIO_OFFSET UNITYSDK_OFFSET(0x167A0350)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167A31A0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167A31B0)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x167A3240)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167A3300)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167A3310)
#define MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167A3320)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralHoldInteractInfoChildWindowController_TypeDefinitionIndex = 40303;

	class UIGeneralHoldInteractInfoChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* _audioEventForward; // 0x0
		// static const ::System::String* _audioEventReverse; // 0x0
		// static const ::System::String* _audioEventExplosion; // 0x0
		// static const ::System::String* _circleAnimFadeOut; // 0x0
		// static const ::System::String* _circleAnimFadeIn; // 0x0
		// static const ::System::String* _tipTextAnimFadeIn; // 0x0
		// static const ::System::String* _tipTextAnimFadeOut; // 0x0
		// static const ::System::String* _rootAnimFadeIn; // 0x0
		// static const ::System::String* _rootAnimFadeOut; // 0x0
		::MoleMole::UIGeneralHoldInteractInfoChildWindowController_AudioProgressDirection _audioDirection; // 0x318
		::System::Boolean _hasPlayedExplosion; // 0x31C
		::System::UInt32 _pendingAudioId; // 0x320
		::Class_2_2A78C864F3252FBD* _view; // 0x328
		::Class_2_A6C27A12AD62162A* _lastInteraction; // 0x330
		::System::Single _lastProgress; // 0x338
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle, ::System::Action_1<::Class_2_A6C27A12AD62162A*>*>* _fadeInHandlers; // 0x340
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle, ::System::Action_1<::Class_2_A6C27A12AD62162A*>*>* _fadeOutHandlers; // 0x348
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle, ::System::Action_2<::Class_2_A6C27A12AD62162A*, ::System::Single>*>* _updateHandlers; // 0x350
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle, ::System::Action_1<::Class_2_A6C27A12AD62162A*>*>* _inputStartedHandlers; // 0x358
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle, ::System::Action_2<::Class_2_A6C27A12AD62162A*, ::System::Single>*>* _inputInterruptedHandlers; // 0x360
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle, ::System::Action_1<::Class_2_A6C27A12AD62162A*>*>* _inputFinishedHandlers; // 0x368
		::Class_1_BD91CB27E21ACA37_Class_3_EC22137A5AE21E1C_2* _inputStartHandler; // 0x370
		::Class_1_BD91CB27E21ACA37_Class_3_EC22137A5AE21E1C_2* _inputStopHandler; // 0x378
		::UnityEngine::Transform* _cachedTransform; // 0x380
		::MoleMole::Battle::Entity* _cachedEntity; // 0x388
		::MoleMole::Battle::Entity* _followEntity; // 0x390
		::Foundation::Coroutine::CoroutineHandle _fadeOutAnimCoroutine; // 0x398
		::UnityEngine::RectTransform* _parent; // 0x3A0
		::UnityEngine::RectTransform* _self; // 0x3A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void DoFadeIn_Default(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOFADEIN_DEFAULT_OFFSET))(this, interaction);
		}

		::System::Void DoFadeOut_Default(::Class_2_A6C27A12AD62162A* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOFADEOUT_DEFAULT_OFFSET))(this, instance);
		}

		::System::Void DoUpdate_Default(::Class_2_A6C27A12AD62162A* instance, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOUPDATE_DEFAULT_OFFSET))(this, instance, progress);
		}

		::System::Void UpdateSuperpositionAudio(::MoleMole::UIGeneralHoldInteractInfoChildWindowController_AudioProgressDirection newDirection, ::System::Single currentTime, ::System::Single totalTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHoldInteractInfoChildWindowController_AudioProgressDirection, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_UPDATESUPERPOSITIONAUDIO_OFFSET))(this, newDirection, currentTime, totalTime);
		}

		::System::Void OnInputStarted_SceneTransform(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONINPUTSTARTED_SCENETRANSFORM_OFFSET))(this, interaction);
		}

		::System::Void OnInputInterrupted_SceneTransform(::Class_2_A6C27A12AD62162A* interaction, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONINPUTINTERRUPTED_SCENETRANSFORM_OFFSET))(this, interaction, progress);
		}

		::System::Void OnInputFinished_SceneTransform(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONINPUTFINISHED_SCENETRANSFORM_OFFSET))(this, interaction);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DORESET_OFFSET))(this);
		}

		::System::Void DoInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOINIT_OFFSET))(this);
		}

		::System::Void OnAfterCameraLateUpdateNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_ONAFTERCAMERALATEUPDATENOTIFY_OFFSET))(this);
		}

		::System::Void InitHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_INITHANDLERS_OFFSET))(this);
		}

		static ::MoleMole::UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle GetTargetDisplayStyle(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::MoleMole::UIGeneralHoldInteractInfoChildWindowController_TargetDisplayStyle(*)(::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GETTARGETDISPLAYSTYLE_OFFSET))(interaction);
		}

		::System::Void DoFadeIn(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOFADEIN_OFFSET))(this, interaction);
		}

		::System::Void DoFadeOut(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOFADEOUT_OFFSET))(this, interaction);
		}

		::System::Void DoUpdate(::Class_2_A6C27A12AD62162A* interaction, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOUPDATE_OFFSET))(this, interaction, progress);
		}

		::System::Void DoOnInputStarted(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOONINPUTSTARTED_OFFSET))(this, interaction);
		}

		::System::Void DoOnInputInterrupted(::Class_2_A6C27A12AD62162A* interaction, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOONINPUTINTERRUPTED_OFFSET))(this, interaction, progress);
		}

		::System::Void DoOnInputFinished(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_DOONINPUTFINISHED_OFFSET))(this, interaction);
		}

		::System::Void InitEventListener(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_INITEVENTLISTENER_OFFSET))(this, interaction);
		}

		::System::Void ClearEventListener(::Class_2_A6C27A12AD62162A* interaction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A6C27A12AD62162A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_CLEAREVENTLISTENER_OFFSET))(this, interaction);
		}

		::System::Void InputStartHandler(::Class_0_16E4307DCC419505_193*& instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_193*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_INPUTSTARTHANDLER_OFFSET))(this, instance);
		}

		::System::Void InputStopHandler(::Class_0_16E4307DCC419505_193*& instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_193*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_INPUTSTOPHANDLER_OFFSET))(this, instance);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* FadeOutCoroutine()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_FADEOUTCOROUTINE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAttachPointPosition(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GETATTACHPOINTPOSITION_OFFSET))(this, entity);
		}

		::UnityEngine::Vector2 GetFollowLocalPosition(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GETFOLLOWLOCALPOSITION_OFFSET))(this, entity);
		}

		::System::Void UpdateLocalPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_UPDATELOCALPOSITION_OFFSET))(this);
		}

		::System::Single get_CircleAnimationFadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GET_CIRCLEANIMATIONFADEOUTTIME_OFFSET))(this);
		}

		::System::Single get_TipTextAnimationFadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GET_TIPTEXTANIMATIONFADEOUTTIME_OFFSET))(this);
		}

		::System::Single get_RootAnimationFadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER_GET_ROOTANIMATIONFADEOUTTIME_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALHOLDINTERACTINFOCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
